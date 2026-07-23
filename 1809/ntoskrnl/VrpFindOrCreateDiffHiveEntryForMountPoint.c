/*
 * XREFs of VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14080E908
 * Callers:
 *     VrpLoadDifferencingHive @ 0x14080EAF8 (VrpLoadDifferencingHive.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x14004EC70 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     ExReleasePushLockEx @ 0x14004F160 (ExReleasePushLockEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1400B78F0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     VrpAllocateDiffHiveEntry @ 0x14080E400 (VrpAllocateDiffHiveEntry.c)
 *     VrpFindDiffHiveEntryForMountPointWithLock @ 0x14080E758 (VrpFindDiffHiveEntryForMountPointWithLock.c)
 */

__int64 __fastcall VrpFindOrCreateDiffHiveEntryForMountPoint(PCUNICODE_STRING String1, const void **a2, __int64 *a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v4; // ebx
  _QWORD *DiffHiveEntry; // rdi
  __int64 DiffHiveEntryForMountPointWithLock; // rdx
  struct _KTHREAD *v10; // rax
  unsigned int v11; // r9d
  char v12; // cl
  unsigned __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 v15; // r9

  CurrentThread = KeGetCurrentThread();
  v4 = 0;
  DiffHiveEntry = 0LL;
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockSharedEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
    goto LABEL_2;
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  DiffHiveEntry = VrpAllocateDiffHiveEntry(&String1->Length, a2);
  if ( !DiffHiveEntry )
    return (unsigned int)-1073741670;
  v10 = KeGetCurrentThread();
  --v10->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  DiffHiveEntryForMountPointWithLock = VrpFindDiffHiveEntryForMountPointWithLock(String1);
  if ( DiffHiveEntryForMountPointWithLock )
  {
LABEL_2:
    if ( _InterlockedIncrement64((volatile signed __int64 *)(DiffHiveEntryForMountPointWithLock + 16)) <= 1 )
      __fastfail(0xEu);
    *a3 = DiffHiveEntryForMountPointWithLock;
  }
  else
  {
    v11 = (unsigned int)dword_1404389A4 >> 5;
    v12 = dword_1404389A4 & 0x1F;
    *a3 = (__int64)DiffHiveEntry;
    v13 = DiffHiveEntry[1] & (-1LL << v12);
    v14 = qword_1404389A8;
    v15 = (HIBYTE(v13)
         + 37
         * (BYTE6(v13)
          + 37
          * (BYTE5(v13)
           + 37
           * (BYTE4(v13)
            + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))) & (v11 - 1);
    *DiffHiveEntry = *(_QWORD *)(qword_1404389A8 + 8 * v15);
    *(_QWORD *)(v14 + 8 * v15) = DiffHiveEntry;
    DiffHiveEntry = 0LL;
    ++gLoadedDiffHives;
  }
  ExReleasePushLockEx((ULONG_PTR)&gLoadedDiffHivesLock, 0LL);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( DiffHiveEntry )
    ExFreePoolWithTag(DiffHiveEntry, 0x67655256u);
  return v4;
}
