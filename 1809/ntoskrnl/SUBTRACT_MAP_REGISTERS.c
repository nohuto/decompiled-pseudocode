/*
 * XREFs of SUBTRACT_MAP_REGISTERS @ 0x140929580
 * Callers:
 *     ViFlushZeroMapRegisterBaseWcbs @ 0x14030A0B8 (ViFlushZeroMapRegisterBaseWcbs.c)
 *     VfAllocateAdapterChannel @ 0x140929AE0 (VfAllocateAdapterChannel.c)
 *     VfAllocateAdapterChannelEx @ 0x140929D10 (VfAllocateAdapterChannelEx.c)
 *     VfCancelAdapterChannel @ 0x14092A9A0 (VfCancelAdapterChannel.c)
 *     VfFreeAdapterChannel @ 0x14092AD60 (VfFreeAdapterChannel.c)
 *     VfFreeAdapterObject @ 0x14092AE10 (VfFreeAdapterObject.c)
 *     VfFreeMapRegisters @ 0x14092B040 (VfFreeMapRegisters.c)
 *     VfPutScatterGatherList @ 0x14092C170 (VfPutScatterGatherList.c)
 *     ViAdapterCallback @ 0x14092C3B0 (ViAdapterCallback.c)
 * Callees:
 *     VfReportIssueWithOptions @ 0x14030AD18 (VfReportIssueWithOptions.c)
 *     ViHalPreprocessOptions @ 0x14092DD28 (ViHalPreprocessOptions.c)
 */

void __fastcall SUBTRACT_MAP_REGISTERS(__int64 a1, int a2)
{
  int v3; // eax
  ULONG_PTR v4; // rbx

  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 160), -a2) - a2;
  if ( v3 < 0 )
  {
    v4 = -v3;
    ViHalPreprocessOptions(byte_140405478, "Freed too many map registers: -%x.", 5);
    VfReportIssueWithOptions(0xE6u, 5uLL, v4, 0LL, 0LL, byte_140405478);
  }
  _InterlockedExchange((volatile __int32 *)(a1 + 188), 0);
}
