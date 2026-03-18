/*
 * XREFs of ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C008EA2C
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C007A558 (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0031320 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C008EB60 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall CInputThread::ActivateInputProcessing(CInputThread *this)
{
  __int64 v1; // rdi
  int *v2; // rbx
  int v3; // eax
  bool v4; // si
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v1 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
  RIMLockExclusive(*(__int64 *)&WPP_MAIN_CB.AlignmentRequirement);
  v2 = (int *)(v1 + 16);
  v3 = *(_DWORD *)(v1 + 16);
  if ( v3 == 2 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("We are we trying to activate input processing. Already activated");
    v3 = *v2;
  }
  if ( v3 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM(
      "We are we trying to activate DEACTIVATED input processing. Once Input Thread de-activated we do not allow re-activation");
    v3 = *v2;
  }
  if ( !v3 )
  {
    MicrosoftTelemetryAssertTriggeredMsgKM("We are we trying to activate Input Thread...but we do not have an Input Thread.");
    v3 = *v2;
  }
  v4 = v3 == 1;
  if ( v3 == 1 )
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread::InputThreadState *)(v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
    *v2 = 2;
  }
  *(_QWORD *)(v1 + 8) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v4;
}
