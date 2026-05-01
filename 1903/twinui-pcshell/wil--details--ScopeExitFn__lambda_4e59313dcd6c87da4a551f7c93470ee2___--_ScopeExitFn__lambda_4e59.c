/*
 * XREFs of wil::details::ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___::_ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___ @ 0x1802FA564
 * Callers:
 *     _XamlLauncherState::OnCortanaDismissRequested_::_1_::dtor$0 @ 0x1802FC6D8 (_XamlLauncherState--OnCortanaDismissRequested_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802F8E34 (--$OnCortanaDismissRequested@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___::_ScopeExitFn__lambda_4e59313dcd6c87da4a551f7c93470ee2___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaDismissRequested<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
