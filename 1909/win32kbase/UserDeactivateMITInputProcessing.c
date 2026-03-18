/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C009CC50
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C00322E8 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C0110FF0 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C002D584 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0034220 (HMValidateHandleNoSecure.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0057A60 (RawInputManagerObjectResolveHandle.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C00938E4 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ApiSetEditionDeactivateMitInput @ 0x1C009CD8C (ApiSetEditionDeactivateMitInput.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C009CE14 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C00A3D20 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00A439C (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     RIMFreePointerDevice @ 0x1C013CD28 (RIMFreePointerDevice.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserDeactivateMITInputProcessing(CInputThread *a1)
{
  CInputThread *v1; // rsi
  unsigned int CurrentThreadId; // eax
  int v3; // ebx
  unsigned int v4; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 (__fastcall **v8)(); // rbx
  InputExtensibilityCallout *v9; // rcx
  __int64 v10; // rax
  PVOID v11; // [rsp+50h] [rbp+8h] BYREF

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    a1 = (CInputThread *)WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        18,
        (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
  CInputThread::DeactivateInputProcessing(a1);
  v1 = gpInputThread;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v1, 0LL);
  CurrentThreadId = (unsigned int)PsGetCurrentThreadId();
  v3 = *((_DWORD *)v1 + 10);
  v4 = CurrentThreadId;
  ExReleasePushLockSharedEx(v1, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 != v3 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v5, v7);
  v8 = s_rgSensorMap;
  do
  {
    CBaseInput::HandleInputThreadStateChange(v8[3], 1LL);
    v8 += 6;
  }
  while ( v8 != (__int64 (__fastcall **)())&gTouchPadMonitor );
  CInpLockGuard::LeaveGuardOnThreadTermination((CTouchProcessor *)((char *)gpTouchProcessor + 48));
  ApiSetEditionDeactivateMitInput();
  if ( TouchExtensibility::ghInjectionDevice )
  {
    if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, &v11) >= 0 )
    {
      v10 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
      if ( v10 )
      {
        if ( *(_QWORD *)(v10 + 480) )
          RIMFreePointerDevice(v11);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v9 = gpInputExtensibilityCallout;
  *(_QWORD *)gpInputExtensibilityCallout = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v9);
  CSpatialProcessor::_spfnInputHitTestCallback = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        5,
        2,
        19,
        (__int64)&WPP_a393226eceb03505251cff90d9ef5243_Traceguids);
  }
}
