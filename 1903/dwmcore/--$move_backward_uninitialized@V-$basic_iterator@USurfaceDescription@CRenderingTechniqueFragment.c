/*
 * XREFs of ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x180037E98
 * Callers:
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180037D6C (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@.c)
 *     ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800389B0 (-reserve_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-_ea_1800389B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        __int64 a1,
        __int64 *a2,
        __int64 *a3)
{
  __int64 result; // rax
  _QWORD *v4; // r11
  __int64 v5; // r10
  __int64 v6; // r9
  __int64 v7; // rax
  unsigned __int64 v8; // rax

  result = *a2;
  v4 = (_QWORD *)a1;
  if ( *a2 != *(_QWORD *)a1 )
  {
    v5 = *a3;
    do
    {
      v6 = result - 12;
      *a2 = result - 12;
      if ( !v5 || (v7 = a3[2]) == 0 || (v8 = v7 - 1, a3[2] = v8, v8 >= a3[1]) )
      {
        _o__invalid_parameter_noinfo_noreturn(a1, a2, a3, v6);
        JUMPOUT(0x180102811LL);
      }
      a1 = 3 * v8;
      *(_QWORD *)(v5 + 4 * a1) = *(_QWORD *)v6;
      *(_DWORD *)(v5 + 4 * a1 + 8) = *(_DWORD *)(v6 + 8);
      result = *a2;
    }
    while ( *a2 != *v4 );
  }
  return result;
}
