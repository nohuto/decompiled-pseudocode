/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14031C494
 * Callers:
 *     ExReleaseSpinLockShared @ 0x140007960 (ExReleaseSpinLockShared.c)
 *     MiEndingOffsetWithLock @ 0x140031000 (MiEndingOffsetWithLock.c)
 *     MiUnlinkPageFromList @ 0x14003B930 (MiUnlinkPageFromList.c)
 *     MiUnlockWorkingSetShared @ 0x140046970 (MiUnlockWorkingSetShared.c)
 *     MiTrimOrAgeWorkingSet @ 0x14006D570 (MiTrimOrAgeWorkingSet.c)
 *     MiMoveDirtyBitsToPfns @ 0x140074A30 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x140086AC0 (NtGetWriteWatch.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x14009D050 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiQueueLargeFreeZeroRebuild @ 0x14009D110 (MiQueueLargeFreeZeroRebuild.c)
 *     MiOffsetToProtos @ 0x1400AF770 (MiOffsetToProtos.c)
 *     ExpAddTagForBigPages @ 0x1400E7190 (ExpAddTagForBigPages.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140313D28 (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
