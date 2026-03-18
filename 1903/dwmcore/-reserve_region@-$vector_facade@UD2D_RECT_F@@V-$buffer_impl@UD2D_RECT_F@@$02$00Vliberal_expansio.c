/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000E4C0
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z @ 0x180010630 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N2@Z.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x180010610 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801CA070 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x180258598 (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  char *v6; // rdi
  __int64 v7; // rbx
  char *v8; // r13
  unsigned __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdi
  void *v15; // rax
  void *v16; // r8
  void *v17; // rdx
  void *v18; // rbx
  void *v19; // rcx
  bool v20; // zf
  bool v21; // sf
  __int128 v22; // [rsp+20h] [rbp-40h] BYREF
  __int64 v23; // [rsp+30h] [rbp-30h]
  __int128 v24; // [rsp+40h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-10h]
  __int64 v26; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+50h] BYREF

  v27 = a3;
  v3 = (__int64)a1[1];
  if ( !(((__int64)a1[2] - v3) >> 4) )
  {
    v13 = (v3 - (__int64)*a1) >> 4;
    if ( v13 + 1 < v13 )
      std::_Xoverflow_error((const char *)1);
    v14 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)1,
            ((_BYTE *)a1[2] - (_BYTE *)*a1) >> 4,
            v13 + 1);
    v15 = operator new(saturated_mul(v14, 0x10uLL));
    v16 = a1[1];
    v17 = *a1;
    *(_QWORD *)&v22 = v15;
    v18 = v15;
    *((_QWORD *)&v22 + 1) = v13;
    v23 = 0LL;
    v24 = v22;
    v25 = 0LL;
    ((void (__fastcall *)(__int128 *, void *, void *, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      &v22,
      v17,
      v16,
      &v24);
    v19 = *a1;
    v20 = *a1 == a1 + 3;
    *a1 = v18;
    if ( v20 )
      v19 = 0LL;
    operator delete(v19);
    v3 = (__int64)*a1 + 16 * v13;
    a1[2] = (char *)*a1 + 16 * v14;
    a1[1] = (void *)v3;
  }
  v6 = (char *)*a1;
  v23 = 0LL;
  v7 = (v3 - (__int64)v6) >> 4;
  *((_QWORD *)&v22 + 1) = 1LL;
  v8 = &v6[16 * v7];
  v25 = 0LL;
  v9 = v7 - a2;
  *(_QWORD *)&v22 = v8;
  if ( !v8 )
    goto LABEL_8;
  v25 = 1LL;
  v27 = v3;
  v10 = ((v3 - (__int64)v6) >> 4) - a2;
  if ( v9 > 1 )
    v10 = 1LL;
  v23 = 1LL;
  v26 = v3 - 16 * v10;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v26,
    &v27,
    &v22);
  if ( v9 > 1 )
  {
    *(_QWORD *)&v22 = v6;
    v23 = 0LL;
    *((_QWORD *)&v22 + 1) = (v3 - (__int64)v6) >> 4;
    v25 = 0LL;
    v21 = v7 < 0;
    if ( v7 )
    {
      if ( !v6 )
        goto LABEL_8;
      v21 = v7 < 0;
    }
    if ( !v21 || !v7 )
    {
      v11 = 16 * a2;
      v25 = (v3 - (__int64)v6) >> 4;
      v23 = v25;
      std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
        &v24,
        &v6[v11],
        v8 - 16,
        &v22);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn();
    JUMPOUT(0x18000E5B3LL);
  }
  v11 = 16 * a2;
LABEL_7:
  a1[1] = (char *)a1[1] + 16;
  return &v6[v11];
}
