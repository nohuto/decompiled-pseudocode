/*
 * XREFs of ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00A801C
 * Callers:
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x1C00A7F80 (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     NtMITDisableMouseIntercept @ 0x1C0113DA0 (NtMITDisableMouseIntercept.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CMouseProcessor::MouseInterceptState::Disable(__int64 a1)
{
  CInputThread *v2; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  char v9; // al
  bool v10; // zf
  bool v11; // bl

  RIMLockExclusive(a1);
  v2 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v2 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v2, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  v9 = *(_BYTE *)(a1 + 16);
  v10 = v9 == 0;
  if ( v9 )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v10 = 1;
    *(_DWORD *)(a1 + 20) = 0;
    *(_QWORD *)(a1 + 24) = 0LL;
    *(_DWORD *)(a1 + 32) = 0;
  }
  v11 = v10;
  *(_QWORD *)(a1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v11;
}
