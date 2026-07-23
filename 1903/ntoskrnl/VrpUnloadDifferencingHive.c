/*
 * XREFs of VrpUnloadDifferencingHive @ 0x140847524
 * Callers:
 *     VrpCleanupNamespace @ 0x140841254 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140842924 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140842FC0 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003ED70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003F240 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ExfTryToWakePushLock @ 0x14009E550 (ExfTryToWakePushLock.c)
 *     ZwUnloadKey @ 0x1401C38F0 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1401C3910 (ZwUnloadKey2.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x140846C24 (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x140846C74 (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x140846CBC (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x140846E54 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x1408474E4 (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v4; // rdi
  NTSTATUS v5; // ebp
  struct _KTHREAD *v6; // rax
  volatile signed __int64 *v7; // rsi
  char v8; // al
  char v9; // r14
  struct _KTHREAD *v10; // rax
  signed __int64 v11; // rax
  unsigned __int64 i; // rdx
  signed __int64 v13; // rtt
  OBJECT_ATTRIBUTES KeyObjectAttributes; // [rsp+20h] [rbp-48h] BYREF

  memset(&KeyObjectAttributes, 0, sizeof(KeyObjectAttributes));
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  v4 = DiffHiveEntryForMountPointWithLock;
  if ( DiffHiveEntryForMountPointWithLock
    && _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
  {
    __fastfail(0xEu);
  }
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( v4 )
  {
    v6 = KeGetCurrentThread();
    --v6->KernelApcDisable;
    v7 = (volatile signed __int64 *)(v4 + 24);
    ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
    if ( VrpDecrementDiffHiveEntryHardRefCount(v4) )
    {
      v8 = VrpBecomeDiffHiveEntryTransitionOwner(v4);
      *(_DWORD *)(v4 + 56) &= ~1u;
      v9 = v8;
      if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 24));
      KeAbPostRelease(v4 + 24);
      KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
      KeyObjectAttributes.RootDirectory = 0LL;
      KeyObjectAttributes.Length = 48;
      *(_OWORD *)&KeyObjectAttributes.SecurityDescriptor = 0LL;
      KeyObjectAttributes.Attributes = 576;
      KeyObjectAttributes.ObjectName = String1;
      v5 = ZwUnloadKey(&KeyObjectAttributes);
      if ( v5 < 0 )
        v5 = ZwUnloadKey2(&KeyObjectAttributes, 1u);
      v10 = KeGetCurrentThread();
      --v10->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
      if ( v5 < 0 )
      {
        *(_DWORD *)(v4 + 56) |= 1u;
        if ( ++*(_QWORD *)(v4 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v4 + 16));
          v11 = *(_QWORD *)(v4 + 16);
          for ( i = v11 + 1; ; i = v11 + 1 )
          {
            if ( i <= 1 )
            {
              if ( i != 1 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v13 = v11;
            v11 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), i, v11);
            if ( v13 == v11 )
              break;
          }
        }
      }
      if ( v9 )
        VrpRelinquishDiffHiveEntryTransitionOwner(v4);
    }
    else
    {
      v5 = 0;
    }
    if ( (_InterlockedExchangeAdd64(v7, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v4 + 24));
    KeAbPostRelease(v4 + 24);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((_QWORD *)v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v5;
}
