/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18000F380
 * Callers:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x18000F2EC (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x18000F484 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ??3@YAXPEAX@Z @ 0x18007004C (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18007AC58 (--2@YAPEAX_K@Z.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x1800AE154 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x180159B28 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801C88D0 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x180256E28 (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  __int64 v6; // rdx
  char *v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rbx
  char *v11; // rcx
  unsigned __int64 v12; // r13
  bool v13; // sf
  __int64 v14; // rax
  __int64 v15; // r15
  char *result; // rax
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // r8
  unsigned __int64 v19; // rdi
  void *v20; // rax
  __int64 v21; // r8
  char *v22; // rdx
  void *v23; // rbx
  char *v24; // rcx
  bool v25; // zf
  __int64 v26; // rdi
  bool v27; // sf
  __int128 v28; // [rsp+20h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-30h]
  __int128 v30; // [rsp+40h] [rbp-20h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h]
  __int64 v32; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v33; // [rsp+B0h] [rbp+50h] BYREF

  v3 = *((_QWORD *)a1 + 1);
  v6 = *((_QWORD *)a1 + 2);
  if ( (v6 - v3) >> 4 < (unsigned __int64)a3 )
  {
    v17 = (v3 - *(_QWORD *)a1) >> 4;
    v18 = v17 + a3;
    if ( v17 + a3 < v17 )
      std::_Xoverflow_error(a1);
    v19 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (v6 - *(_QWORD *)a1) >> 4,
            v18);
    v20 = operator new(saturated_mul(v19, 0x10uLL));
    v21 = *((_QWORD *)a1 + 1);
    v22 = *(char **)a1;
    *(_QWORD *)&v28 = v20;
    *((_QWORD *)&v28 + 1) = v17;
    v23 = v20;
    v29 = 0LL;
    v30 = v28;
    v31 = 0LL;
    std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>(
      &v28,
      v22,
      v21,
      &v30);
    v24 = *(char **)a1;
    v25 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v23;
    if ( v25 )
      v24 = 0LL;
    operator delete(v24);
    v3 = *(_QWORD *)a1 + 16 * v17;
    v26 = *(_QWORD *)a1 + 16 * v19;
    *((_QWORD *)a1 + 1) = v3;
    *((_QWORD *)a1 + 2) = v26;
  }
  v8 = *(char **)a1;
  v9 = v3 - *(_QWORD *)a1;
  v29 = 0LL;
  v10 = v9 >> 4;
  *((_QWORD *)&v28 + 1) = a3;
  v11 = &v8[16 * v10];
  v31 = 0LL;
  v12 = v10 - a2;
  *(_QWORD *)&v28 = v11;
  v13 = a3 < 0;
  if ( a3 )
  {
    if ( !v11 )
      goto LABEL_23;
    v13 = a3 < 0;
  }
  if ( v13 && a3 )
  {
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v11, v6);
    JUMPOUT(0x1800FB928LL);
  }
  v32 = v3;
  v31 = a3;
  v14 = a3;
  if ( a3 >= v12 )
    v14 = v10 - a2;
  v29 = a3;
  v33 = v3 - 16 * v14;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v33,
    &v32,
    &v28);
  if ( v12 > a3 )
  {
    *(_QWORD *)&v28 = v8;
    v29 = 0LL;
    *((_QWORD *)&v28 + 1) = v10;
    v31 = 0LL;
    v27 = v10 < 0;
    if ( v10 )
    {
      if ( !v8 )
        goto LABEL_23;
      v27 = v10 < 0;
    }
    if ( !v27 || !v10 )
    {
      v31 = v10;
      v15 = 16 * a2;
      v29 = v10;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>)(
        &v30,
        &v8[v15],
        &v8[16 * (v10 - a3)],
        &v28);
      goto LABEL_10;
    }
    goto LABEL_23;
  }
  v15 = 16 * a2;
LABEL_10:
  result = &v8[v15];
  *((_QWORD *)a1 + 1) += 16 * a3;
  return result;
}
