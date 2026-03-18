/*
 * XREFs of ?PerformPnpNotification@CBaseInput@@AEAAXPEBU_DevicePnpNotification@@@Z @ 0x1C0069944
 * Callers:
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C00697AC (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0026384 (W32GetThreadWin32Thread.c)
 *     ApiSetEditionDevicePnpNotification @ 0x1C0069A24 (ApiSetEditionDevicePnpNotification.c)
 *     ?ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ @ 0x1C0069B00 (-ExecutingOnSensorHostingThread@CBaseInput@@QEBA_NXZ.c)
 *     ?ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z @ 0x1C009D87C (-ForwardPnpNotificationToISM@CBaseInput@@CAXW4_KnownRIMDeviceKind@@PEBUDEVICEINFO@@QEAXK@Z.c)
 *     GetKnownRIMDeviceKind @ 0x1C009DAC4 (GetKnownRIMDeviceKind.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall CBaseInput::PerformPnpNotification(CBaseInput *this, const struct _DevicePnpNotification *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  CInputThread *v7; // rdi
  int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  unsigned int KnownRIMDeviceKind; // eax
  __int64 v13; // r10

  if ( !W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v4, v6);
  v7 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v7, 0LL);
  v8 = *((_DWORD *)v7 + 4);
  ExReleasePushLockSharedEx(v7, 0LL);
  KeLeaveCriticalRegion();
  if ( v8 == 2 && (unsigned int)(*((_DWORD *)a2 + 5) - 2) <= 1 )
  {
    if ( !CBaseInput::ExecutingOnSensorHostingThread(this) )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v10, v9, v11);
    KnownRIMDeviceKind = GetKnownRIMDeviceKind(*(_QWORD *)a2);
    if ( KnownRIMDeviceKind )
      CBaseInput::ForwardPnpNotificationToISM(KnownRIMDeviceKind, v13, *((_QWORD *)a2 + 1), *((unsigned int *)a2 + 5));
  }
  ApiSetEditionDevicePnpNotification(a2);
}
