/*
 * XREFs of wil::details::ScopeExitFn__lambda_86b910d3a69424724dd24da1829e0101___::_ScopeExitFn__lambda_86b910d3a69424724dd24da1829e0101___ @ 0x1802FA604
 * Callers:
 *     _XamlLauncherState::OnCortanaCutoffTimerFired_::_1_::dtor$0 @ 0x1802FC43D (_XamlLauncherState--OnCortanaCutoffTimerFired_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802F8BAC (--$OnCortanaCutoffTimerFired@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_86b910d3a69424724dd24da1829e0101___::_ScopeExitFn__lambda_86b910d3a69424724dd24da1829e0101___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaCutoffTimerFired<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
