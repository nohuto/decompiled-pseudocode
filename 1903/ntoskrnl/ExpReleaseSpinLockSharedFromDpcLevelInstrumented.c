/*
 * XREFs of ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x14033B244
 * Callers:
 *     MiInsertLargePageInNodeList @ 0x14002EE30 (MiInsertLargePageInNodeList.c)
 *     ExpAddTagForBigPages @ 0x140036B90 (ExpAddTagForBigPages.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400480E0 (MiTrimOrAgeWorkingSet.c)
 *     MiMoveDirtyBitsToPfns @ 0x140052B60 (MiMoveDirtyBitsToPfns.c)
 *     NtGetWriteWatch @ 0x14005C1F0 (NtGetWriteWatch.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140061A20 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiQueryAddressSpan @ 0x1400B7C60 (MiQueryAddressSpan.c)
 *     MiUnlockWorkingSetShared @ 0x1400CCAA0 (MiUnlockWorkingSetShared.c)
 *     MiUnlinkPageFromList @ 0x1400D3400 (MiUnlinkPageFromList.c)
 *     MiOffsetToProtos @ 0x1400D5DB0 (MiOffsetToProtos.c)
 *     MiEndingOffsetWithLock @ 0x1400D8A40 (MiEndingOffsetWithLock.c)
 *     ExReleaseSpinLockShared @ 0x140100740 (ExReleaseSpinLockShared.c)
 *     MiAllocateCombineProto @ 0x14013E940 (MiAllocateCombineProto.c)
 * Callees:
 *     PerfLogSpinLockRelease @ 0x140331DF4 (PerfLogSpinLockRelease.c)
 */

void __fastcall ExpReleaseSpinLockSharedFromDpcLevelInstrumented(volatile signed __int32 *a1, __int64 a2)
{
  _InterlockedAnd(a1, 0xBFFFFFFF);
  _InterlockedDecrement(a1);
  PerfLogSpinLockRelease((__int64)a1, a2, __rdtsc());
}
