/*
 * XREFs of ??1hstring@winrt@@QEAA@XZ @ 0x180397064
 * Callers:
 *     _winrt::impl::hstring_builder::to_hstring_::_1_::dtor$0 @ 0x18039898A (_winrt--impl--hstring_builder--to_hstring_--_1_--dtor$0.c)
 * Callees:
 *     WindowsDeleteString_0 @ 0x1800855EE (WindowsDeleteString_0.c)
 */

void __fastcall winrt::hstring::~hstring(HSTRING *this)
{
  HSTRING v2; // rcx

  v2 = *this;
  if ( v2 )
  {
    WindowsDeleteString_0(v2);
    *this = 0LL;
  }
}
