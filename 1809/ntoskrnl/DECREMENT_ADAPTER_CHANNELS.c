/*
 * XREFs of DECREMENT_ADAPTER_CHANNELS @ 0x140929288
 * Callers:
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x14092A9A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14092AD60 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14092AE10 (VfFreeAdapterObject.c)
 *     ViAdapterCallback @ 0x14092C3B0 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 */

void __fastcall DECREMENT_ADAPTER_CHANNELS(__int64 a1)
{
  signed __int32 v2; // ebx

  v2 = _InterlockedIncrement((volatile signed __int32 *)(a1 + 184));
  if ( *(_DWORD *)(a1 + 192) < 3u && v2 != *(_DWORD *)(a1 + 180) )
  {
    ViHalPreprocessOptions(byte_140405468, "Driver has freed too many simultaneous adapter channels.", 4LL);
    VfReportIssueWithOptions(0xE6u, 4uLL, v2 != *(_DWORD *)(a1 + 180), 0LL, 0LL, byte_140405468);
  }
}
