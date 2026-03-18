/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$02$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18002F070
 * Callers:
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z @ 0x1800EF774 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01_N@Z.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x18000F484 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801C88D0 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x180256E28 (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,3,1,detail::liberal_expansion_policy>>::reserve_region(
        void **a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rsi
  _BYTE *v6; // rdx
  __int64 v7; // rcx
  char *v8; // rdi
  __int64 v9; // rbx
  char *v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // rax
  __int64 v13; // r14
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  void *v17; // rax
  void *v18; // r8
  void *v19; // rdx
  void *v20; // rbx
  void *v21; // rcx
  bool v22; // zf
  bool v23; // sf
  __int128 v24; // [rsp+20h] [rbp-40h] BYREF
  __int64 v25; // [rsp+30h] [rbp-30h]
  __int128 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h]
  __int64 v28; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+50h] BYREF

  v29 = a3;
  v3 = (__int64)a1[1];
  v6 = a1[2];
  v7 = 1LL;
  if ( !((__int64)&v6[-v3] >> 4) )
  {
    v15 = (v3 - (__int64)*a1) >> 4;
    if ( v15 + 1 < v15 )
      std::_Xoverflow_error((const char *)1);
    v16 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)1,
            (v6 - (_BYTE *)*a1) >> 4,
            v15 + 1);
    v17 = operator new(saturated_mul(v16, 0x10uLL));
    v18 = a1[1];
    v19 = *a1;
    *(_QWORD *)&v24 = v17;
    v20 = v17;
    *((_QWORD *)&v24 + 1) = v15;
    v25 = 0LL;
    v26 = v24;
    v27 = 0LL;
    std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
      &v24,
      v19,
      v18,
      &v26);
    v21 = *a1;
    v22 = *a1 == a1 + 3;
    *a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v7 = 1LL;
    v3 = (__int64)*a1 + 16 * v15;
    a1[2] = (char *)*a1 + 16 * v16;
    a1[1] = (void *)v3;
  }
  v8 = (char *)*a1;
  v25 = 0LL;
  v9 = (v3 - (__int64)v8) >> 4;
  *((_QWORD *)&v24 + 1) = 1LL;
  v10 = &v8[16 * v9];
  v27 = 0LL;
  v11 = v9 - a2;
  *(_QWORD *)&v24 = v10;
  if ( !v10 )
    goto LABEL_8;
  v27 = 1LL;
  v29 = v3;
  v12 = ((v3 - (__int64)v8) >> 4) - a2;
  if ( v11 > 1 )
    v12 = 1LL;
  v25 = 1LL;
  v28 = v3 - 16 * v12;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v28,
    &v29,
    (__int64 *)&v24);
  if ( v11 > 1 )
  {
    *(_QWORD *)&v24 = v8;
    v25 = 0LL;
    *((_QWORD *)&v24 + 1) = (v3 - (__int64)v8) >> 4;
    v27 = 0LL;
    v23 = v9 < 0;
    if ( v9 )
    {
      if ( !v8 )
        goto LABEL_8;
      v23 = v9 < 0;
    }
    if ( !v23 || !v9 )
    {
      v13 = 16 * a2;
      v27 = (v3 - (__int64)v8) >> 4;
      v25 = v27;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>)(
        &v26,
        &v8[v13],
        v10 - 16,
        &v24);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v7, v6);
    JUMPOUT(0x18002F163LL);
  }
  v13 = 16 * a2;
LABEL_7:
  a1[1] = (char *)a1[1] + 16;
  return &v8[v13];
}
