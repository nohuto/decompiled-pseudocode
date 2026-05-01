/*
 * XREFs of ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x18031C160
 * Callers:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18005B1F4 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     swprintf_s @ 0x180087E40 (swprintf_s.c)
 *     _scwprintf @ 0x180087E98 (_scwprintf.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x18031D5C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 */

__int64 __fastcall std::_Floating_to_wstring<double>(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rdi
  wchar_t *v5; // rcx

  v4 = scwprintf(L"%f", a3);
  std::wstring::wstring(a1, v4);
  v5 = (wchar_t *)a1;
  if ( *(_QWORD *)(a1 + 24) >= 8uLL )
    v5 = *(wchar_t **)a1;
  swprintf_s(v5, v4 + 1, L"%f", a3);
  return a1;
}
