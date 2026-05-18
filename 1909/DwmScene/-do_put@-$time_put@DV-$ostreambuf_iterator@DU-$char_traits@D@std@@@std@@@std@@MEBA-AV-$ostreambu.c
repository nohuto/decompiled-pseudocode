/*
 * XREFs of ?do_put@?$time_put@DV?$ostreambuf_iterator@DU?$char_traits@D@std@@@std@@@std@@MEBA?AV?$ostreambuf_iterator@DU?$char_traits@D@std@@@2@V32@AEAVios_base@2@DPEBUtm@@DD@Z @ 0x18011DE34
 * Callers:
 *     sub_18011DE0C @ 0x18011DE0C (sub_18011DE0C.c)
 * Callees:
 *     unknown_libname_116 @ 0x18001146C (unknown_libname_116.c)
 *     ?append@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z @ 0x18011E098 (-append@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@_K_W@Z.c)
 *     __security_check_cookie @ 0x1801261A0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::time_put<char,std::ostreambuf_iterator<char>>::do_put(__int64 a1, const CHAR *a2, __int64 a3)
{
  int v3; // esi
  int cchWideChar; // r14d
  WCHAR *lpWideCharStr; // rax
  LPWSTR Src[2]; // [rsp+40h] [rbp-30h] BYREF
  __int128 v10; // [rsp+50h] [rbp-20h]

  v3 = a3;
  if ( a3 )
  {
    cchWideChar = MultiByteToWideChar(0xFDE9u, 0, a2, a3, 0LL, 0);
    *(_QWORD *)&v10 = 0LL;
    *((_QWORD *)&v10 + 1) = 7LL;
    LOWORD(Src[0]) = 0;
    if ( cchWideChar <= 0 )
      __fastfail(7u);
    std::wstring::append(Src);
    lpWideCharStr = (WCHAR *)Src;
    if ( *((_QWORD *)&v10 + 1) >= 8uLL )
      lpWideCharStr = Src[0];
    MultiByteToWideChar(0xFDE9u, 0, a2, v3, lpWideCharStr, cchWideChar);
    *(_OWORD *)a1 = *(_OWORD *)Src;
    *(_OWORD *)(a1 + 16) = v10;
    *(_QWORD *)&v10 = 0LL;
    *((_QWORD *)&v10 + 1) = 7LL;
    LOWORD(Src[0]) = 0;
    unknown_libname_116((__int64 *)Src);
  }
  else
  {
    *(_QWORD *)(a1 + 16) = 0LL;
    *(_QWORD *)(a1 + 24) = 7LL;
    *(_WORD *)a1 = 0;
  }
  return a1;
}
