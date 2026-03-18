/*
 * XREFs of ?GetCursorUpdateHandle@CMouseSensor@@QEBAPEAXXZ @ 0x1C0099848
 * Callers:
 *     GetCursorUpdateHandle @ 0x1C00997A0 (GetCursorUpdateHandle.c)
 * Callees:
 *     ?GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z @ 0x1C005A13C (-GetDispatcherHandleByName@CRIMBase@@IEBAPEAXW4DispatcherHandleName@1@W4HandleAccessMode@1@@Z.c)
 *     ?GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ @ 0x1C0099954 (-GetSensorHostingProcessHandle@CBaseInput@@IEBAPEAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void *__fastcall CMouseSensor::GetCursorUpdateHandle(CMouseSensor *this)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v4; // ebx
  unsigned int v5; // edi
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  void *SensorHostingProcessHandle; // rbx
  void *DispatcherHandleByName; // rax
  NTSTATUS v11; // eax
  __int64 v12; // rcx
  void *TargetHandle; // [rsp+58h] [rbp+10h] BYREF

  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v4 = *((_DWORD *)v1 + 10);
  v5 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v5 != v4 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6, v8);
  TargetHandle = (void *)-1LL;
  SensorHostingProcessHandle = CBaseInput::GetSensorHostingProcessHandle(this);
  if ( SensorHostingProcessHandle != (void *)-1LL )
  {
    DispatcherHandleByName = (void *)CRIMBase::GetDispatcherHandleByName((__int64)this, 13LL, 0LL);
    if ( DispatcherHandleByName )
    {
      v11 = ZwDuplicateObject(
              SensorHostingProcessHandle,
              DispatcherHandleByName,
              (HANDLE)0xFFFFFFFFFFFFFFFFLL,
              &TargetHandle,
              0x100000u,
              0,
              2u);
      v12 = (__int64)TargetHandle;
      if ( v11 < 0 )
        v12 = -1LL;
      TargetHandle = (void *)v12;
    }
    ZwClose(SensorHostingProcessHandle);
  }
  return TargetHandle;
}
