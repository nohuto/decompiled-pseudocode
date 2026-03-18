/*
 * XREFs of ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C0094D50
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C00AA024 (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C0095038 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     SetThreadBasePriority @ 0x1C0095090 (SetThreadBasePriority.c)
 *     ?Init@InputThreadState@CInputThread@@QEAAXXZ @ 0x1C0095138 (-Init@InputThreadState@CInputThread@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::DeclareThreadAsInput(CInputThread *this)
{
  CInputThread *v1; // rbx
  char v2; // di
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  if ( *((_QWORD *)v1 + 3) )
  {
    v2 = 0;
  }
  else
  {
    v2 = 1;
    if ( !CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    CInputThread::InputThreadState::Init((CInputThread *)((char *)v1 + 16));
    SetThreadBasePriority(KeGetCurrentThread());
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
