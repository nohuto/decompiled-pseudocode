/*
 * XREFs of ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x180398934
 * Callers:
 *     ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x180396CC8 (--$to_hstring@PEBDX@winrt@@YA-AUhstring@0@AEBQEBD@Z.c)
 * Callees:
 *     __Platform_WindowsPromoteStringBuffer @ 0x180088628 (__Platform_WindowsPromoteStringBuffer.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x180384E9C (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 */

// positive sp value has been detected, the output may be wrong!
// Hidden C++ exception states: #wind=1
HSTRING *__fastcall winrt::impl::hstring_builder::to_hstring(__int64 a1, HSTRING *a2)
{
  HRESULT v4; // eax

  *a2 = 0LL;
  v4 = _Platform_WindowsPromoteStringBuffer(*(HSTRING_BUFFER *)(a1 + 8), a2);
  if ( v4 < 0 )
    winrt::throw_hresult(v4);
  *(_QWORD *)(a1 + 8) = 0LL;
  return a2;
}
