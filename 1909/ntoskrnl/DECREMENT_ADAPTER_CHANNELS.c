/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x140967908
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140968160 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140968390 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1409690C0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140969480 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140969530 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x14096AC20 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140328558 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14096C598 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_14042B890, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 180), 0LL, 0LL, byte_14042B890);
  }
}
