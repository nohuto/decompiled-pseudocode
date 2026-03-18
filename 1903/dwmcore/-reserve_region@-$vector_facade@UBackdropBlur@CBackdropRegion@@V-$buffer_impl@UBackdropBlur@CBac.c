/*
 * XREFs of ?reserve_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBackdropBlur@CBackdropRegion@@_K0@Z @ 0x1800B5C08
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180064C20 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z @ 0x18002D3B4 (-expand@liberal_expansion_policy@detail@@QEAA_K_K0@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800881C4 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800932DC (--3@YAXPEAX@Z.c)
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$uninitialized_copy@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x18020E1BC (--$uninitialized_copy@V-$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V-$checked_array_.c)
 *     ??$move_backward@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAVMatrix3x2F@D2D1@@@stdext@@V?$move_iterator@PEAVMatrix3x2F@D2D1@@@0@0V12@@Z @ 0x180252694 (--$move_backward@V-$move_iterator@PEAVMatrix3x2F@D2D1@@@std@@V-$checked_array_iterator@PEAVMatri.c)
 */

char *__fastcall detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::reserve_region(
        _QWORD *a1,
        __int64 a2)
{
  const char *v4; // rcx
  __int64 v5; // r9
  char *v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned __int64 v9; // rdx
  char *v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // r10
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rdi
  LPVOID v17; // rax
  __int64 v18; // r8
  char *v19; // rdx
  LPVOID v20; // rbx
  char *v21; // rcx
  bool v22; // zf
  char *v23; // rdx
  unsigned __int64 v24; // rax
  bool v25; // sf
  __int128 v26; // [rsp+20h] [rbp-40h] BYREF
  __int64 v27; // [rsp+30h] [rbp-30h]
  __int128 v28; // [rsp+40h] [rbp-20h] BYREF
  __int64 v29; // [rsp+50h] [rbp-10h]

  v4 = (const char *)a1[2];
  v5 = a1[1];
  if ( !((__int64)&v4[-v5] / 24) )
  {
    v15 = (v5 - *a1) / 24;
    if ( v15 + 1 < v15 )
      std::_Xoverflow_error(v4);
    v16 = detail::liberal_expansion_policy::expand(
            (detail::liberal_expansion_policy *)&v4[-*a1],
            (__int64)&v4[-*a1] / 24,
            v15 + 1);
    v17 = operator new(saturated_mul(v16, 0x18uLL));
    v18 = a1[1];
    v19 = (char *)*a1;
    *(_QWORD *)&v26 = v17;
    v20 = v17;
    *((_QWORD *)&v26 + 1) = v15;
    v27 = 0LL;
    v28 = v26;
    v29 = 0LL;
    std::uninitialized_copy<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>(
      &v26,
      v19,
      v18,
      &v28);
    v21 = (char *)*a1;
    v22 = *a1 == (_QWORD)(a1 + 3);
    *a1 = v20;
    if ( v22 )
      v21 = 0LL;
    operator delete(v21);
    v23 = (char *)*a1;
    v5 = *a1 + 24 * v15;
    a1[1] = v5;
    a1[2] = &v23[24 * v16];
  }
  v6 = (char *)*a1;
  v7 = v5 - *a1;
  *((_QWORD *)&v26 + 1) = 1LL;
  v27 = 0LL;
  v29 = 0LL;
  v8 = v7 / 24;
  v9 = v7 / 24 - a2;
  v10 = &v6[24 * (v7 / 24)];
  *(_QWORD *)&v26 = v10;
  v28 = v26;
  if ( !v10 )
    goto LABEL_8;
  v29 = 1LL;
  v11 = 1LL;
  if ( v9 <= 1 )
    v11 = v9;
  v27 = 1LL;
  v12 = 24 * v11;
  v13 = v5 - v12;
  if ( v5 != v5 - v12 )
  {
    v24 = v27;
    v10 = (char *)(v28 + 24);
    do
    {
      v5 -= 24LL;
      if ( !(_QWORD)v26 )
        goto LABEL_8;
      if ( !v24 )
        goto LABEL_8;
      --v24;
      v10 -= 24;
      if ( v24 >= *((_QWORD *)&v26 + 1) )
        goto LABEL_8;
      *(_OWORD *)v10 = *(_OWORD *)v5;
      *((_QWORD *)v10 + 2) = *(_QWORD *)(v5 + 16);
    }
    while ( v5 != v13 );
  }
  if ( v9 > 1 )
  {
    *(_QWORD *)&v28 = v6;
    *((_QWORD *)&v28 + 1) = v8;
    v29 = 0LL;
    v25 = v8 < 0;
    if ( v8 )
    {
      if ( !v6 )
        goto LABEL_8;
      v25 = v8 < 0;
    }
    if ( !v25 || !v8 )
    {
      v29 = v8;
      v26 = v28;
      v27 = v8;
      ((void (__fastcall *)(__int128 *, char *, char *, __int128 *))std::move_backward<std::move_iterator<D2D1::Matrix3x2F *>,stdext::checked_array_iterator<D2D1::Matrix3x2F *>>)(
        &v28,
        &v6[24 * a2],
        &v6[24 * v8 - 24],
        &v26);
      goto LABEL_7;
    }
LABEL_8:
    _o__invalid_parameter_noinfo_noreturn(v10, v9, v8, v5);
    JUMPOUT(0x1800B5D28LL);
  }
LABEL_7:
  a1[1] += 24LL;
  return &v6[24 * a2];
}
