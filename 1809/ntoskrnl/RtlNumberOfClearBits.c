/*
 * XREFs of RtlNumberOfClearBits @ 0x14000F420
 * Callers:
 *     PopSaveHiberContext @ 0x14056A060 (PopSaveHiberContext.c)
 *     PopGetRemainingHibernateRangeDataSize @ 0x14057CCE4 (PopGetRemainingHibernateRangeDataSize.c)
 *     ViThunkCreateSharedExportInformation @ 0x140920FFC (ViThunkCreateSharedExportInformation.c)
 *     ViThunkReplaceAllSharedExports @ 0x1409370F4 (ViThunkReplaceAllSharedExports.c)
 * Callees:
 *     RtlNumberOfSetBits @ 0x14000F440 (RtlNumberOfSetBits.c)
 */

ULONG __stdcall RtlNumberOfClearBits(PRTL_BITMAP BitMapHeader)
{
  return BitMapHeader->SizeOfBitMap - RtlNumberOfSetBits(BitMapHeader);
}
