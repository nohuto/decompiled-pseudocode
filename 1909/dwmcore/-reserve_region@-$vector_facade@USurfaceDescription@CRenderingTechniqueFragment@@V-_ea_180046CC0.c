/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180046CC0
 * Callers:
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180046DF0 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x180045E98 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180256D60 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180258544 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  const char *v5; // rcx
  __int64 v7; // r8
  char *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // r14
  char *v13; // rcx
  bool v14; // sf
  __int64 v15; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rdi
  void *v19; // rax
  __int64 v20; // r8
  char *v21; // rdx
  void *v22; // rbx
  char *v23; // rcx
  bool v24; // zf
  char *v25; // rdx
  bool v26; // sf
  __int128 v27; // [rsp+20h] [rbp-40h] BYREF
  __int64 v28; // [rsp+30h] [rbp-30h]
  __int128 v29; // [rsp+40h] [rbp-20h] BYREF
  __int64 v30; // [rsp+50h] [rbp-10h]
  __int64 v31; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v32; // [rsp+B0h] [rbp+50h] BYREF

  v5 = (const char *)a1[2];
  v7 = a1[1];
  if ( (__int64)&v5[-v7] / 12 < (unsigned __int64)a3 )
  {
    v17 = (v7 - *a1) / 12;
    if ( v17 + a3 < v17 )
      std::_Xoverflow_error(v5);
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)&v5[-*a1],
            (__int64)&v5[-*a1] / 12,
            v17 + a3);
    v19 = operator new(saturated_mul(v18, 0xCuLL));
    v20 = a1[1];
    v21 = (char *)*a1;
    *(_QWORD *)&v27 = v19;
    v22 = v19;
    *((_QWORD *)&v27 + 1) = v17;
    v28 = 0LL;
    v29 = v27;
    v30 = 0LL;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      &v27,
      v21,
      v20,
      &v29);
    v23 = (char *)*a1;
    v24 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v22;
    if ( v24 )
      v23 = 0LL;
    operator delete(v23);
    v25 = (char *)*a1;
    v7 = *a1 + 12 * v17;
    a1[1] = v7;
    a1[2] = &v25[12 * v18];
  }
  v8 = (char *)*a1;
  v9 = v7 - *a1;
  v28 = 0LL;
  v10 = (unsigned __int128)(v9 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v30 = 0LL;
  *((_QWORD *)&v27 + 1) = a3;
  v11 = v9 / 12;
  v12 = v9 / 12 - a2;
  v13 = &v8[12 * (v9 / 12)];
  *(_QWORD *)&v27 = v13;
  v14 = a3 < 0;
  if ( a3 )
  {
    if ( !v13 )
      goto LABEL_22;
    v14 = a3 < 0;
  }
  if ( v14 && a3 )
  {
LABEL_22:
    _o__invalid_parameter_noinfo_noreturn(v13, v10);
    JUMPOUT(0x180109BB0LL);
  }
  v31 = v7;
  v30 = a3;
  v15 = a3;
  if ( a3 >= v12 )
    v15 = v12;
  v28 = a3;
  v32 = v7 - 12 * v15;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    (__int64)&v32,
    &v31,
    (__int64 *)&v27);
  if ( v12 > a3 )
  {
    v28 = 0LL;
    *(_QWORD *)&v27 = v8;
    *((_QWORD *)&v27 + 1) = v11;
    v30 = 0LL;
    v26 = v11 < 0;
    if ( v11 )
    {
      if ( !v8 )
        goto LABEL_22;
      v26 = v11 < 0;
    }
    if ( !v26 || !v11 )
    {
      v30 = v11;
      v28 = v11;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v29,
        &v8[12 * a2],
        &v8[12 * (v11 - a3)],
        &v27);
      goto LABEL_9;
    }
    goto LABEL_22;
  }
LABEL_9:
  a1[1] += 12 * a3;
  return &v8[12 * a2];
}
