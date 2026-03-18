/*
 * XREFs of ClearKeyboardToggleStates @ 0x1C0091B60
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x1C0026900 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     __security_check_cookie @ 0x1C00BAF90 (__security_check_cookie.c)
 */

__int64 __fastcall ClearKeyboardToggleStates(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r9d
  __int64 v4; // r8
  __int64 result; // rax
  unsigned int v6; // r9d
  __int64 v7; // r8
  unsigned __int64 v8; // rdx
  _BYTE v9[16]; // [rsp+20h] [rbp-28h]

  GetDomainLockRef(16LL, a2, a3);
  v3 = 0;
  v4 = 0LL;
  do
  {
    ++v3;
    v9[v4] = *((_BYTE *)&gafAsyncKeyState + ((unsigned __int64)byte_1C01DD080[v4] >> 2)) & (1 << (2
                                                                                                * (byte_1C01DD080[v4] & 3)
                                                                                                + 1));
    ++v4;
  }
  while ( v3 < 0xE );
  for ( result = 0LL; result < 64; result += 16LL )
    *(__int128 *)((char *)&gafAsyncKeyState + result) = (__int128)_mm_and_si128(
                                                                    _mm_loadu_si128((const __m128i *)((char *)&gafAsyncKeyState + result)),
                                                                    (__m128i)_xmm);
  v6 = 0;
  v7 = 0LL;
  do
  {
    if ( v9[v7] )
    {
      v8 = byte_1C01DD080[v7];
      result = 2 * (unsigned int)(v8 & 3) + 1;
      *((_BYTE *)&gafAsyncKeyState + (v8 >> 2)) |= 1 << (2 * (v8 & 3) + 1);
    }
    ++v6;
    ++v7;
  }
  while ( v6 < 0xE );
  return result;
}
