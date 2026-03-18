/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x1800389B0
 * Callers:
 *     ?insert@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAA?AV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@2@V?$basic_iterator@$$CBUSurfaceDescription@CRenderingTechniqueFragment@@@2@_KAEBUSurfaceDescription@CRenderingTechniqueFragment@@@Z @ 0x180038AE0 (-insert@-$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V-$buffer_impl@USurface.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x180037E98 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1802584D0 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180259CB4 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,4,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  const char *v5; // rcx
  __int64 v7; // r8
  const char *v8; // r9
  char *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rbx
  unsigned __int64 v13; // r14
  char *v14; // rcx
  bool v15; // sf
  __int64 v16; // rax
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // rdi
  void *v20; // rax
  __int64 v21; // r8
  char *v22; // rdx
  void *v23; // rbx
  char *v24; // rcx
  bool v25; // zf
  char *v26; // rdx
  bool v27; // sf
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+50h] BYREF

  v5 = (const char *)a1[2];
  v7 = a1[1];
  v8 = &v5[-v7];
  if ( (__int64)&v5[-v7] / 12 < (unsigned __int64)a3 )
  {
    v18 = (v7 - *a1) / 12;
    if ( v18 + a3 < v18 )
      std::_Xoverflow_error(v5);
    v19 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)&v5[-*a1],
            (__int64)&v5[-*a1] / 12,
            v18 + a3);
    v20 = operator new(saturated_mul(v19, 0xCuLL));
    v21 = a1[1];
    v22 = (char *)*a1;
    *(_QWORD *)&v28 = v20;
    v23 = v20;
    *((_QWORD *)&v28 + 1) = v18;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      &v28,
      v22,
      v21,
      &v30);
    v24 = (char *)*a1;
    v25 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v23;
    if ( v25 )
      v24 = 0LL;
    operator delete(v24);
    v26 = (char *)*a1;
    v7 = *a1 + 12 * v18;
    a1[1] = v7;
    a1[2] = &v26[12 * v19];
  }
  v9 = (char *)*a1;
  v10 = v7 - *a1;
  v29 = 0LL;
  v11 = (unsigned __int128)(v10 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v31 = 0LL;
  *((_QWORD *)&v28 + 1) = a3;
  v12 = v10 / 12;
  v13 = v10 / 12 - a2;
  v14 = &v9[12 * (v10 / 12)];
  *(_QWORD *)&v28 = v14;
  v15 = a3 < 0;
  if ( a3 )
  {
    if ( !v14 )
      goto LABEL_22;
    v15 = a3 < 0;
  }
  if ( v15 && a3 )
  {
LABEL_22:
    _o__invalid_parameter_noinfo_noreturn(v14, v11, v7, v8);
    JUMPOUT(0x180102DB6LL);
  }
  v32 = v7;
  v31 = a3;
  v16 = a3;
  if ( a3 >= v13 )
    v16 = v13;
  v29 = a3;
  v33 = v7 - 12 * v16;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    (__int64)&v33,
    &v32,
    (__int64 *)&v28);
  if ( v13 > a3 )
  {
    v29 = 0LL;
    *(_QWORD *)&v28 = v9;
    *((_QWORD *)&v28 + 1) = v12;
    v31 = 0LL;
    v27 = v12 < 0;
    if ( v12 )
    {
      if ( !v9 )
        goto LABEL_22;
      v27 = v12 < 0;
    }
    if ( !v27 || !v12 )
    {
      v31 = v12;
      v29 = v12;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v30,
        &v9[12 * a2],
        &v9[12 * (v12 - a3)],
        &v28);
      goto LABEL_9;
    }
    goto LABEL_22;
  }
LABEL_9:
  a1[1] += 12 * a3;
  return &v9[12 * a2];
}
