/*
 * XREFs of ?ComposeWin32AppIdForJavaApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV?$basic_string_view@GU?$char_traits@G@std@@@2@@Z @ 0x1800BE588
 * Callers:
 *     ?GetAppIdForSpecialCategoryApp@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGI@Z @ 0x1800BDB18 (-GetAppIdForSpecialCategoryApp@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x180084E84 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1800BD6CC (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1800BE044 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ?GetCertSignerHashFromExe@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BED44 (-GetCertSignerHashFromExe@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEB.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180216A2C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_OWORD *__fastcall ComposeWin32AppIdForJavaApp(_OWORD *a1, const WCHAR *a2, _QWORD *a3)
{
  const unsigned __int16 *last_path_segment; // rdx
  _QWORD *v6; // r9
  __int64 v7; // rax
  LPVOID pv[2]; // [rsp+30h] [rbp-49h] BYREF
  __int128 v10; // [rsp+40h] [rbp-39h] BYREF
  __m128i si128; // [rsp+50h] [rbp-29h]
  _QWORD v12[4]; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v13[4]; // [rsp+80h] [rbp+7h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[0] = a1;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  LOWORD(v10) = 0;
  if ( a3[1] )
  {
    last_path_segment = wil::find_last_path_segment(a2, a2);
    Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(pv, (__int64)last_path_segment);
    GetCertSignerHashFromExe(v12);
    if ( v12[2] )
    {
      v6 = v12;
      if ( v12[3] >= 8uLL )
        v6 = (_QWORD *)v12[0];
      v7 = wil::str_printf<std::wstring>((__int64)v13, (__int64)L"win32:%s_%s!java=%s", pv[0], v6, *a3);
    }
    else
    {
      v7 = wil::str_printf<std::wstring>((__int64)v13, (__int64)L"win32:%s_!java=%s", pv[0], *a3);
    }
    std::wstring::operator=(&v10, v7);
    std::wstring::_Tidy_deallocate(v13);
    *a1 = v10;
    a1[1] = si128;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    LOWORD(v10) = 0;
    std::wstring::_Tidy_deallocate(v12);
    if ( pv[0] )
      CoTaskMemFree(pv[0]);
  }
  else
  {
    *((_QWORD *)a1 + 2) = 0LL;
    *((_QWORD *)a1 + 3) = 7LL;
    *(_WORD *)a1 = 0;
  }
  std::wstring::_Tidy_deallocate(&v10);
  return a1;
}
