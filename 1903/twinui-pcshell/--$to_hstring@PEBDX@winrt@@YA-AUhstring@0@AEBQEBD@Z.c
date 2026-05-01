/*
 * XREFs of ??$to_hstring@PEBDX@winrt@@YA?AUhstring@0@AEBQEBD@Z @ 0x1801DE128
 * Callers:
 *     _winrt::to_hresult_::_1_::catch$17 @ 0x1801DE7DB (_winrt--to_hresult_--_1_--catch$17.c)
 *     _winrt::to_hresult_::_1_::catch$18 @ 0x1801DE87B (_winrt--to_hresult_--_1_--catch$18.c)
 *     _winrt::to_hresult_::_1_::catch$19 @ 0x1801DE91B (_winrt--to_hresult_--_1_--catch$19.c)
 * Callees:
 *     MultiByteToWideChar_0 @ 0x180088683 (MultiByteToWideChar_0.c)
 *     WindowsDeleteStringBuffer_0 @ 0x18008B480 (WindowsDeleteStringBuffer_0.c)
 *     WindowsPreallocateStringBuffer_0 @ 0x18008B48C (WindowsPreallocateStringBuffer_0.c)
 *     ?throw_hresult@winrt@@YAXUhresult@1@@Z @ 0x1801DE4E0 (-throw_hresult@winrt@@YAXUhresult@1@@Z.c)
 *     ?to_hstring@hstring_builder@impl@winrt@@QEAA?AUhstring@3@XZ @ 0x1801DE9BC (-to_hstring@hstring_builder@impl@winrt@@QEAA-AUhstring@3@XZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::to_hstring<char const *,void>(_QWORD *a1, const CHAR **a2)
{
  const CHAR *v3; // rsi
  __int64 v4; // rdi
  UINT32 v5; // eax
  int cchWideChar; // ebp
  HRESULT v7; // eax
  WCHAR *charBuffer[2]; // [rsp+38h] [rbp-20h] BYREF

  v3 = *a2;
  v4 = -1LL;
  do
    ++v4;
  while ( v3[v4] );
  v5 = MultiByteToWideChar_0(0xFDE9u, 0, v3, v4, 0LL, 0);
  cchWideChar = v5;
  if ( v5 )
  {
    *(_OWORD *)charBuffer = 0LL;
    v7 = WindowsPreallocateStringBuffer_0(v5, charBuffer, (HSTRING_BUFFER *)&charBuffer[1]);
    if ( v7 < 0 )
      winrt::throw_hresult((unsigned int)v7);
    MultiByteToWideChar_0(0xFDE9u, 0, v3, v4, charBuffer[0], cchWideChar);
    winrt::impl::hstring_builder::to_hstring(charBuffer, a1);
    if ( charBuffer[1] )
      WindowsDeleteStringBuffer_0((HSTRING_BUFFER)charBuffer[1]);
  }
  else
  {
    *a1 = 0LL;
    *a1 = 0LL;
  }
  return a1;
}
