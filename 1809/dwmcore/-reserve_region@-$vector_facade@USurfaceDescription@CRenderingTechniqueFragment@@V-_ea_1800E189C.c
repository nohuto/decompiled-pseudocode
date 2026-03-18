/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800E189C
 * Callers:
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x1800DF6A8 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x1800E1708 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ?size@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x1800E1728 (-size@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurfaceDe.c)
 *     ?ensure_extra_capacity@?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1800E1754 (-ensure_extra_capacity@-$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vl.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x18022B618 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        signed __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  char *v10; // rsi
  __int64 v11; // rdi
  unsigned __int64 v12; // r15
  char *v13; // rdx
  char *v14; // rax
  bool v15; // sf
  signed __int64 v16; // rax
  bool v17; // sf
  char *result; // rax
  __int128 v19; // [rsp+20h] [rbp-40h] BYREF
  signed __int64 v20; // [rsp+30h] [rbp-30h]
  __int128 v21; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v22; // [rsp+50h] [rbp-10h]
  char *v23; // [rsp+90h] [rbp+30h] BYREF
  char *v24; // [rsp+98h] [rbp+38h] BYREF

  detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v6 = detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::size(a1);
  v20 = 0LL;
  v10 = (char *)*a1;
  v11 = v6;
  v12 = v6 - a2;
  v13 = (char *)a1[1];
  v20 = 0LL;
  *((_QWORD *)&v19 + 1) = a3;
  v14 = &v10[28 * v6];
  *(_QWORD *)&v19 = v14;
  v15 = a3 < 0;
  if ( a3 )
  {
    if ( !v14 )
      goto LABEL_14;
    v15 = a3 < 0;
  }
  if ( v15 && a3 )
    goto LABEL_14;
  v23 = v13;
  v20 = a3;
  v16 = v12;
  v21 = v19;
  if ( a3 < v12 )
    v16 = a3;
  v22 = a3;
  v24 = &v13[-28 * v16];
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    (__int64)&v24,
    (_OWORD **)&v23,
    (__int64 *)&v21);
  if ( v12 > a3 )
  {
    v20 = 0LL;
    *(_QWORD *)&v19 = v10;
    *((_QWORD *)&v19 + 1) = v11;
    v22 = 0LL;
    v17 = v11 < 0;
    if ( v11 )
    {
      if ( !v10 )
        goto LABEL_14;
      v17 = v11 < 0;
    }
    if ( v17 && v11 )
    {
LABEL_14:
      _o__invalid_parameter_noinfo_noreturn(v7, v13, v8, v9);
      __debugbreak();
    }
    v22 = v11;
    v20 = v11;
    std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      &v21,
      &v10[28 * a2],
      &v10[28 * (v11 - a3)],
      &v19);
  }
  result = &v10[28 * a2];
  a1[1] = (char *)a1[1] + 28 * a3;
  return result;
}
