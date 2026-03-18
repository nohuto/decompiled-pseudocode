/*
 * XREFs of ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C00A7EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x1C00A7F80 (-HandleMITTermination@CMouseProcessor@@AEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::MasterInputThreadDeactivated(CMouseProcessor *this)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  CMouseProcessor::HandleMITTermination(this);
  *((_DWORD *)this + 3) = 1;
}
