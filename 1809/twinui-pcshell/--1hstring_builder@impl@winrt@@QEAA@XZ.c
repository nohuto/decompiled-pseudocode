/*
 * XREFs of ??1hstring_builder@impl@winrt@@QEAA@XZ @ 0x18039708C
 * Callers:
 *     _winrt::to_hstring_char_const_____ptr64_void__::_1_::dtor$1 @ 0x180396D9F (_winrt--to_hstring_char_const_____ptr64_void__--_1_--dtor$1.c)
 * Callees:
 *     WindowsDeleteStringBuffer_0 @ 0x180088610 (WindowsDeleteStringBuffer_0.c)
 */

void __fastcall winrt::impl::hstring_builder::~hstring_builder(winrt::impl::hstring_builder *this)
{
  HSTRING_BUFFER v1; // rcx

  v1 = (HSTRING_BUFFER)*((_QWORD *)this + 1);
  if ( v1 )
    WindowsDeleteStringBuffer_0(v1);
}
