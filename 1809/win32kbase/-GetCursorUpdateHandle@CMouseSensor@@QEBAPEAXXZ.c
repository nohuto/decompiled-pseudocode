/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C007A8A0
 * Callers:
 *     GetCursorUpdateHandle @ 0x1C007A80C (GetCursorUpdateHandle.c)
 * Callees:
 *     ?_CalledOnInputThread@CInputThread@@AEBA_NXZ @ 0x1C0031678 (-_CalledOnInputThread@CInputThread@@AEBA_NXZ.c)
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C007AE84 (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C007BADC (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C0186064 (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this)
{
  CInputThread *v1; // rdi
  bool v3; // bl
  void *SensorHostingProcessHandle; // rbx
  void *DispatcherHandleByName; // rax
  NTSTATUS v6; // eax
  __int64 v7; // rcx
  void *TargetHandle; // [rsp+58h] [rbp+10h] BYREF

  v1 = *(CInputThread **)&WPP_MAIN_CB.AlignmentRequirement;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  v3 = CInputThread::_CalledOnInputThread(v1);
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( !v3 )
    MicrosoftTelemetryAssertTriggeredMsgKM("Expect to be called on Master Input Thread");
  TargetHandle = (void *)-1LL;
  SensorHostingProcessHandle = CBaseInput::GetSensorHostingProcessHandle(this);
  if ( SensorHostingProcessHandle != (void *)-1LL )
  {
    DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName(this, 13LL, 0LL);
    if ( DispatcherHandleByName )
    {
      v6 = ZwDuplicateObject(
             SensorHostingProcessHandle,
             DispatcherHandleByName,
             (HANDLE)0xFFFFFFFFFFFFFFFFLL,
             &TargetHandle,
             0x100000u,
             0,
             2u);
      v7 = (__int64)TargetHandle;
      if ( v6 < 0 )
        v7 = -1LL;
      TargetHandle = (void *)v7;
    }
    ZwClose(SensorHostingProcessHandle);
  }
  return TargetHandle;
}
