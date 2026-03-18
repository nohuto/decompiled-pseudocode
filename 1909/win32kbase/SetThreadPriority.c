/*
 * XREFs of SetThreadPriority @ 0x1C00936B0
 * Callers:
 *     <none>
 * Callees:
 *     RIMLockExclusive @ 0x1C0031380 (RIMLockExclusive.c)
 *     SetThreadBasePriority @ 0x1C0093A60 (SetThreadBasePriority.c)
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0093AE0 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void SetThreadPriority()
{
  CInputThread *v0; // rbx
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // r8

  v0 = gpInputThread;
  RIMLockExclusive((__int64)gpInputThread);
  if ( *((_DWORD *)v0 + 4) == 1 )
  {
    if ( CInputThread::_CalledOnInputThread(v0) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v2, v1, v3);
    SetThreadBasePriority(**((PETHREAD **)v0 + 3));
  }
  *((_QWORD *)v0 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v0, 0LL);
  KeLeaveCriticalRegion();
}
