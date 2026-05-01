/*
 * XREFs of wil::details::ScopeExitFn__lambda_dd9dfa9d325e7bfe70e66d814bbbfb68___::_ScopeExitFn__lambda_dd9dfa9d325e7bfe70e66d814bbbfb68___ @ 0x180319BC4
 * Callers:
 *     _XamlLauncherState::OnCortanaDestroyed_::_1_::dtor$0 @ 0x18031BA2F (_XamlLauncherState--OnCortanaDestroyed_--_1_--dtor$0.c)
 * Callees:
 *     ??$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180318180 (--$OnCortanaDestroyed@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAE.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_dd9dfa9d325e7bfe70e66d814bbbfb68___::_ScopeExitFn__lambda_dd9dfa9d325e7bfe70e66d814bbbfb68___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::OnCortanaDestroyed<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
