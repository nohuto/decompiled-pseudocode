/*
 * XREFs of TR_WasDoorbellRungSinceMappingStart @ 0x1C0025274
 * Callers:
 *     ESM_CheckingIfEndpointShouldBeStopped @ 0x1C00405C0 (ESM_CheckingIfEndpointShouldBeStopped.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_WasDoorbellRungSinceMappingStart(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 152LL))();
}
