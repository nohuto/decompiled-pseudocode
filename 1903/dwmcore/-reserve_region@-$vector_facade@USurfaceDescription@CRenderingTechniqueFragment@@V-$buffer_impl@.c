/*
 * XREFs of ?reserve_region@?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUSurfaceDescription@CRenderingTechniqueFragment@@_K0@Z @ 0x180037D6C
 * Callers:
 *     ?GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV?$vector_facade@USurfaceDescription@CRenderingTechniqueFragment@@V?$buffer_impl@USurfaceDescription@CRenderingTechniqueFragment@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180038110 (-GetCumulativeSurfaceInputCount@CRenderingTechniqueFragment@@AEBAIPEAVCBrushRenderingGraph@@PEAV.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??$move_backward_uninitialized@V?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@detail@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@detail@@YAXV?$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment@@@0@0V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@Z @ 0x180037E98 (--$move_backward_uninitialized@V-$basic_iterator@USurfaceDescription@CRenderingTechniqueFragment.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x1802584D0 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180259CB4 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CRenderingTechniqueFragment::SurfaceDescription,detail::buffer_impl<CRenderingTechniqueFragment::SurfaceDescription,16,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  const char *v5; // rcx
  __int64 v6; // r9
  const char *v7; // r8
  char *v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rbx
  unsigned __int64 v12; // rsi
  char *v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rsi
  unsigned __int64 v17; // rsi
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

  v32 = a3;
  v5 = (const char *)a1[2];
  v6 = a1[1];
  v7 = &v5[-v6];
  if ( !((__int64)&v5[-v6] / 12) )
  {
    v17 = (v6 - *a1) / 12;
    if ( v17 + 1 < v17 )
      std::_Xoverflow_error(v5);
    v18 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)&v5[-*a1],
            (__int64)&v5[-*a1] / 12,
            v17 + 1);
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
    v6 = *a1 + 12 * v17;
    a1[1] = v6;
    a1[2] = &v25[12 * v18];
  }
  v8 = (char *)*a1;
  v9 = v6 - *a1;
  v28 = 0LL;
  v10 = (unsigned __int128)(v9 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
  v30 = 0LL;
  *((_QWORD *)&v27 + 1) = 1LL;
  v11 = v9 / 12;
  v12 = v9 / 12 - a2;
  v13 = &v8[12 * (v9 / 12)];
  *(_QWORD *)&v27 = v13;
  if ( !v13 )
    goto LABEL_8;
  v32 = v6;
  v30 = 1LL;
  v14 = 1LL;
  if ( v12 <= 1 )
    v14 = v12;
  v28 = 1LL;
  v31 = v6 - 12 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<CRenderingTechniqueFragment::SurfaceDescription>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
    &v31,
    &v32,
    &v27);
  if ( v12 > 1 )
  {
    v28 = 0LL;
    *(_QWORD *)&v27 = v8;
    *((_QWORD *)&v27 + 1) = v11;
    v30 = 0LL;
    v26 = v11 < 0;
    if ( v11 )
    {
      if ( !v8 )
        goto LABEL_8;
      v26 = v11 < 0;
    }
    if ( !v26 || !v11 )
    {
      v30 = v11;
      v15 = 12 * a2;
      v28 = v11;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v29,
        &v8[12 * a2],
        &v8[12 * v11 - 12],
        &v27);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v13, v10, v7, v6);
    JUMPOUT(0x180037E8ELL);
  }
  v15 = 12 * a2;
LABEL_7:
  a1[1] += 12LL;
  return &v8[v15];
}
