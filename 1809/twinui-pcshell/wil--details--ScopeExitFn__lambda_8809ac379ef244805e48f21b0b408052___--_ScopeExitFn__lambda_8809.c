/*
 * XREFs of wil::details::ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___::_ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___ @ 0x1802A2298
 * Callers:
 *     _XamlLauncherState::ShowCortanaFromOpenStart_::_1_::dtor$0 @ 0x1800ABA3F (_XamlLauncherState--ShowCortanaFromOpenStart_--_1_--dtor$0.c)
 * Callees:
 *     ??$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x18007E018 (--$ShowCortanaFromOpenStart@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___::_ScopeExitFn__lambda_8809ac379ef244805e48f21b0b408052___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowCortanaFromOpenStart<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
