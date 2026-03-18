/*
 * XREFs of ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18022B6A0
 * Callers:
 *     ?ensure_extra_capacity@?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800E1754 (-ensure_extra_capacity@-$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  __int64 v5; // r11
  __int64 result; // rax
  __int64 v8; // xmm1_8

  v5 = 28LL * a4[2] + *a4;
  while ( a2 != a3 )
  {
    *(_OWORD *)v5 = *(_OWORD *)a2;
    *(_QWORD *)(v5 + 16) = *(_QWORD *)(a2 + 16);
    *(_DWORD *)(v5 + 24) = *(_DWORD *)(a2 + 24);
    v5 += 28LL;
    a2 += 28LL;
  }
  result = a1;
  a4[2] = (v5 - *a4) / 28;
  v8 = a4[2];
  *(_OWORD *)a1 = *(_OWORD *)a4;
  *(_QWORD *)(a1 + 16) = v8;
  return result;
}
