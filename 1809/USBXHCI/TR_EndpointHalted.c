/*
 * XREFs of TR_EndpointHalted @ 0x1C0024540
 * Callers:
 *     ESM_NotifyingTransferRingsEndpointHalted @ 0x1C00406E0 (ESM_NotifyingTransferRingsEndpointHalted.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_EndpointHalted(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 120LL))();
}
