/*
 * XREFs of ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C008EAC8
 * Callers:
 *     UserDeactivateMITInputProcessing @ 0x1C0152E34 (UserDeactivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C008EB60 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::DeactivateInputProcessing(CInputThread *this)
{
  _QWORD *v1; // rdi
  char v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8

  v1 = *(_QWORD **)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
  if ( !CInputThread::_CalledOnInputThread((CInputThread *)v1) )
    MicrosoftTelemetryAssertTriggeredMsgKM("This thread is NOT an input thread");
  v2 = 1;
  if ( (unsigned int)(*((_DWORD *)v1 + 4) - 1) > 1 )
  {
    v2 = 0;
  }
  else
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread::InputThreadState *)(v1 + 2)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3, v5);
    *((_DWORD *)v1 + 4) = 3;
  }
  v1[1] = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v2;
}
