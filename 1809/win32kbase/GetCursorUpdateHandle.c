/*
 * XREFs of GetCursorUpdateHandle @ 0x1C007A80C
 * Callers:
 *     NtMITGetCursorUpdateHandle @ 0x1C007A6A0 (NtMITGetCursorUpdateHandle.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C007A8A0 (-GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void *GetCursorUpdateHandle()
{
  CInputThread *v0; // rdi
  __int64 v1; // rsi
  bool v2; // bl

  v0 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  v1 = -1LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v0, 0LL);
  v2 = CInputThread::_CalledOnInputThread(v0);
  ExReleasePushLockSharedEx(v0, 0LL);
  KeLeaveCriticalRegion();
  if ( !v2 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect to be called on Master Input Thread");
  if ( qword_1C01C3018 )
    return CMouseSensor::GetCursorUpdateHandle(qword_1C01C3018);
  return (void *)v1;
}
