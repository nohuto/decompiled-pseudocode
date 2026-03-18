/*
 * XREFs of RtlFindNextForwardRunClear @ 0x140028C00
 * Callers:
 *     PnprMirrorMarkedPages @ 0x140579FFC (PnprMirrorMarkedPages.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x14057CCE4 (PopGetRemainingHibernateRangeDataSize.c)
 *     HvpGenerateLogMetadata @ 0x1405A83CC (HvpGenerateLogMetadata.c)
 *     HvpCountSetRangesInVector @ 0x1405DF8D4 (HvpCountSetRangesInVector.c)
 *     MiFindDriverNonPagedSections @ 0x1406556BC (MiFindDriverNonPagedSections.c)
 *     MiPrepareToHotPatchImage @ 0x140857368 (MiPrepareToHotPatchImage.c)
 *     ViThunkSnapSharedExports @ 0x1409211A8 (ViThunkSnapSharedExports.c)
 * Callees:
 *     RtlFindNextForwardRunClearCapped @ 0x14002B750 (RtlFindNextForwardRunClearCapped.c)
 */

ULONG __stdcall RtlFindNextForwardRunClear(PRTL_BITMAP BitMapHeader, ULONG FromIndex, PULONG StartingRunIndex)
{
  return RtlFindNextForwardRunClearCapped(BitMapHeader, FromIndex, 0xFFFFFFFFLL, StartingRunIndex);
}
