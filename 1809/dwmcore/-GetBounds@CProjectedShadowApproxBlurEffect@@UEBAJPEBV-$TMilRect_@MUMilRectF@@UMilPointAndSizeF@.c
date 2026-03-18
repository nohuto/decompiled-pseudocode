/*
 * XREFs of ?GetBounds@CProjectedShadowApproxBlurEffect@@UEBAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@IPEAV2@@Z @ 0x18022BEE0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x1800570A0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

__int64 __fastcall CProjectedShadowApproxBlurEffect::GetBounds(__int64 a1, float *a2, int a3, float *a4)
{
  float *v4; // r10
  __int64 v5; // rdx
  __int64 v6; // r9

  v4 = a4;
  *(_OWORD *)a4 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  if ( a3 )
  {
    do
    {
      TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v4, a2);
      a2 = (float *)(v5 + 16);
    }
    while ( v6 != 1 );
  }
  return 0LL;
}
