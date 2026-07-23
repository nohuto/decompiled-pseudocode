/*
 * XREFs of RtlFindNextForwardRunClear @ 0x140028C00
 * Callers:
 *     PnprMirrorMarkedPages @ 0x14057AFFC (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x14057DCE4 (PopGetRemainingHibernateRangeDataSize.c)
 *     HvpGenerateLogMetadata @ 0x1405A93CC (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x1405E08D4 (HvpCountSetRangesInVector.c)
 *     MiFindDriverNonPagedSections @ 0x14065685C (MiFindDriverNonPagedSections.c)
 *     MiPrepareToHotPatchImage @ 0x1408585A8 (MiPrepareToHotPatchImage.c)
 *     ViThunkSnapSharedExports @ 0x1409221A8 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped(BitMapHeader, FromIndex, 0xFFFFFFFFLL, StartingRunIndex);
}
