/*
 * XREFs of ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0094F14
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C009D510 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C0095038 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0095110 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::DeactivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rdi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  char v5; // bl
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  if ( !CInputThread::_CalledOnInputThread(v1) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  v5 = 1;
  if ( (unsigned int)(*((_DWORD *)v1 + 4) - 1) > 1 )
  {
    v5 = 0;
  }
  else
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
    *((_DWORD *)v1 + 4) = 3;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
