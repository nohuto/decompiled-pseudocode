/*
 * XREFs of VERIFY_BUFFER_LOCKED @ 0x140967C94
 * Callers:
 *     VfBuildScatterGatherList @ 0x140968B50 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140968E90 (VfBuildScatterGatherListEx.c)
 *     VfGetScatterGatherList @ 0x140969BD0 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140969F60 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14096A320 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14096A4E0 (VfMapTransferEx.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140328B08 (VfReportIssueWithOptions.c)
 *     MmAreMdlPagesLocked @ 0x140963E58 (MmAreMdlPagesLocked.c)
 *     ViHalPreprocessOptions @ 0x14096C598 (ViHalPreprocessOptions.c)
 */

void __fastcall VERIFY_BUFFER_LOCKED(ULONG_PTR a1)
{
  __int16 v2; // di

  v2 = *(_WORD *)(a1 + 10) & 0x804;
  if ( !(unsigned int)MmAreMdlPagesLocked((_DWORD *)a1) && !v2 )
  {
    ViHalPreprocessOptions(byte_14042B88C, "DMA Pages Not Locked! MDL %p for DMA not locked", (const void *)0xE);
    VfReportIssueWithOptions(0xE6u, 0xEuLL, a1, 0LL, 0LL, byte_14042B88C);
  }
}
