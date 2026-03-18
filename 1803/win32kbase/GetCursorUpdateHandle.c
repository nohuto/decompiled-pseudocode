/*
 * XREFs of GetCursorUpdateHandle @ 0x1C012E30C
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C00B4140 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0039F28 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0131880 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *GetCursorUpdateHandle()
{
  CInputThread *v0; // rdi
  __int64 v1; // rsi
  bool v2; // bl
  __int64 v3; // rdx
  __int64 v4; // rcx

  v0 = gpInputThread;
  v1 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  v2 = CInputThread::_CalledOnInputThread(v0);
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4, v3);
  if ( qword_1C019A5A8 )
    return CMouseSensor::GetCursorUpdateHandle(qword_1C019A5A8);
  return (void *)v1;
}
