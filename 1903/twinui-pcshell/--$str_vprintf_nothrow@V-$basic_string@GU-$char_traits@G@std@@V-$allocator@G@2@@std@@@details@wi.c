/*
 * XREFs of ??$str_vprintf_nothrow@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@YAJAEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEAPEAD@Z @ 0x1800AEE74
 * Callers:
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1800AEDCC (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180072AA8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800768E4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180086B80 (__security_check_cookie.c)
 *     _vscwprintf @ 0x180087DF0 (_vscwprintf.c)
 *     ?StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z @ 0x1800AF890 (-StringCchVPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGPEAD@Z.c)
 *     ?make@?$string_maker@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@details@wil@@QEAAJPEBG_K@Z @ 0x1800AFBAC (-make@-$string_maker@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@details@wil@.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801F792C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

__int64 __fastcall wil::details::str_vprintf_nothrow<std::wstring>(__int64 a1, const wchar_t *a2, va_list *a3)
{
  __int64 v6; // r14
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int16 **v9; // r8
  unsigned __int64 *v10; // r9
  unsigned int v11; // ebx
  __int64 v12; // rdx
  wchar_t *v13; // rcx
  __int128 v14; // xmm0
  __m128i v15; // xmm1
  unsigned int v17; // [rsp+20h] [rbp-49h]
  STRSAFE_LPWSTR pszDest[2]; // [rsp+40h] [rbp-29h] BYREF
  __m128i si128; // [rsp+50h] [rbp-19h]
  _OWORD v20[2]; // [rsp+60h] [rbp-9h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]

  v6 = vscwprintf(a2, *a3);
  LOWORD(pszDest[0]) = 0;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v8 = wil::details::string_maker<std::wstring>::make(pszDest, v7, v6);
  v11 = v8;
  if ( v8 >= 0 )
  {
    v13 = (wchar_t *)pszDest;
    if ( si128.m128i_i64[1] >= 8uLL )
      v13 = pszDest[0];
    v8 = StringCchVPrintfExW(v13, v6 + 1, v9, v10, v17, a2, *a3);
    v11 = v8;
    if ( v8 >= 0 )
    {
      v14 = *(_OWORD *)pszDest;
      v15 = si128;
      LOWORD(pszDest[0]) = 0;
      v20[0] = v14;
      si128 = _mm_load_si128((const __m128i *)&_xmm);
      v20[1] = v15;
      std::wstring::operator=(a1, v20);
      std::wstring::_Tidy_deallocate(v20);
      v11 = 0;
      goto LABEL_9;
    }
    v12 = 1723LL;
  }
  else
  {
    v12 = 1720LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v12,
    (__int64)"internal\\sdk\\inc\\wil\\opensource\\wil\\resource.h",
    (const char *)(unsigned int)v8);
LABEL_9:
  std::wstring::_Tidy_deallocate(pszDest);
  return v11;
}
