/*
 * XREFs of wil::details::ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___::_ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___ @ 0x1802FA58C
 * Callers:
 *     _XamlLauncherState::Toggle_::_1_::dtor$0 @ 0x1802FE200 (_XamlLauncherState--Toggle_--_1_--dtor$0.c)
 * Callees:
 *     ??$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802FA270 (--$ToggleCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4In.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___::_ScopeExitFn__lambda_533694300c82342eb515aaf46596886e___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::ToggleCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
