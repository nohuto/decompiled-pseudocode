/*
 * XREFs of ?vInheritSurfaceDpiScale@DC@@QEAAXXZ @ 0x1C0026A58
 * Callers:
 *     GreCreateDisplayDC @ 0x1C002D5C0 (GreCreateDisplayDC.c)
 * Callees:
 *     UserIsWindowGdiScaled @ 0x1C0022280 (UserIsWindowGdiScaled.c)
 *     ?vClearDpiScaling@DC@@QEAAXXZ @ 0x1C00269E0 (-vClearDpiScaling@DC@@QEAAXXZ.c)
 *     ?bDpiScaledSurface@DC@@QEBAHXZ @ 0x1C0026A30 (-bDpiScaledSurface@DC@@QEBAHXZ.c)
 *     GreGetScaledLogPixels @ 0x1C0072EA0 (GreGetScaledLogPixels.c)
 *     ?vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z @ 0x1C00C05C0 (-vSetDpiScaling@DC@@QEAAXVPOINTFL@@@Z.c)
 */

void __fastcall DC::vInheritSurfaceDpiScale(DC *this)
{
  __int64 v2; // rdx
  void *v3; // rcx
  unsigned __int64 v4; // rdx
  __m128 v5; // xmm0
  __int16 v6; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 63) && (unsigned int)DC::bDpiScaledSurface(this) )
  {
    v4 = *(_QWORD *)(v2 + 660);
  }
  else
  {
    v3 = (void *)*((_QWORD *)this + 59);
    if ( !v3 || !(unsigned int)UserIsWindowGdiScaled(v3, &v6) || v6 == 96 )
    {
      DC::vClearDpiScaling(this);
      return;
    }
    v5 = (__m128)COERCE_UNSIGNED_INT((float)(unsigned __int16)GreGetScaledLogPixels());
    v5.m128_f32[0] = v5.m128_f32[0] / 96.0;
    v4 = _mm_unpacklo_ps(v5, v5).m128_u64[0];
  }
  DC::vSetDpiScaling(this, v4);
}
