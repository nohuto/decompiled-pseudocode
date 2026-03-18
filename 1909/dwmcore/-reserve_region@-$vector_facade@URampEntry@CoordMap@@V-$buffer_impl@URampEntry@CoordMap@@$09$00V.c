/*
 * XREFs of ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x18000EF5C
 * Callers:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x18000EE98 (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801C88D0 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x180256E28 (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

char *__fastcall detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2)
{
  char *v2; // rsi
  char *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  char *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  void *v15; // rax
  __int64 v16; // r8
  char *v17; // rdx
  void *v18; // rbx
  char *v19; // rcx
  bool v20; // zf
  unsigned __int64 v21; // rax
  _OWORD *v22; // r9
  bool v23; // sf
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]

  v2 = (char *)*((_QWORD *)a1 + 1);
  if ( !((__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v2) >> 4) )
  {
    v13 = (__int64)&v2[-*(_QWORD *)a1] >> 4;
    if ( v13 + 1 < v13 )
      std::_Xoverflow_error(a1);
    v14 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4,
            v13 + 1);
    v15 = operator new(saturated_mul(v14, 0x10uLL));
    v16 = *((_QWORD *)a1 + 1);
    v17 = *(char **)a1;
    *(_QWORD *)&v24 = v15;
    v18 = v15;
    *((_QWORD *)&v24 + 1) = v13;
    v25 = 0LL;
    v26 = v24;
    v27 = 0LL;
    std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
      &v24,
      v17,
      v16,
      &v26);
    v19 = *(char **)a1;
    v20 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v18;
    if ( v20 )
      v19 = 0LL;
    operator delete(v19);
    v2 = (char *)(*(_QWORD *)a1 + 16 * v13);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v14;
    *((_QWORD *)a1 + 1) = v2;
  }
  v5 = *(char **)a1;
  v6 = (__int64)&v2[-*(_QWORD *)a1];
  *((_QWORD *)&v24 + 1) = 1LL;
  v7 = v6 >> 4;
  v25 = 0LL;
  v8 = v7 - a2;
  v9 = &v5[16 * v7];
  v27 = 0LL;
  *(_QWORD *)&v24 = v9;
  v26 = v24;
  if ( !v9 )
    goto LABEL_8;
  v27 = 1LL;
  v10 = 1LL;
  if ( v8 <= 1 )
    v10 = v7 - a2;
  v11 = 16 * v10;
  v9 = &v2[-v11];
  v25 = 1LL;
  if ( v2 != &v2[-v11] )
  {
    v21 = v25;
    v22 = (_OWORD *)(v26 + 16);
    do
    {
      v2 -= 16;
      if ( !(_QWORD)v24 )
        goto LABEL_8;
      if ( !v21 )
        goto LABEL_8;
      --v21;
      --v22;
      if ( v21 >= *((_QWORD *)&v24 + 1) )
        goto LABEL_8;
      *v22 = *(_OWORD *)v2;
    }
    while ( v2 != v9 );
  }
  if ( v8 > 1 )
  {
    *(_QWORD *)&v26 = v5;
    *((_QWORD *)&v26 + 1) = v7;
    v27 = 0LL;
    v23 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_8;
      v23 = v7 < 0;
    }
    if ( !v23 || !v7 )
    {
      v27 = v7;
      v24 = v26;
      v25 = v7;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>)(
        &v26,
        &v5[16 * a2],
        &v5[16 * v7 - 16],
        &v24);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v9, v8);
    JUMPOUT(0x18000F049LL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 16LL;
  return &v5[16 * a2];
}
