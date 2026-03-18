/*
 * XREFs of ?reserve@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@QEAAX_K@Z @ 0x1800062C0
 * Callers:
 *     ?FlattenStops@CGradientBrush@@AEAAXXZ @ 0x1800061EC (-FlattenStops@CGradientBrush@@AEAAXXZ.c)
 * Callees:
 *     ?_Reallocate_exactly@?$vector@UD2D1_GRADIENT_STOP@@V?$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@@AEAAX_K@Z @ 0x180006314 (-_Reallocate_exactly@-$vector@UD2D1_GRADIENT_STOP@@V-$allocator@UD2D1_GRADIENT_STOP@@@std@@@std@.c)
 *     ModuleFailFastForHRESULT @ 0x1801E0F18 (ModuleFailFastForHRESULT.c)
 */

unsigned __int64 __fastcall std::vector<D2D1_GRADIENT_STOP>::reserve(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v2 = a1[2] - *a1;
  result = (unsigned __int64)((unsigned __int128)(v2 * (__int128)0x6666666666666667LL) >> 64) >> 63;
  if ( a2 > v2 / 20 )
  {
    if ( a2 > 0xCCCCCCCCCCCCCCCLL )
      ModuleFailFastForHRESULT(2147483659LL, retaddr);
    return std::vector<D2D1_GRADIENT_STOP>::_Reallocate_exactly(a1, a2);
  }
  return result;
}
