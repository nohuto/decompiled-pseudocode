/*
 * XREFs of ?clear_region@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@IEAAX_K0@Z @ 0x1801A345C
 * Callers:
 *     ?clear@?$vector_facade@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V?$buffer_impl@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@$03$00Vliberal_expansion_policy@detail@@@detail@@@detail@@QEAAXXZ @ 0x1801A3438 (-clear@-$vector_facade@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@V-$bu.c)
 * Callees:
 *     ?_Xoverflow_error@std@@YAXPEBD@Z @ 0x18015B208 (-_Xoverflow_error@std@@YAXPEBD@Z.c)
 *     ??$destruct_range@V?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@YAXPEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@0@Z @ 0x18019C99C (--$destruct_range@V-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@detail@@Y.c)
 *     ??$move@V?$move_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@std@@V?$checked_array_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@@std@@YA?AV?$checked_array_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@stdext@@V?$move_iterator@PEAV?$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@@0@0V12@@Z @ 0x18019C9D4 (--$move@V-$move_iterator@PEAV-$com_ptr_t@VCCachedVisualImage@@Uerr_returncode_policy@wil@@@wil@@.c)
 */

__int64 __fastcall detail::vector_facade<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,detail::buffer_impl<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>,4,1,detail::liberal_expansion_policy>>::clear_region(
        __int64 a1,
        __int64 a2,
        unsigned __int64 a3)
{
  const char *v4; // rcx
  unsigned __int64 v5; // rax
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 result; // rax
  __int128 v9; // [rsp+20h] [rbp-40h] BYREF
  __int64 v10; // [rsp+30h] [rbp-30h]
  __int128 v11; // [rsp+40h] [rbp-20h] BYREF
  __int64 v12; // [rsp+50h] [rbp-10h]

  v4 = *(const char **)a1;
  v5 = (__int64)(*(_QWORD *)(a1 + 8) - (_QWORD)v4) >> 3;
  if ( a3 > v5 )
    std::_Xoverflow_error(v4);
  v10 = 0LL;
  v6 = (__int64)&v4[8 * v5];
  *(_QWORD *)&v9 = v4;
  v7 = 8 * a3;
  *((_QWORD *)&v9 + 1) = v5;
  if ( a3 != v5 )
  {
    v10 = 0LL;
    v12 = 0LL;
    v11 = v9;
    std::move<std::move_iterator<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy> *>,stdext::checked_array_iterator<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy> *>>(
      (__int64)&v9,
      (__int64 *)&v4[v7],
      (__int64 *)&v4[8 * v5],
      (__int64 *)&v11);
  }
  result = detail::destruct_range<wil::com_ptr_t<CCachedVisualImage,wil::err_returncode_policy>>(v6 - v7, v6);
  *(_QWORD *)(a1 + 8) -= v7;
  return result;
}
