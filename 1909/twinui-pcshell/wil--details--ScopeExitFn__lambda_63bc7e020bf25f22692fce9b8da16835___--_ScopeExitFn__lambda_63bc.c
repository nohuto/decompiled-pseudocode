/*
 * XREFs of wil::details::ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___::_ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___ @ 0x180319A44
 * Callers:
 *     _XamlLauncherState::ShowStartView_::_1_::dtor$1 @ 0x1800E84AB (_XamlLauncherState--ShowStartView_--_1_--dtor$1.c)
 * Callees:
 *     ??$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x180080CEC (--$ShowStartView@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___::_ScopeExitFn__lambda_63bc7e020bf25f22692fce9b8da16835___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ShowStartView<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
