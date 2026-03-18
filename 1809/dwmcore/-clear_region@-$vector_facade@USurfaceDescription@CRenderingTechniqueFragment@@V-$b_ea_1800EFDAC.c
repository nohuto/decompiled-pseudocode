/*
 * XREFs of ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFDAC
 * Callers:
 *     ?NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z @ 0x1800E0AD8 (-NeedsToBeBrokenUp@CRenderingTechniqueFragment@@QEBA_NPEAVCBrushRenderingGraph@@@Z.c)
 *     ?RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA?AV?$unique_ptr@VCRenderingTechniqueFragment@@U?$default_delete@VCRenderingTechniqueFragment@@@std@@@std@@PEAVCBrushRenderingGraph@@I@Z @ 0x18022C050 (-RemoveLargestInputFragment@CRenderingTechniqueFragment@@QEAA-AV-$unique_ptr@VCRenderingTechniqu.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180069ABC (--$move@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$checked_ar.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

unsigned __int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::clear_region(
        const char **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char **v3; // r11
  const char *v4; // rcx
  unsigned __int64 result; // rax
  unsigned __int64 v6; // rdx
  __int64 v7; // r10
  __int128 v8; // [rsp+20h] [rbp-40h] BYREF
  __int64 v9; // [rsp+30h] [rbp-30h]
  __int128 v10; // [rsp+40h] [rbp-20h] BYREF
  __int64 v11; // [rsp+50h] [rbp-10h]

  v3 = a1;
  v4 = *a1;
  result = (unsigned __int64)((unsigned __int128)((v3[1] - v4) * (__int128)0x4924924924924925LL) >> 64) >> 63;
  v6 = (v3[1] - v4) / 28;
  if ( a3 > v6 )
    std::_Xoverflow_error(v4);
  v9 = 0LL;
  v7 = 28 * a3;
  *(_QWORD *)&v8 = v4;
  *((_QWORD *)&v8 + 1) = v6;
  if ( a3 != v6 )
  {
    v9 = 0LL;
    v11 = 0LL;
    v10 = v8;
    result = std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
               (__int64)&v8,
               (__int64)&v4[v7],
               (__int64)&v4[28 * v6],
               &v10);
  }
  v3[1] -= v7;
  return result;
}
