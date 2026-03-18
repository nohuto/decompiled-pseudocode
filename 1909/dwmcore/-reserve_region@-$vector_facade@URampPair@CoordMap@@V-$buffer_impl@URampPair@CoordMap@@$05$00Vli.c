/*
 * XREFs of ?reserve_region@?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampPair@CoordMap@@_K0@Z @ 0x18002F638
 * Callers:
 *     ?GetRampValues@CoordMap@@AEBAXAEBV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEAV?$vector_facade@URampPair@CoordMap@@V?$buffer_impl@URampPair@CoordMap@@$05$00Vliberal_expansion_policy@detail@@@detail@@@3@@Z @ 0x18002F5C0 (-GetRampValues@CoordMap@@AEBAXAEBV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180256D60 (--$uninitialized_copy@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@.c)
 *     ??$move_backward@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@stdext@@V?$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@0@0V12@@Z @ 0x180258544 (--$move_backward@V-$move_iterator@PEAUSurfaceDescription@CRenderingTechniqueFragment@@@std@@V-$c.c)
 */

char *__fastcall detail::vector_facade<CoordMap::RampPair,detail::buffer_impl<CoordMap::RampPair,6,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2)
{
  const char *v4; // rcx
  __int64 v5; // r9
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r11
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  void *v16; // rax
  __int64 v17; // r8
  char *v18; // rdx
  void *v19; // rbx
  char *v20; // rcx
  bool v21; // zf
  char *v22; // rdx
  __int64 v23; // r10
  bool v24; // sf
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v4 = (const char *)a1[2];
  v5 = a1[1];
  if ( !((__int64)&v4[-v5] / 12) )
  {
    v14 = (v5 - *a1) / 12;
    if ( v14 + 1 < v14 )
      std::_Xoverflow_error(v4);
    v15 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)&v4[-*a1],
            (__int64)&v4[-*a1] / 12,
            v14 + 1);
    v16 = operator new(saturated_mul(v15, 0xCuLL));
    v17 = a1[1];
    v18 = (char *)*a1;
    *(_QWORD *)&v26 = v16;
    v19 = v16;
    *((_QWORD *)&v26 + 1) = v14;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    std::uninitialized_copy<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>(
      &v26,
      v18,
      v17,
      &v28);
    v20 = (char *)*a1;
    v21 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v19;
    if ( v21 )
      v20 = 0LL;
    operator delete(v20);
    v22 = (char *)*a1;
    v5 = *a1 + 12 * v14;
    a1[1] = v5;
    a1[2] = &v22[12 * v15];
  }
  v6 = (char *)*a1;
  v7 = v5 - *a1;
  *((_QWORD *)&v26 + 1) = 1LL;
  v27 = 0LL;
  v29 = 0LL;
  v8 = v7 / 12;
  v9 = v7 / 12 - a2;
  v10 = (unsigned __int64)&v6[12 * (v7 / 12)];
  *(_QWORD *)&v26 = v10;
  v28 = v26;
  if ( !v10 )
    goto LABEL_7;
  v29 = 1LL;
  v11 = 1LL;
  if ( v9 <= 1 )
    v11 = v9;
  v27 = 1LL;
  v12 = 12 * v11;
  v13 = v5 - v12;
  if ( v5 != v5 - v12 )
  {
    v10 = v27;
    v23 = v28 + 12;
    do
    {
      v5 -= 12LL;
      if ( !(_QWORD)v26 )
        goto LABEL_7;
      if ( !v10 )
        goto LABEL_7;
      --v10;
      v23 -= 12LL;
      if ( v10 >= *((_QWORD *)&v26 + 1) )
        goto LABEL_7;
      *(_QWORD *)v23 = *(_QWORD *)v5;
      *(_DWORD *)(v23 + 8) = *(_DWORD *)(v5 + 8);
    }
    while ( v5 != v13 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v28 = v6;
    *((_QWORD *)&v28 + 1) = v8;
    v29 = 0LL;
    v24 = v8 < 0;
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_7;
      v24 = v8 < 0;
    }
    if ( !v24 || !v8 )
    {
      v29 = v8;
      v26 = v28;
      v27 = v8;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<CRenderingTechniqueFragment::SurfaceDescription *>,stdext::checked_array_iterator<CRenderingTechniqueFragment::SurfaceDescription *>>)(
        &v28,
        &v6[12 * a2],
        &v6[12 * v8 - 12],
        &v26);
      goto LABEL_25;
    }
LABEL_7:
    _o__invalid_parameter_noinfo_noreturn(v10, v9);
    JUMPOUT(0x18002F727LL);
  }
LABEL_25:
  a1[1] += 12LL;
  return &v6[12 * a2];
}
