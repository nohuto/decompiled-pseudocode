/*
 * XREFs of wil::details::ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___::_ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___ @ 0x1802A2400
 * Callers:
 *     _XamlLauncherState::Hide_::_1_::dtor$0 @ 0x1802A2BDA (_XamlLauncherState--Hide_--_1_--dtor$0.c)
 * Callees:
 *     ??$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4InternalState@XamlLauncherState@@AEAW412@@Z @ 0x1802A06E4 (--$HideCortana@AEBW4InternalState@XamlLauncherState@@AEAW412@@StartWindowTelemetry@@SAXAEBW4Inte.c)
 */

BOOLEAN __fastcall wil::details::ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___::_ScopeExitFn__lambda_e82be49316057d1ad7a0ae694d91bd6f___(
        __int64 a1)
{
  BOOLEAN result; // al

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    return StartWindowTelemetry::HideCortana<enum XamlLauncherState::InternalState const &,enum XamlLauncherState::InternalState &>(
             (int *)a1,
             (int *)(*(_QWORD *)(a1 + 8) + 64LL));
  }
  return result;
}
