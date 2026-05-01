/*
 * XREFs of ??$_Floating_to_wstring@N@std@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@0@PEBGN@Z @ 0x180093D9C
 * Callers:
 *     ?SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ @ 0x180094280 (-SetOverrideMonitorSizeForSIP@TabTipAdapter@KeyboardHosting@@QEAAJXZ.c)
 * Callees:
 *     swprintf_s @ 0x1800851D4 (swprintf_s.c)
 *     _scwprintf @ 0x18008522C (_scwprintf.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@_KG@Z @ 0x180093F44 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@_KG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KG@Z @ 0x18016F994 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KG@Z.c)
 */

// Hidden C++ exception states: #wind=1
wchar_t *__fastcall std::_Floating_to_wstring<double>(wchar_t *a1, __int64 a2, double a3)
{
  int v4; // eax
  unsigned __int64 v5; // rdi
  size_t v6; // rsi
  wchar_t *v7; // rcx
  wchar_t *v8; // rax

  v4 = scwprintf(L"%f", a3);
  v5 = v4;
  v6 = v4 + 1;
  std::wstring::wstring(a1, v6);
  v7 = a1;
  if ( *((_QWORD *)a1 + 3) >= 8uLL )
    v7 = *(wchar_t **)a1;
  swprintf_s(v7, v6, L"%f", a3, 1);
  if ( v5 > *((_QWORD *)a1 + 2) )
  {
    std::wstring::append(a1, v5 - *((_QWORD *)a1 + 2), 0LL);
  }
  else
  {
    *((_QWORD *)a1 + 2) = v5;
    v8 = a1;
    if ( *((_QWORD *)a1 + 3) >= 8uLL )
      v8 = *(wchar_t **)a1;
    v8[v5] = 0;
  }
  return a1;
}
