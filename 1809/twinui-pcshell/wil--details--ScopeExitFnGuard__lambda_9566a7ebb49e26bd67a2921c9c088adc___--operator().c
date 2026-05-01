/*
 * XREFs of wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator() @ 0x18018C8EC
 * Callers:
 *     wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::_ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___ @ 0x18018C868 (wil--details--ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___--_ScopeExitFnGuard__l.c)
 *     ?InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ @ 0x18018CA10 (-InvokeAppToAppServiceEnticement@RealtimeEnticementManager@Cortana@TwinUI@@AEAAJXZ.c)
 * Callees:
 *     _lambda_9566a7ebb49e26bd67a2921c9c088adc_::operator() @ 0x18018C874 (_lambda_9566a7ebb49e26bd67a2921c9c088adc_--operator().c)
 */

void __fastcall wil::details::ScopeExitFnGuard__lambda_9566a7ebb49e26bd67a2921c9c088adc___::operator()(__int64 a1)
{
  unsigned int v1; // eax
  unsigned int v2; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v4; // [rsp+40h] [rbp+8h]

  v4 = a1;
  try
  {
    if ( *(_BYTE *)(a1 + 9) )
    {
      *(_BYTE *)(a1 + 9) = 0;
      lambda_9566a7ebb49e26bd67a2921c9c088adc_::operator()((_QWORD *)a1);
    }
  }
  catch ( ... )
  {
    LOBYTE(a1) = *(_BYTE *)(v4 + 8);
    if ( (_BYTE)a1 == 2 )
    {
      v1 = wil::ResultFromCaughtException((wil *)a1);
      wil::details::in1diag3::FailFast_Hr(retaddr, 2292LL, (__int64)"wil", (const char *)v1);
      __debugbreak();
    }
    if ( (_BYTE)a1 == 1 )
    {
      v2 = wil::ResultFromCaughtException((wil *)a1);
      wil::details::in1diag3::Log_Hr(retaddr, 2296LL, (__int64)"wil", (const char *)v2);
    }
  }
}
