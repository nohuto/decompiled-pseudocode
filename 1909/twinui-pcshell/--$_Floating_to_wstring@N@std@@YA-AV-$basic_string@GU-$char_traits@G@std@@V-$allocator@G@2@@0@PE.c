/*
 * XREFs of ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x18033B9C0
 * Callers:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x18005A204 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     swprintf_s @ 0x18008A980 (swprintf_s.c)
 *     _scwprintf @ 0x18008A9D8 (_scwprintf.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x18033CE24 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
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
