/*
 * XREFs of ?PerformMarashlingCheck@MouseInterceptState@CMouseProcessor@@AEBA?AW4InterceptMarshalCheck@12@XZ @ 0x1C0191FE8
 * Callers:
 *     ?CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA?AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_MouseInterceptorData@@PEAU_MouseProcessorData@@@Z @ 0x1C0190448 (-CallInterceptor@MouseInterceptState@CMouseProcessor@@QEAA-AW4_MOUSE_INTERCEPTION_RESULT@@PEBU_M.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CMouseProcessor::MouseInterceptState::PerformMarashlingCheck(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int CurrentThreadId; // eax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rcx
  int v11; // eax

  if ( !*(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v8 = CurrentThreadId;
  if ( CurrentThreadId != *(_DWORD *)(a1 + 36) && CurrentThreadId != *(_DWORD *)(a1 + 32) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v9 = *(unsigned int *)(a1 + 32);
  if ( v8 == (_DWORD)v9 )
    return 1LL;
  v11 = *(_DWORD *)(a1 + 36);
  if ( v8 != v11 )
    return 2LL;
  if ( (_DWORD)v9 == v11 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v5, v7);
  return 0LL;
}
