/*
 * XREFs of ?reserve_region@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAPEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@_K0@Z @ 0x1801FD390
 * Callers:
 *     ??$emplace_back@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x1801FC664 (--$emplace_back@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@-$vector_fa.c)
 *     ?PurgeUnusedResources@CVisualSurface@@AEAAXXZ @ 0x1801FCFA8 (-PurgeUnusedResources@CVisualSurface@@AEAAXXZ.c)
 * Callees:
 *     ??$destruct_range@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18019B0DC (--$destruct_range@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 *     ??$move_backward@V?$move_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x1801FC6B4 (--$move_backward@V-$move_iterator@PEAV-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wi.c)
 *     ?ensure_extra_capacity@?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@QEAAX_K@Z @ 0x1801FD280 (-ensure_extra_capacity@-$buffer_impl@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wi.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::reserve_region(
        __int64 *a1,
        __int64 a2,
        signed __int64 a3)
{
  __int64 v6; // rdx
  signed __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 *v9; // rax
  __int64 v10; // r8
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // rsi
  bool v13; // sf
  signed __int64 v14; // rdx
  __int64 v15; // r10
  signed __int64 v16; // r9
  bool v17; // sf
  unsigned __int64 v18; // rdx
  __int64 v19; // rbx
  __int64 result; // rax
  __int64 v21; // [rsp+20h] [rbp-40h] BYREF
  unsigned __int64 v22; // [rsp+28h] [rbp-38h]
  signed __int64 v23; // [rsp+30h] [rbp-30h]
  char v24[16]; // [rsp+40h] [rbp-20h] BYREF
  signed __int64 v25; // [rsp+50h] [rbp-10h]

  detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>::ensure_extra_capacity(
    a1,
    a3);
  v8 = *a1;
  v23 = 0LL;
  v9 = (__int64 *)a1[1];
  v22 = a3;
  v10 = ((__int64)v9 - v8) >> 3;
  v25 = 0LL;
  v11 = v10 - a2;
  v12 = v8 + 8 * v10;
  v21 = v12;
  v13 = a3 < 0;
  if ( a3 )
  {
    if ( !v12 )
      goto LABEL_20;
    v13 = a3 < 0;
  }
  if ( v13 )
  {
    v7 = -a3;
    if ( a3 )
      goto LABEL_20;
  }
  v25 = a3;
  v14 = a3;
  if ( a3 >= v11 )
    v14 = v10 - a2;
  v6 = 8 * v14;
  v7 = (signed __int64)v9 - v6;
  v23 = a3;
  if ( v9 != (__int64 *)((char *)v9 - v6) )
  {
    v15 = v21;
    v16 = v23;
    do
    {
      --v9;
      if ( !v15 )
        goto LABEL_20;
      if ( !v16 )
        goto LABEL_20;
      if ( --v16 >= v22 )
        goto LABEL_20;
      v6 = *v9;
      *v9 = 0LL;
      *(_QWORD *)(v15 + 8 * v16) = v6;
    }
    while ( v9 != (__int64 *)v7 );
  }
  if ( v11 > a3 )
  {
    v23 = 0LL;
    v21 = v8;
    v22 = v10;
    v25 = 0LL;
    v17 = v10 < 0;
    if ( v10 )
    {
      if ( !v8 )
        goto LABEL_20;
      v17 = v10 < 0;
    }
    if ( v17 && v10 )
    {
LABEL_20:
      _o__invalid_parameter_noinfo_noreturn(v7, v6);
      __debugbreak();
    }
    v25 = v10;
    v23 = v10;
    std::move_backward<std::move_iterator<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy> *>>(
      (__int64)v24,
      (__int64 *)(v8 + 8 * a2),
      (__int64 *)(v8 + 8 * (v10 - a3)),
      &v21);
  }
  v18 = v8 + 8 * (a2 + a3);
  v19 = v8 + 8 * a2;
  if ( v12 < v18 )
    v18 = v12;
  detail::destruct_range<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>>(v19, v18);
  result = v19;
  a1[1] += 8 * a3;
  return result;
}
