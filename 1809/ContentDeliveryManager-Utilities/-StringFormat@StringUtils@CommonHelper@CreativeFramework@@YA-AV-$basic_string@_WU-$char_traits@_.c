/*
 * XREFs of ?StringFormat@StringUtils@CommonHelper@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_WZZ @ 0x1800A51D0
 * Callers:
 *     _lambda_3b51b811795083c8866600a62beaf61a_::operator() @ 0x180064818 (_lambda_3b51b811795083c8866600a62beaf61a_--operator().c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x1800661EC (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ??_U@YAPEAX_K@Z @ 0x1800ABA2C (--_U@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *CreativeFramework::CommonHelper::StringUtils::StringFormat(_QWORD *a1, wchar_t *Format, ...)
{
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  wchar_t *v5; // rbx
  unsigned __int64 v6; // r8
  va_list va; // [rsp+70h] [rbp+18h] BYREF

  va_start(va, Format);
  v3 = _vscwprintf(Format, va) + 1;
  v4 = -1LL;
  v5 = (wchar_t *)operator new[](saturated_mul(v3, 2uLL));
  vswprintf_s(v5, v3, Format, va);
  a1[3] = 7LL;
  v6 = 0LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( *v5 )
  {
    do
      ++v4;
    while ( v5[v4] );
    v6 = v4;
  }
  std::wstring::assign(a1, (char *)v5, v6);
  operator delete[](v5);
  return a1;
}
