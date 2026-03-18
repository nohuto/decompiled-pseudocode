/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800E0948
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x1800E0B98 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x1800E1708 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ?size@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x1800E1728 (-size@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceDe.c)
 *     ?ensure_extra_capacity@?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800E1754 (-ensure_extra_capacity@-$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vl.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18022B618 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

__int64 __fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rdi
  unsigned __int64 v11; // r15
  __int64 v12; // rbx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // rax
  bool v16; // sf
  __int64 v17; // r11
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  __int64 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  __int64 v22; // [rsp+50h] [rbp-10h]
  __int64 v23; // [rsp+90h] [rbp+30h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF

  v24 = a3;
  detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v7 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::size(
         a1,
         v5,
         v6);
  v20 = 0LL;
  v10 = *a1;
  v11 = v7 - a2;
  v12 = v7;
  v13 = a1[1];
  v20 = 0LL;
  *((_QWORD *)&v19 + 1) = 1LL;
  v14 = v10 + 28 * v7;
  *(_QWORD *)&v19 = v14;
  if ( !v14 )
    goto LABEL_13;
  v24 = v13;
  v20 = 1LL;
  v15 = v7 - a2;
  v21 = v19;
  if ( v11 > 1 )
    v15 = 1LL;
  v22 = 1LL;
  v23 = v13 - 28 * v15;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v23,
    &v24,
    &v21);
  if ( v11 <= 1 )
  {
    v17 = 28 * a2;
    goto LABEL_12;
  }
  v20 = 0LL;
  *(_QWORD *)&v19 = v10;
  *((_QWORD *)&v19 + 1) = v12;
  v22 = 0LL;
  v16 = v12 < 0;
  if ( v12 )
  {
    if ( !v10 )
      goto LABEL_13;
    v16 = v12 < 0;
  }
  if ( v16 && v12 )
  {
LABEL_13:
    _o__invalid_parameter_noinfo_noreturn(v13, v8, v14, v9);
    JUMPOUT(0x1800E0A90LL);
  }
  v22 = v12;
  v20 = v12;
  std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v21,
    28 * a2 + v10,
    28 * v12 + v10 - 28,
    &v19);
LABEL_12:
  a1[1] += 28LL;
  return v17 + v10;
}
