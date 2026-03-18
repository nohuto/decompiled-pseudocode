/*
 * XREFs of _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredCompiledEffectCache__ @ 0x1800EDDD0
 * Callers:
 *     <none>
 * Callees:
 *     ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E6D88 (--R-$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z.c)
 */

void *__fastcall dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredCompiledEffectCache__(__int64 a1)
{
  void *result; // rax

  if ( CRadialGradientEffect::s_spCenteredCompiledEffectCache )
    return std::default_delete<CCompiledEffectCache>::operator()(
             a1,
             CRadialGradientEffect::s_spCenteredCompiledEffectCache);
  return result;
}
