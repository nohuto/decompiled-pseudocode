/*
 * XREFs of TR_StopMapping @ 0x1C002514C
 * Callers:
 *     ESM_StoppingMappingOnCancelStart @ 0x1C0040E30 (ESM_StoppingMappingOnCancelStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TR_StopMapping(__int64 a1)
{
  return (*(__int64 (**)(void))(*(_QWORD *)(a1 + 32) + 104LL))();
}
