/*
 * XREFs of ?reserve_region@?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAURampEntry@CoordMap@@_K0@Z @ 0x18001013C
 * Callers:
 *     ?AddEntry@CoordMap@@AEAAJAEAV?$vector_facade@URampEntry@CoordMap@@V?$buffer_impl@URampEntry@CoordMap@@$09$00Vliberal_expansion_policy@detail@@@detail@@@detail@@HAEBURampPair@1@W4RampMergeMode@1@@Z @ 0x180010078 (-AddEntry@CoordMap@@AEAAJAEAV-$vector_facade@URampEntry@CoordMap@@V-$buffer_impl@URampEntry@Coor.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801CA070 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x180258598 (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

char *__fastcall detail::vector_facade<CoordMap::RampEntry,detail::buffer_impl<CoordMap::RampEntry,10,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2,
        __int64 a3,
        _OWORD *a4)
{
  char *v4; // rsi
  char *v7; // rbx
  __int64 v8; // r8
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  char *v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  void *v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  void *v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  unsigned __int64 v23; // rax
  bool v24; // sf
  __int128 v25; // [rsp+20h] [rbp-40h] BYREF
  __int64 v26; // [rsp+30h] [rbp-30h]
  __int128 v27; // [rsp+40h] [rbp-20h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h]

  v4 = (char *)*((_QWORD *)a1 + 1);
  if ( !((__int64)(*((_QWORD *)a1 + 2) - (_QWORD)v4) >> 4) )
  {
    v15 = (__int64)&v4[-*(_QWORD *)a1] >> 4;
    if ( v15 + 1 < v15 )
      std::_Xoverflow_error(a1);
    v16 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (__int64)(*((_QWORD *)a1 + 2) - *(_QWORD *)a1) >> 4,
            v15 + 1);
    v17 = operator new(saturated_mul(v16, 0x10uLL));
    v18 = *((_QWORD *)a1 + 1);
    v19 = *(char **)a1;
    *(_QWORD *)&v25 = v17;
    v20 = v17;
    *((_QWORD *)&v25 + 1) = v15;
    v26 = 0LL;
    v27 = v25;
    v28 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      &v25,
      v19,
      v18,
      &v27);
    v21 = *(char **)a1;
    v22 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v4 = (char *)(*(_QWORD *)a1 + 16 * v15);
    *((_QWORD *)a1 + 2) = *(_QWORD *)a1 + 16 * v16;
    *((_QWORD *)a1 + 1) = v4;
  }
  v7 = *(char **)a1;
  v8 = (__int64)&v4[-*(_QWORD *)a1];
  *((_QWORD *)&v25 + 1) = 1LL;
  v9 = v8 >> 4;
  v26 = 0LL;
  v10 = v9 - a2;
  v11 = &v7[16 * v9];
  v28 = 0LL;
  *(_QWORD *)&v25 = v11;
  v27 = v25;
  if ( !v11 )
    goto LABEL_8;
  v28 = 1LL;
  v12 = 1LL;
  if ( v10 <= 1 )
    v12 = v9 - a2;
  v13 = 16 * v12;
  v11 = &v4[-v13];
  v26 = 1LL;
  if ( v4 != &v4[-v13] )
  {
    v23 = v26;
    a4 = (_OWORD *)(v27 + 16);
    do
    {
      v4 -= 16;
      if ( !(_QWORD)v25 )
        goto LABEL_8;
      if ( !v23 )
        goto LABEL_8;
      --v23;
      --a4;
      if ( v23 >= *((_QWORD *)&v25 + 1) )
        goto LABEL_8;
      *a4 = *(_OWORD *)v4;
    }
    while ( v4 != v11 );
  }
  if ( v10 > 1 )
  {
    *(_QWORD *)&v27 = v7;
    *((_QWORD *)&v27 + 1) = v9;
    v28 = 0LL;
    v24 = v9 < 0;
    if ( v9 )
    {
      if ( !v7 )
        goto LABEL_8;
      v24 = v9 < 0;
    }
    if ( !v24 || !v9 )
    {
      v28 = v9;
      v25 = v27;
      v26 = v9;
      std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
        &v27,
        &v7[16 * a2],
        &v7[16 * v9 - 16],
        &v25);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v11, v10, v9, a4);
    JUMPOUT(0x180010229LL);
  }
LABEL_7:
  *((_QWORD *)a1 + 1) += 16LL;
  return &v7[16 * a2];
}
