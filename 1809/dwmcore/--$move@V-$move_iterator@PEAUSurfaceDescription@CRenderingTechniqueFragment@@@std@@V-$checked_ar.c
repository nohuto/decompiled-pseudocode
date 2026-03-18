/*
 * XREFs of ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180069ABC
 * Callers:
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFCB0 (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@US.c)
 *     ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFDAC (-clear_region@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$b_ea_1800EFDAC.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int128 *a4)
{
  __int128 v4; // xmm2
  __int64 v5; // r9
  __int64 result; // rax

  v4 = *a4;
  v5 = *(_QWORD *)a4 + 28LL * *((_QWORD *)a4 + 2);
  while ( a2 != a3 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a2 + 24);
    v5 += 28LL;
    a2 += 28LL;
  }
  *(_OWORD *)a1 = v4;
  result = a1;
  *(_QWORD *)(a1 + 16) = (v5 - (__int64)v4) / 28;
  return result;
}
