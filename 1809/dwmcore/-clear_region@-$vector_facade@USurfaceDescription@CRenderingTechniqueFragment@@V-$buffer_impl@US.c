/*
 * XREFs of ?clear_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1800EFCB0
 * Callers:
 *     ?CreateShaderBodies@CRenderingTechnique@@QEAAJXZ @ 0x1800C3298 (-CreateShaderBodies@CRenderingTechnique@@QEAAJXZ.c)
 *     ?erase@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@0@Z @ 0x1800E1EF8 (-erase@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceD.c)
 * Callees:
 *     ??$move@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180069ABC (--$move@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$checked_ar.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x1801E8C60 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r11
  __int64 v5; // rbx
  __int64 v6; // r9
  const char *v9; // rcx
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  bool v12; // sf
  __int64 result; // rax
  __int128 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+30h] [rbp-30h]
  __int128 v16; // [rsp+40h] [rbp-20h] BYREF
  __int64 v17; // [rsp+50h] [rbp-10h]

  v3 = a1[1];
  v5 = *a1;
  v6 = v3 - *a1;
  v9 = (const char *)(a2 + a3);
  v10 = v6 / 28;
  if ( (unsigned __int64)v9 > v6 / 28 )
    std::_Xoverflow_error(v9);
  v15 = 0LL;
  *(_QWORD *)&v14 = v5;
  v11 = v5 + 28 * v10;
  *((_QWORD *)&v14 + 1) = v6 / 28;
  if ( v9 != (const char *)v10 )
  {
    v12 = a2 < 0;
    if ( a2 )
    {
      if ( !v5 )
        goto LABEL_10;
      v12 = a2 < 0;
    }
    if ( v12 && a2 || a2 > 0 && v10 < a2 )
    {
LABEL_10:
      _o__invalid_parameter_noinfo_noreturn(v9, v10, v11, v6);
      __debugbreak();
    }
    v16 = v14;
    v15 = a2;
    v17 = a2;
    std::move<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      (__int64)&v14,
      v5 + 28LL * (_QWORD)v9,
      v11,
      &v16);
    v3 = a1[1];
  }
  result = 28 * a3;
  a1[1] = v3 - 28 * a3;
  return result;
}
