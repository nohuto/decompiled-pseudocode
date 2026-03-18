/*
 * XREFs of ?SetUMInputSuppressionState@CBaseProcessor@@QEAAXW4_MIT_INPUT_SUPPRESSION_STATE@@@Z @ 0x1C018CABC
 * Callers:
 *     SetUMInputSuppressionState @ 0x1C0182704 (SetUMInputSuppressionState.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseProcessor::SetUMInputSuppressionState(__int64 a1, __int32 a2)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v6; // ebx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v6 = *((_DWORD *)v2 + 10);
  v7 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v7 != v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
  _InterlockedExchange((volatile __int32 *)(a1 + 12), a2);
}
