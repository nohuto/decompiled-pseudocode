/*
 * XREFs of atexit @ 0x18004E47C
 * Callers:
 *     wil::details::_dynamic_initializer_for__g_enabledStateManager__ @ 0x180001000 (wil--details--_dynamic_initializer_for__g_enabledStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_featureStateManager__ @ 0x180001020 (wil--details--_dynamic_initializer_for__g_featureStateManager__.c)
 *     wil::details::_dynamic_initializer_for__g_processLocalData__ @ 0x180001150 (wil--details--_dynamic_initializer_for__g_processLocalData__.c)
 *     wil::details::_dynamic_initializer_for__g_threadFailureCallbacks__ @ 0x180001160 (wil--details--_dynamic_initializer_for__g_threadFailureCallbacks__.c)
 *     _dynamic_initializer_for__ColorCache::_cachedColors__ @ 0x180001190 (_dynamic_initializer_for__ColorCache--_cachedColors__.c)
 *     _dynamic_initializer_for__ColorCache::_lock__ @ 0x1800011D0 (_dynamic_initializer_for__ColorCache--_lock__.c)
 *     _dynamic_initializer_for__CDesktopManager::s_csDwmInstance__ @ 0x180001200 (_dynamic_initializer_for__CDesktopManager--s_csDwmInstance__.c)
 *     _dynamic_initializer_for__CTopLevelWindow::s_rgpwfWindowFrames__ @ 0x180001240 (_dynamic_initializer_for__CTopLevelWindow--s_rgpwfWindowFrames__.c)
 *     _dynamic_initializer_for__CWindowIconic::s_rgpBitmapPendingImages__ @ 0x180001260 (_dynamic_initializer_for__CWindowIconic--s_rgpBitmapPendingImages__.c)
 *     _dynamic_initializer_for__g_ResourceCacheIndexManager__ @ 0x180001280 (_dynamic_initializer_for__g_ResourceCacheIndexManager__.c)
 *     ?get@?$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z @ 0x180009D00 (-get@-$static_lazy@VWindowFrameLogging@@@details@wil@@QEAAPEAVWindowFrameLogging@@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z @ 0x18000A3BC (-get@-$static_lazy@VAnimationClockLogging@@@details@wil@@QEAAPEAVAnimationClockLogging@@P6AXXZ@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x18002F538 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?get@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z @ 0x18003C954 (-get@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAAPEAVFeatureLogging@23@P6AXXZ@Z.c)
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x18007A6C0 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x1800856F0 (-FallbackTelemetryCallback@WindowFrameLoggingTelemetry@@SAX_NAEBUFailureInfo@wil@@@Z.c)
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800B9A8C (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 *     ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x1800B9DA0 (-IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800B9EF8 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 * Callees:
 *     _onexit_0 @ 0x18004E3E8 (_onexit_0.c)
 */

int __cdecl atexit(void (__cdecl *a1)())
{
  return (onexit_0((_onexit_t)a1) != 0LL) - 1;
}
