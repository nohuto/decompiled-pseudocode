/*
 * XREFs of ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x18006BA08
 * Callers:
 *     ?GetRects@?$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x1800A98DC (-GetRects@-$CMergedRectBase@$03@@QEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 *     ?Add@?$CMergedRectBase@$03@@QEAAXAEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800AA1B4 (-Add@-$CMergedRectBase@$03@@QEAAXAEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectU.c)
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

char __fastcall CMergedRectBase<4>::SwapExisting(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v3; // r10
  char v4; // r11
  __m128i v5; // xmm1
  char result; // al
  __m128i v7; // [rsp+0h] [rbp-28h]

  v3 = a2 + a1;
  v4 = *(_BYTE *)(v3 + 64);
  if ( v4 )
    v5 = _mm_loadu_si128((const __m128i *)(16LL * a2 + a1));
  else
    v5 = v7;
  result = 1;
  *(_OWORD *)(a1 + 16LL * a2) = *(_OWORD *)(a1 + 16LL * a3);
  *(_BYTE *)(v3 + 64) = 1;
  if ( v4 )
    *(__m128i *)(a1 + 16LL * a3) = v5;
  else
    result = 0;
  *(_BYTE *)(a3 + a1 + 64) = result;
  return result;
}
