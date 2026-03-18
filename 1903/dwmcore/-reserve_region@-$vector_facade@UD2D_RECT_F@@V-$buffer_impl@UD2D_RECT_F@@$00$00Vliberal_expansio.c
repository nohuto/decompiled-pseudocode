/*
 * XREFs of ?reserve_region@?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUD2D_RECT_F@@_K0@Z @ 0x18001050C
 * Callers:
 *     ??$GetAllHollowRects@V?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@CoordMap@@QEBAXPEAV?$vector_facade@UD2D_RECT_F@@V?$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_expansion_policy@detail@@@detail@@@detail@@@Z @ 0x180010478 (--$GetAllHollowRects@V-$vector_facade@UD2D_RECT_F@@V-$buffer_impl@UD2D_RECT_F@@$00$00Vliberal_ex.c)
 * Callees:
 *     ??$move_backward_uninitialized@V?$basic_iterator@UD2D_RECT_F@@@detail@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@detail@@YAXV?$basic_iterator@UD2D_RECT_F@@@0@0V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@Z @ 0x180010610 (--$move_backward_uninitialized@V-$basic_iterator@UD2D_RECT_F@@@detail@@V-$checked_array_iterator.c)
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAURampEntry@CoordMap@@@std@@V?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAURampEntry@CoordMap@@@stdext@@V?$move_iterator@PEAURampEntry@CoordMap@@@0@0V12@@Z @ 0x1801CA070 (--$uninitialized_copy@V-$move_iterator@PEAURampEntry@CoordMap@@@std@@V-$checked_array_iterator@P.c)
 *     ??$move_backward@V?$move_iterator@PEAUD2D_RECT_F@@@std@@V?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUD2D_RECT_F@@@stdext@@V?$move_iterator@PEAUD2D_RECT_F@@@0@0V12@@Z @ 0x180258598 (--$move_backward@V-$move_iterator@PEAUD2D_RECT_F@@@std@@V-$checked_array_iterator@PEAUD2D_RECT_F.c)
 */

char *__fastcall detail::vector_facade<D2D_RECT_F,detail::buffer_impl<D2D_RECT_F,1,1,detail::liberal_expansion_policy>>::reserve_region(
        char *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  __int64 v7; // r8
  __int64 v8; // rdx
  char *v10; // rdi
  __int64 v11; // rbx
  __int64 v12; // rbx
  char *v13; // rcx
  unsigned __int64 v14; // r13
  bool v15; // sf
  __int64 v16; // rax
  __int64 v17; // r15
  char *result; // rax
  unsigned __int64 v19; // r14
  unsigned __int64 v20; // rdi
  void *v21; // rax
  __int64 v22; // r8
  char *v23; // rdx
  void *v24; // rbx
  char *v25; // rcx
  bool v26; // zf
  __int64 v27; // rdi
  bool v28; // sf
  __int128 v29; // [rsp+20h] [rbp-40h] BYREF
  __int64 v30; // [rsp+30h] [rbp-30h]
  __int128 v31; // [rsp+40h] [rbp-20h] BYREF
  __int64 v32; // [rsp+50h] [rbp-10h]
  __int64 v33; // [rsp+A0h] [rbp+40h] BYREF
  __int64 v34; // [rsp+B0h] [rbp+50h] BYREF

  v4 = *((_QWORD *)a1 + 1);
  v7 = 0LL;
  v8 = *((_QWORD *)a1 + 2);
  if ( (v8 - v4) >> 4 < (unsigned __int64)a3 )
  {
    v19 = (v4 - *(_QWORD *)a1) >> 4;
    if ( v19 + a3 < v19 )
      std::_Xoverflow_error(a1);
    v20 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)a1,
            (v8 - *(_QWORD *)a1) >> 4,
            v19 + a3);
    v21 = operator new(saturated_mul(v20, 0x10uLL));
    v22 = *((_QWORD *)a1 + 1);
    v23 = *(char **)a1;
    *(_QWORD *)&v29 = v21;
    *((_QWORD *)&v29 + 1) = v19;
    v24 = v21;
    v30 = 0LL;
    v31 = v29;
    v32 = 0LL;
    ((void (__fastcall *)(__int128 *, char *, __int64, __int128 *))std::uninitialized_copy<std::move_iterator<CoordMap::RampEntry *>,stdext::checked_array_iterator<CoordMap::RampEntry *>>)(
      &v29,
      v23,
      v22,
      &v31);
    v25 = *(char **)a1;
    v26 = *(_QWORD *)a1 == (_QWORD)(a1 + 24);
    *(_QWORD *)a1 = v24;
    if ( v26 )
      v25 = 0LL;
    operator delete(v25);
    v4 = *(_QWORD *)a1 + 16 * v19;
    v27 = *(_QWORD *)a1 + 16 * v20;
    *((_QWORD *)a1 + 1) = v4;
    v7 = 0LL;
    *((_QWORD *)a1 + 2) = v27;
  }
  v10 = *(char **)a1;
  v11 = v4 - *(_QWORD *)a1;
  v30 = 0LL;
  v12 = v11 >> 4;
  *((_QWORD *)&v29 + 1) = a3;
  v13 = &v10[16 * v12];
  v32 = 0LL;
  v14 = v12 - a2;
  *(_QWORD *)&v29 = v13;
  v15 = a3 < 0;
  if ( a3 )
  {
    if ( !v13 )
      goto LABEL_23;
    v15 = a3 < 0;
  }
  if ( v15 && a3 )
  {
LABEL_23:
    _o__invalid_parameter_noinfo_noreturn(v13, v8, v7, a4);
    JUMPOUT(0x1800F5464LL);
  }
  v33 = v4;
  v32 = a3;
  v16 = a3;
  if ( a3 >= v14 )
    v16 = v12 - a2;
  v30 = a3;
  v34 = v4 - 16 * v16;
  detail::move_backward_uninitialized<detail::basic_iterator<D2D_RECT_F>,stdext::checked_array_iterator<D2D_RECT_F *>>(
    &v34,
    &v33,
    &v29);
  if ( v14 > a3 )
  {
    *(_QWORD *)&v29 = v10;
    v30 = 0LL;
    *((_QWORD *)&v29 + 1) = v12;
    v32 = 0LL;
    v28 = v12 < 0;
    if ( v12 )
    {
      if ( !v10 )
        goto LABEL_23;
      v28 = v12 < 0;
    }
    if ( !v28 || !v12 )
    {
      v32 = v12;
      v17 = 16 * a2;
      v30 = v12;
      std::move_backward<std::move_iterator<D2D_RECT_F *>,stdext::checked_array_iterator<D2D_RECT_F *>>(
        &v31,
        &v10[v17],
        &v10[16 * (v12 - a3)],
        &v29);
      goto LABEL_10;
    }
    goto LABEL_23;
  }
  v17 = 16 * a2;
LABEL_10:
  result = &v10[v17];
  *((_QWORD *)a1 + 1) += 16 * a3;
  return result;
}
