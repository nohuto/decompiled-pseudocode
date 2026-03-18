/*
 * XREFs of ?ActivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0094E64
 * Callers:
 *     UserActivateMITInputProcessing @ 0x1C009D3C8 (UserActivateMITInputProcessing.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C00320D0 (RIMLockExclusive.c)
 *     ?IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ @ 0x1C0095038 (-IsEmpty@InputThreadState@CInputThread@@QEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

char __fastcall CInputThread::ActivateInputProcessing(CInputThread *this)
{
  CInputThread *v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  int *v5; // rbx
  int v6; // eax
  char v7; // di
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8

  v1 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  v5 = (int *)((char *)v1 + 16);
  v6 = *((_DWORD *)v1 + 4);
  if ( v6 == 2 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v6 = *v5;
  }
  if ( v6 == 3 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v6 = *v5;
  }
  if ( !v6 )
  {
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    v6 = *v5;
  }
  v7 = 1;
  if ( v6 == 1 )
  {
    if ( CInputThread::InputThreadState::IsEmpty((CInputThread *)((char *)v1 + 16)) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, v8, v10);
    *v5 = 2;
  }
  else
  {
    v7 = 0;
  }
  *((_QWORD *)v1 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v1, 0LL);
  KeLeaveCriticalRegion();
  return v7;
}
