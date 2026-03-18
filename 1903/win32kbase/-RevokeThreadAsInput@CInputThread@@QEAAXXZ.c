/*
 * XREFs of ?RevokeThreadAsInput@CInputThread@@QEAAXXZ @ 0x1C0094DE8
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0033038 (xxxDestroyThreadInfo.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0095110 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     memset @ 0x1C00C1440 (memset.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CInputThread::RevokeThreadAsInput(CInputThread *this)
{
  CInputThread *v1; // rbx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  if ( *((_DWORD *)v1 + 4) != 3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  if ( !CInputThread::_CalledOnInputThread(v1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  memset((char *)v1 + 16, 0, 0x20uLL);
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
}
