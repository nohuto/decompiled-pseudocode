/*
 * XREFs of ?reserve_region@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAUBackdropBlur@CBackdropRegion@@_K0@Z @ 0x180059D18
 * Callers:
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180043690 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?size@?$vector_facade@UBackdropBlur@CBackdropRegion@@V?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEBA_KXZ @ 0x180059EAC (-size@-$vector_facade@UBackdropBlur@CBackdropRegion@@V-$buffer_impl@UBackdropBlur@CBackdropRegio.c)
 *     ?ensure_extra_capacity@?$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x180059ED8 (-ensure_extra_capacity@-$buffer_impl@UBackdropBlur@CBackdropRegion@@$0BA@$00Vliberal_expansion_p.c)
 *     ??$move_backward@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAUBackdropBlur@CBackdropRegion@@@stdext@@V?$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@0@0V12@@Z @ 0x180179A48 (--$move_backward@V-$move_iterator@PEAUBackdropBlur@CBackdropRegion@@@std@@V-$checked_array_itera.c)
 */

__int64 __fastcall detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned __int64 v6; // r10
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rax
  bool v14; // sf
  __int128 v16; // [rsp+20h] [rbp-40h] BYREF
  __int64 v17; // [rsp+30h] [rbp-30h]
  __int128 v18; // [rsp+40h] [rbp-20h] BYREF
  __int64 v19; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    1LL);
  v4 = detail::vector_facade<CBackdropRegion::BackdropBlur,detail::buffer_impl<CBackdropRegion::BackdropBlur,16,1,detail::liberal_expansion_policy>>::size(a1);
  v17 = 0LL;
  v5 = *a1;
  v6 = v4 - a2;
  v7 = v4;
  v8 = a1[1];
  v9 = 3 * v4;
  *((_QWORD *)&v16 + 1) = 1LL;
  v10 = v5 + 24 * v4;
  v19 = 0LL;
  *(_QWORD *)&v16 = v10;
  v18 = v16;
  if ( !v10 )
    goto LABEL_19;
  v19 = 1LL;
  v11 = v4 - a2;
  if ( v6 > 1 )
    v11 = 1LL;
  v17 = 1LL;
  v12 = 24 * v11;
  v10 = v8 - v12;
  if ( v8 != v8 - v12 )
  {
    v9 = v18;
    v8 -= 24LL;
    if ( (_QWORD)v18 )
    {
      v13 = v17;
      v9 = v18 + 24;
      while ( v13 )
      {
        --v13;
        v9 -= 24LL;
        if ( v13 >= *((_QWORD *)&v16 + 1) )
          break;
        *(_OWORD *)v9 = *(_OWORD *)v8;
        *(_QWORD *)(v9 + 16) = *(_QWORD *)(v8 + 16);
        if ( v8 == v10 )
          goto LABEL_11;
        v8 -= 24LL;
      }
    }
    goto LABEL_19;
  }
LABEL_11:
  if ( v6 > 1 )
  {
    *(_QWORD *)&v18 = v5;
    *((_QWORD *)&v18 + 1) = v7;
    v19 = 0LL;
    v14 = v7 < 0;
    if ( v7 )
    {
      if ( !v5 )
        goto LABEL_19;
      v14 = v7 < 0;
    }
    if ( v14 && v7 )
    {
LABEL_19:
      _o__invalid_parameter_noinfo_noreturn(v8, v9, v10, v7);
      JUMPOUT(0x180059EA2LL);
    }
    v19 = v7;
    v16 = v18;
    v17 = v7;
    ((void (__fastcall *)(__int128 *, __int64, __int64, __int128 *))std::move_backward<std::move_iterator<CBackdropRegion::BackdropBlur *>,stdext::checked_array_iterator<CBackdropRegion::BackdropBlur *>>)(
      &v18,
      v5 + 24 * a2,
      v5 + 24 * (v7 - 1),
      &v16);
  }
  a1[1] += 24LL;
  return v5 + 24 * a2;
}
