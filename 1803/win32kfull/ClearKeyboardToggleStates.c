/*
 * XREFs of ClearKeyboardToggleStates @ 0x1C005DA48
 * Callers:
 *     xxxSetForegroundWindow2 @ 0x1C005C770 (xxxSetForegroundWindow2.c)
 *     ClearKeyboardStates @ 0x1C00BCF50 (ClearKeyboardStates.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

__int64 ClearKeyboardToggleStates()
{
  unsigned int v0; // r10d
  __int64 v1; // r9
  __int64 i; // rcx
  __int64 result; // rax
  unsigned int v4; // r10d
  __int64 v5; // r9
  _BYTE v6[16]; // [rsp+0h] [rbp-28h]

  v0 = 0;
  v1 = 0LL;
  do
  {
    ++v0;
    v6[v1] = gafAsyncKeyState[(unsigned __int64)byte_1C02DCE50[v1] >> 2] & (1 << (2 * (byte_1C02DCE50[v1] & 3) + 1));
    ++v1;
  }
  while ( v0 < 0xE );
  for ( i = 0LL; i < 64; i += 16LL )
  {
    result = *(_QWORD *)gafAsyncKeyState;
    *(__m128i *)(i + *(_QWORD *)gafAsyncKeyState) = _mm_and_si128(
                                                      _mm_loadu_si128((const __m128i *)(i + *(_QWORD *)gafAsyncKeyState)),
                                                      (__m128i)_xmm);
  }
  v4 = 0;
  v5 = 0LL;
  do
  {
    if ( v6[v5] )
    {
      result = 2 * (byte_1C02DCE50[v5] & 3u) + 1;
      gafAsyncKeyState[(unsigned __int64)byte_1C02DCE50[v5] >> 2] |= 1 << (2 * (byte_1C02DCE50[v5] & 3) + 1);
    }
    ++v4;
    ++v5;
  }
  while ( v4 < 0xE );
  return result;
}
