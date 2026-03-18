/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x1800E1708
 * Callers:
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800E0948 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800E189C (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1800E189C.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        __int64 a1,
        _OWORD **a2,
        __int64 *a3)
{
  _OWORD *result; // rax
  _QWORD *i; // r10
  __int64 v5; // r9
  __int64 v6; // rax
  _OWORD *v7; // rax

  result = *a2;
  for ( i = (_QWORD *)a1; *a2 != (_OWORD *)*i; result = *a2 )
  {
    *a2 = (_OWORD *)((char *)result - 28);
    v5 = *a3;
    if ( !*a3 || (v6 = a3[2]) == 0 || (a1 = v6 - 1, a3[2] = v6 - 1, v6 - 1 >= (unsigned __int64)a3[1]) )
    {
      _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, v5);
      JUMPOUT(0x1801404CELL);
    }
    v7 = *a2;
    a1 *= 28LL;
    *(_OWORD *)(a1 + v5) = **a2;
    *(_QWORD *)(a1 + v5 + 16) = *((_QWORD *)v7 + 2);
    *(_DWORD *)(a1 + v5 + 24) = *((_DWORD *)v7 + 6);
  }
  return result;
}
