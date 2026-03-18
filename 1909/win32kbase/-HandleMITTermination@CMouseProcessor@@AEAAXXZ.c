/*
 * XREFs of ?HandleMITTermination@CMouseProcessor@@AEAAXXZ @ 0x1C00A7100
 * Callers:
 *     ?MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ @ 0x1C00A7060 (-MasterInputThreadDeactivated@CMouseProcessor@@UEAAXXZ.c)
 * Callees:
 *     ?Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z @ 0x1C00A719C (-Disable@MouseInterceptState@CMouseProcessor@@QEAA_NW4DisableReason@12@@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CMouseProcessor::HandleMITTermination(CMouseProcessor *this)
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
  CMouseProcessor::MouseInterceptState::Disable((char *)this + 3408);
}
