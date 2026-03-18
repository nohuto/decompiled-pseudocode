/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140967C00
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x140327E28 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140968160 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140968390 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x1409690C0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x140969480 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x140969530 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x1409697F0 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x14096A9E0 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14096AC20 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x140328B08 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14096C598 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_14042B8A8, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_14042B8A8);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
