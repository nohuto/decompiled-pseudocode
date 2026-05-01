/*
 * XREFs of ??0hstring@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x1800A17C0
 * Callers:
 *     ??0hstring@winrt@@QEAA@PEBG@Z @ 0x1800A1808 (--0hstring@winrt@@QEAA@PEBG@Z.c)
 *     ?get@?$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA?AUhstring@3@XZ @ 0x1800C4B3C (-get@-$runtime_class_name@UIObjectWithSite@@X@impl@winrt@@SA-AUhstring@3@XZ.c)
 * Callees:
 *     WINRT_WindowsCreateString @ 0x18008AF3E (WINRT_WindowsCreateString.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801ED540 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

HSTRING *__fastcall winrt::hstring::hstring(HSTRING *a1, __int64 a2)
{
  HRESULT v3; // eax
  HSTRING string; // [rsp+30h] [rbp+8h] BYREF

  string = 0LL;
  v3 = WINRT_WindowsCreateString(*(PCNZWCH *)a2, *(_DWORD *)(a2 + 8), &string);
  if ( v3 < 0 )
    winrt::throw_hresult((unsigned int)v3);
  *a1 = string;
  return a1;
}
