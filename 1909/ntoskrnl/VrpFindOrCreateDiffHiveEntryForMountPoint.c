/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x140846650
 * Callers:
 *     VrpLoadDifferencingHive @ 0x140846830 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14003EAB0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14003EF80 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     VrpAllocateDiffHiveEntry @ 0x14084618C (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x1408464C8 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, const void **a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  _QWORD *DiffHiveEntry; // rdi
  __int64 DiffHiveEntryForMountPointWithLock; // rdx
  _QWORD *v10; // r14
  struct _KTHREAD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v15; // [rsp+58h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  DiffHiveEntry = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
    goto LABEL_2;
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  DiffHiveEntry = VrpAllocateDiffHiveEntry(&String1->Length, a2);
  v10 = DiffHiveEntry;
  if ( !DiffHiveEntry )
    return (unsigned int)-1073741670;
  v11 = KeGetCurrentThread();
  --v11->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
LABEL_2:
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
  }
  else
  {
    v15 = DiffHiveEntry[1] & (-1LL << (dword_140463204 & 0x1F));
    v12 = qword_140463208;
    v13 = (37
         * (BYTE6(v15)
          + 37
          * (BYTE5(v15)
           + 37
           * (BYTE4(v15)
            + 37 * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
         + HIBYTE(v15)) & (((unsigned int)dword_140463204 >> 5) - 1);
    *DiffHiveEntry = *(_QWORD *)(qword_140463208 + 8 * v13);
    *(_QWORD *)(v12 + 8 * v13) = DiffHiveEntry;
    DiffHiveEntry = 0LL;
    ++gLoadedDiffHives;
    DiffHiveEntryForMountPointWithLock = (__int64)v10;
  }
  *a3 = DiffHiveEntryForMountPointWithLock;
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v4;
}
