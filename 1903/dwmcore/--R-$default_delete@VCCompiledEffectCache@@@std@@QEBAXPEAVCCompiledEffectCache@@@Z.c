/*
 * XREFs of ??R?$default_delete@VCCompiledEffectCache@@@std@@QEBAXPEAVCCompiledEffectCache@@@Z @ 0x1800E6D88
 * Callers:
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spCenteredCompiledEffectCache__ @ 0x1800EDDD0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spCenteredCompiledEffectCache__.c)
 *     _dynamic_atexit_destructor_for__CRadialGradientEffect::s_spNonCenteredCompiledEffectCache__ @ 0x1800EDDF0 (_dynamic_atexit_destructor_for__CRadialGradientEffect--s_spNonCenteredCompiledEffectCache__.c)
 *     _dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect::s_spCompiledEffectCache__ @ 0x1800EDE10 (_dynamic_atexit_destructor_for__CProjectedShadowApproxBlurEffect--s_spCompiledEffectCache__.c)
 * Callees:
 *     ??_GCCompiledEffectCache@@QEAAPEAXI@Z @ 0x18019A494 (--_GCCompiledEffectCache@@QEAAPEAXI@Z.c)
 */

void *__fastcall std::default_delete<CCompiledEffectCache>::operator()(__int64 a1, CCompiledEffectCache *a2)
{
  void *result; // rax

  if ( a2 )
    return CCompiledEffectCache::`scalar deleting destructor'(a2, (unsigned int)a2);
  return result;
}
