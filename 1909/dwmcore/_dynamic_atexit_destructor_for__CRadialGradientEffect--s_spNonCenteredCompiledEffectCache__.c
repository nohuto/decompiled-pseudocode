/*
 * XREFs of _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredCompiledEffectCache__ @ 0x1800F1AA0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E7C38 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 */

void *__fastcall dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredCompiledEffectCache__(__int64 a1)
{
  void *result; // rax

  if ( CRadialGradientEffect::s_spNonCenteredCompiledEffectCache )
    return std::default_delete<CCompiledEffectCache>::operator()(
             a1,
             CRadialGradientEffect::s_spNonCenteredCompiledEffectCache);
  return result;
}
