/*
 * XREFs of GetCursorUpdateHandle @ 0x1C009ABE0
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C009A980 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C009AC88 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *GetCursorUpdateHandle()
{
  CInputThread *v0; // rsi
  __int64 v1; // rbp
  unsigned int CurrentThreadId; // eax
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8

  v0 = gpInputThread;
  v1 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = *((_DWORD *)v0 + 10);
  v4 = CurrentThreadId;
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 != v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  if ( qword_1C020B018 )
    return CMouseSensor::GetCursorUpdateHandle(qword_1C020B018);
  return (void *)v1;
}
