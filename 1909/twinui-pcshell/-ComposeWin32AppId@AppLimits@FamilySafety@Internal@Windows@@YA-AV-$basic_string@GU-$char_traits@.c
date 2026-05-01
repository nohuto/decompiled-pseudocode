/*
 * XREFs of ?ComposeWin32AppId@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGAEBV56@1@Z @ 0x1800BD8DC
 * Callers:
 *     ?ComputeAppIdFromExePath@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x1800BDA5C (-ComputeAppIdFromExePath@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG.c)
 * Callees:
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAXXZ @ 0x1800798F4 (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAXXZ.c)
 *     ?find_last_path_segment@wil@@YAPEBGPEBG@Z @ 0x180084E84 (-find_last_path_segment@wil@@YAPEBGPEBG@Z.c)
 *     __security_check_cookie @ 0x180089590 (__security_check_cookie.c)
 *     ??$str_printf@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@wil@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBGZZ @ 0x1800BD6CC (--$str_printf@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@wil@@YA-AV-$basic_s.c)
 *     ?PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@PEBG@Z @ 0x1800BE044 (-PercentEncodeAndToLower@AppLimits@FamilySafety@Internal@Windows@@YA-AV-$unique_any_t@V-$unique_.c)
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x180216A2C (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall Windows::Internal::FamilySafety::AppLimits::ComposeWin32AppId(
        _QWORD *a1,
        const WCHAR *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  const unsigned __int16 *last_path_segment; // rdx
  __int64 v8; // rax
  __int64 v9; // rax
  LPVOID v11; // [rsp+20h] [rbp-50h] BYREF
  int v12; // [rsp+28h] [rbp-48h]
  LPVOID pv[3]; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v14[4]; // [rsp+48h] [rbp-28h] BYREF

  pv[1] = (LPVOID)-2LL;
  pv[2] = a1;
  a1[2] = 0LL;
  a1[3] = 7LL;
  *(_WORD *)a1 = 0;
  v12 = 1;
  last_path_segment = wil::find_last_path_segment(a2, a2);
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(&v11, last_path_segment);
  if ( a3[2] )
  {
    if ( a3[3] >= 8uLL )
      a3 = (_QWORD *)*a3;
    v8 = wil::str_printf<std::wstring>((__int64)v14, (__int64)L"win32:%s_%s", v11, a3);
    goto LABEL_11;
  }
  if ( !a4[2] )
  {
    v8 = wil::str_printf<std::wstring>((__int64)v14, (__int64)L"win32:%s_", v11);
LABEL_11:
    std::wstring::operator=(a1, v8);
    std::wstring::_Tidy_deallocate(v14);
    goto LABEL_12;
  }
  if ( a4[3] >= 8uLL )
    a4 = (_QWORD *)*a4;
  Windows::Internal::FamilySafety::AppLimits::PercentEncodeAndToLower(pv, a4);
  v9 = wil::str_printf<std::wstring>((__int64)v14, (__int64)L"win32:%s_!dev=%s", v11, pv[0]);
  std::wstring::operator=(a1, v9);
  std::wstring::_Tidy_deallocate(v14);
  if ( pv[0] )
    CoTaskMemFree(pv[0]);
LABEL_12:
  if ( v11 )
    CoTaskMemFree(v11);
  return a1;
}
