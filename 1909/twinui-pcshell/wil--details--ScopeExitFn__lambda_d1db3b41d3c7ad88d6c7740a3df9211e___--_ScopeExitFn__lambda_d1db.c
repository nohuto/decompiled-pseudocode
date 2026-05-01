/*
 * XREFs of wil::details::ScopeExitFn__lambda_d1db3b41d3c7ad88d6c7740a3df9211e___::_ScopeExitFn__lambda_d1db3b41d3c7ad88d6c7740a3df9211e___ @ 0x180319B4C
 * Callers:
 *     _XamlLauncherState::OnStartExitTransitionToCortanaCompleted_::_1_::dtor$0 @ 0x18031C4B1 (_XamlLauncherState--OnStartExitTransitionToCortanaCompleted_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180318A5C (--$OnStartExitTransitionToCortanaCompleted@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartW.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_d1db3b41d3c7ad88d6c7740a3df9211e___::_ScopeExitFn__lambda_d1db3b41d3c7ad88d6c7740a3df9211e___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnStartExitTransitionToCortanaCompleted<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
