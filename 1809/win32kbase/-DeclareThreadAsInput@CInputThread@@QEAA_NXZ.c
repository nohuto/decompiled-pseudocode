/*
 * XREFs of ?DeclareThreadAsInput@CInputThread@@QEAA_NXZ @ 0x1C008E8BC
 * Callers:
 *     UserSetMITInputCallbacks @ 0x1C0083D6C (UserSetMITInputCallbacks.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     SetThreadBasePriority @ 0x1C008E960 (SetThreadBasePriority.c)
 *     ?Init@InputThreadState@CInputThread@@QEAAXXZ @ 0x1C008E9D0 (-Init@InputThreadState@CInputThread@@QEAAXXZ.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C008EB60 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputThread::DeclareThreadAsInput(CInputThread *this)
{
  _QWORD *v1; // rbx
  __int64 v2; // rax
  bool v3; // si
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8

  v1 = *(_QWORD **)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
  v2 = v1[3];
  v3 = v2 == 0;
  if ( !v2 )
  {
    if ( !CInputThread::InputThreadState::IsEmpty((CInputThread::InputThreadState *)(v1 + 2)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
    CInputThread::InputThreadState::Init((CInputThread::InputThreadState *)(v1 + 2));
    SetThreadBasePriority(KeGetCurrentThread());
  }
  v1[1] = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
