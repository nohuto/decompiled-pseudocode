/*
 * XREFs of VrpUnloadDifferencingHive @ 0x14080DCDC
 * Callers:
 *     VrpCleanupNamespace @ 0x1408079D0 (VrpCleanupNamespace.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140809090 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140809710 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400915C0 (ExfTryToWakePushLock.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B7990 (KiLeaveCriticalRegionUnsafe.c)
 *     ZwUnloadKey @ 0x1401BB970 (ZwUnloadKey.c)
 *     ZwUnloadKey2 @ 0x1401BB990 (ZwUnloadKey2.c)
 *     VrpBecomeDiffHiveEntryTransitionOwner @ 0x14080D32C (VrpBecomeDiffHiveEntryTransitionOwner.c)
 *     VrpDecrementDiffHiveEntryHardRefCount @ 0x14080D37C (VrpDecrementDiffHiveEntryHardRefCount.c)
 *     VrpDereferenceDiffHiveEntry @ 0x14080D3C4 (VrpDereferenceDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14080D578 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 *     VrpRelinquishDiffHiveEntryTransitionOwner @ 0x14080DC9C (VrpRelinquishDiffHiveEntryTransitionOwner.c)
 */

__int64 __fastcall VrpUnloadDifferencingHive(UNICODE_STRING *String1)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 DiffHiveEntryForMountPointWithLock; // rax
  __int64 v4; // rdi
  int v5; // ebp
  struct _KTHREAD *v6; // rax
  volatile signed __int64 *v7; // rsi
  char v8; // al
  char v9; // r14
  __int64 v10; // r8
  struct _KTHREAD *v11; // rax
  signed __int64 v12; // rax
  unsigned __int64 i; // rdx
  signed __int64 v14; // rtt
  OBJECT_ATTRIBUTES KeyObjectAttributes; // [rsp+20h] [rbp-48h] BYREF

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
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
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
      KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
      KeyObjectAttributes.RootDirectory = 0LL;
      KeyObjectAttributes.Length = 48;
      *(_OWORD *)&KeyObjectAttributes.SecurityDescriptor = 0LL;
      KeyObjectAttributes.Attributes = 576;
      KeyObjectAttributes.ObjectName = String1;
      v5 = ZwUnloadKey(&KeyObjectAttributes);
      if ( v5 < 0 )
        v5 = ZwUnloadKey2((__int64)&KeyObjectAttributes, 1LL, v10);
      v11 = KeGetCurrentThread();
      --v11->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(v4 + 24, 0LL);
      if ( v5 < 0 )
      {
        *(_DWORD *)(v4 + 56) |= 1u;
        if ( ++*(_QWORD *)(v4 + 32) <= 1uLL )
        {
          _m_prefetchw((const void *)(v4 + 16));
          v12 = *(_QWORD *)(v4 + 16);
          for ( i = v12 + 1; ; i = v12 + 1 )
          {
            if ( i <= 1 )
            {
              if ( i != 1 )
                __fastfail(0xEu);
              __fastfail(0xEu);
            }
            v14 = v12;
            v12 = _InterlockedCompareExchange64((volatile signed __int64 *)(v4 + 16), i, v12);
            if ( v14 == v12 )
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
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    VrpDereferenceDiffHiveEntry((_QWORD *)v4);
  }
  else
  {
    return (unsigned int)-1073741772;
  }
  return (unsigned int)v5;
}
