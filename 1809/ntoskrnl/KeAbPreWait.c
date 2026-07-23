/*
 * XREFs of KeAbPreWait @ 0x140005930
 * Callers:
 *     MiWaitForCollidedFaultComplete @ 0x140003F00 (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x140005480 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x140005550 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140005760 (ExfAcquirePushLockExclusiveEx.c)
 *     MiReferenceControlArea @ 0x14001C358 (MiReferenceControlArea.c)
 *     MiLockControlAreaSectionExtend @ 0x140092C20 (MiLockControlAreaSectionExtend.c)
 *     ExAcquireFastResourceExclusive @ 0x1401653D0 (ExAcquireFastResourceExclusive.c)
 *     ExAcquireFastResourceSharedStarveExclusive @ 0x140165A30 (ExAcquireFastResourceSharedStarveExclusive.c)
 *     ExAcquireFastResourceShared @ 0x140165C60 (ExAcquireFastResourceShared.c)
 *     MiChangingSubsectionProtos @ 0x1402B5620 (MiChangingSubsectionProtos.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x14080F0C8 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyStart @ 0x1408658E0 (PfpPrefetchSharedConflictNotifyStart.c)
 * Callees:
 *     KiAbEntryRemoveFromTree @ 0x140004530 (KiAbEntryRemoveFromTree.c)
 */

char __fastcall KeAbPreWait(__int64 a1, __int64 a2)
{
  char result; // al

  *(_BYTE *)(a1 + 32) |= 2u;
  if ( *(__int64 *)(a1 + 32) < 0 )
    KiAbEntryRemoveFromTree((PRTL_BALANCED_NODE)a1, a2);
  *(_BYTE *)(a1 + 25) |= 1u;
  result = *(_BYTE *)(a1 + 32) & 0xFD;
  *(_BYTE *)(a1 + 32) = result;
  return result;
}
