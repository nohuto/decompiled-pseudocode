/*
 * XREFs of SetThreadPriority @ 0x1C012E9A0
 * Callers:
 *     <none>
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     SetThreadBasePriority @ 0x1C00A0F70 (SetThreadBasePriority.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void SetThreadPriority()
{
  CInputThread *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx

  v0 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  if ( *((_DWORD *)v0 + 4) == 1 )
  {
    if ( CInputThread::_CalledOnInputThread(v0) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1);
    SetThreadBasePriority(**((PETHREAD **)v0 + 3), 16);
  }
  *((_QWORD *)v0 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v0, 0LL);
  KeLeaveCriticalRegion();
}
