/*
 * XREFs of ?SwapExisting@?$CMergedRectBase@$01@@IEAAXII@Z @ 0x180185E78
 * Callers:
 *     ?Optimize@?$CMergedRectBase@$01@@IEAAX_N@Z @ 0x180185A4C (-Optimize@-$CMergedRectBase@$01@@IEAAX_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800E7E60 (__security_check_cookie.c)
 */

char __fastcall CMergedRectBase<2>::SwapExisting(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  char v4; // r11
  __m128i v5; // xmm1
  char result; // al
  __m128i v7; // [rsp+0h] [rbp-28h]

  v3 = a2 + a1;
  v4 = *(_BYTE *)(v3 + 32);
  if ( v4 )
    v5 = _mm_loadu_si128((const __m128i *)(16LL * a2 + a1));
  else
    v5 = v7;
  result = 1;
  *(_OWORD *)(a1 + 16LL * a2) = *(_OWORD *)(a1 + 16LL * a3);
  *(_BYTE *)(v3 + 32) = 1;
  if ( v4 )
    *(__m128i *)(a1 + 16LL * a3) = v5;
  else
    result = 0;
  *(_BYTE *)(a3 + a1 + 32) = result;
  return result;
}
