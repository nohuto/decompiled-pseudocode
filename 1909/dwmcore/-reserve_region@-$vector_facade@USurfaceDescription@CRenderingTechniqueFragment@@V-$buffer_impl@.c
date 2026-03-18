/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180045D6C
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180046110 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x180045E98 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180256D60 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180258544 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  const char *v5; // rcx
  __int64 v6; // r9
  char *v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rbx
  unsigned __int64 v11; // rsi
  char *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int64 v16; // rsi
  unsigned __int64 v17; // rdi
  void *v18; // rax
  __int64 v19; // r8
  char *v20; // rdx
  void *v21; // rbx
  char *v22; // rcx
  bool v23; // zf
  char *v24; // rdx
  bool v25; // sf
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]
  __int64 v30; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v31; // [rsp+B0h] [rbp+50h] BYREF

  v31 = a3;
  v5 = (const char *)a1[2];
  v6 = a1[1];
  if ( !((__int64)&v5[-v6] / 12) )
  {
    v16 = (v6 - *a1) / 12;
    if ( v16 + 1 < v16 )
      std::_Xoverflow_error(v5);
    v17 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)&v5[-*a1],
            (__int64)&v5[-*a1] / 12,
            v16 + 1);
    v18 = operator new(saturated_mul(v17, 0xCuLL));
    v19 = a1[1];
    v20 = (char *)*a1;
    *(_QWORD *)&v26 = v18;
    v21 = v18;
    *((_QWORD *)&v26 + 1) = v16;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      &v26,
      v20,
      v19,
      &v28);
    v22 = (char *)*a1;
    v23 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v21;
    if ( v23 )
      v22 = 0LL;
    operator delete(v22);
    v24 = (char *)*a1;
    v6 = *a1 + 12 * v16;
    a1[1] = v6;
    a1[2] = &v24[12 * v17];
  }
  v7 = (char *)*a1;
  v8 = v6 - *a1;
  v27 = 0LL;
  v9 = (unsigned __int128)(v8 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v29 = 0LL;
  *((_QWORD *)&v26 + 1) = 1LL;
  v10 = v8 / 12;
  v11 = v8 / 12 - a2;
  v12 = &v7[12 * (v8 / 12)];
  *(_QWORD *)&v26 = v12;
  if ( !v12 )
    goto LABEL_8;
  v31 = v6;
  v29 = 1LL;
  v13 = 1LL;
  if ( v11 <= 1 )
    v13 = v11;
  v27 = 1LL;
  v30 = v6 - 12 * v13;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v30,
    &v31,
    &v26);
  if ( v11 > 1 )
  {
    v27 = 0LL;
    *(_QWORD *)&v26 = v7;
    *((_QWORD *)&v26 + 1) = v10;
    v29 = 0LL;
    v25 = v10 < 0;
    if ( v10 )
    {
      if ( !v7 )
        goto LABEL_8;
      v25 = v10 < 0;
    }
    if ( !v25 || !v10 )
    {
      v29 = v10;
      v14 = 12 * a2;
      v27 = v10;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v28,
        &v7[12 * a2],
        &v7[12 * v10 - 12],
        &v26);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v12, v9);
    JUMPOUT(0x180045E8ELL);
  }
  v14 = 12 * a2;
LABEL_7:
  a1[1] += 12LL;
  return &v7[v14];
}
