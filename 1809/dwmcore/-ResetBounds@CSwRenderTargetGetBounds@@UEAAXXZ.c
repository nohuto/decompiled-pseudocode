/*
 * XREFs of ?ResetBounds@CSwRenderTargetGetBounds@@UEAAXXZ @ 0x1800E7780
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1800EB870 (__security_check_cookie.c)
 */

void __fastcall CSwRenderTargetGetBounds::ResetBounds(CSwRenderTargetGetBounds *this)
{
  *(_OWORD *)((char *)this + 36) = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
}
