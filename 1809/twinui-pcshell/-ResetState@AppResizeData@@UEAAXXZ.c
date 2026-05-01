/*
 * XREFs of ?ResetState@AppResizeData@@UEAAXXZ @ 0x180083070
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180083F50 (__security_check_cookie.c)
 */

void __fastcall AppResizeData::ResetState(AppResizeData *this)
{
  _BYTE v1[20]; // [rsp+8h] [rbp-30h]

  *(_DWORD *)v1 = -1;
  *(_OWORD *)&v1[4] = 0LL;
  *((_OWORD *)this + 4) = *(_OWORD *)v1;
  *((_QWORD *)this + 3) = 0x7FFFFFFF7FFFFFFFLL;
  *((_DWORD *)this + 20) = _mm_cvtsi128_si32(_mm_srli_si128((__m128i)0LL, 12));
}
