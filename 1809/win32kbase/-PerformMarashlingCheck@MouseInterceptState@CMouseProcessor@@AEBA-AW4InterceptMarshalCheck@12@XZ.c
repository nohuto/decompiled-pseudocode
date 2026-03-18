/*
 * XREFs of ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C0158818
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0157720 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadId; // eax
  unsigned int v5; // edi
  int v6; // ecx
  int v8; // eax

  if ( !*(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v5 = CurrentThreadId;
  if ( CurrentThreadId != *(_DWORD *)(a1 + 36) && CurrentThreadId != *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredMsgKM("Why we are receiving intercept call-out request on thread that is neither MIT no DT?");
  v6 = *(_DWORD *)(a1 + 32);
  if ( v5 == v6 )
    return 1LL;
  v8 = *(_DWORD *)(a1 + 36);
  if ( v5 != v8 )
    return 2LL;
  if ( v6 == v8 )
    MicrosoftTelemetryAssertTriggeredMsgKM("If we got here, we expect for intercept thread (MIT) to be different than processor hosted thread (DT)");
  return 0LL;
}
