/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C0130F14
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0036210 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C00B3BD0 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     RawInputManagerObjectResolveHandle @ 0x1C000F350 (RawInputManagerObjectResolveHandle.c)
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     RIMLockExclusive @ 0x1C003B4E0 (RIMLockExclusive.c)
 *     HMValidateHandleNoSecure @ 0x1C004DDD4 (HMValidateHandleNoSecure.c)
 *     RIMFreePointerDevice @ 0x1C00EBFB4 (RIMFreePointerDevice.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C0120C14 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C0120F78 (-ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C0122A38 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ @ 0x1C0124A70 (-LeaveGuardOnThreadTermination@CInpLockGuard@@QEAAXXZ.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C0133464 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 */

void UserDeactivateMITInputProcessing()
{
  CInputThread *v0; // rcx
  __int64 v1; // rcx
  __int64 (__fastcall **v2)(); // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  InputExtensibilityCallout *v5; // rdi
  char *v6; // rbx
  HANDLE *v7; // rsi
  HANDLE *v8; // rdi
  __int64 v9; // [rsp+50h] [rbp+8h] BYREF

  v0 = (CInputThread *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x12u,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
  CInputThread::DeactivateInputProcessing(v0);
  InputExtensibilityCallout::OnInputThreadStateChanged(v1, 1);
  v2 = s_rgSensorMap;
  do
  {
    CBaseInput::HandleInputThreadStateChange((__int64)v2[3], 1);
    v2 += 6;
  }
  while ( v2 != (__int64 (__fastcall **)())&gpeqErrorLow );
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x46u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( (int)IsEditionDeactivateMitInputSupported() >= 0 )
    EditionDeactivateMitInput();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x47u,
      (__int64)&WPP_f3eb88e5bec43205b9e9c4f2140a3cca_Traceguids);
  if ( TouchExtensibility::ghInjectionDevice )
  {
    if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, (PVOID *)&v9) >= 0 )
    {
      v3 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 480);
        if ( v4 )
          RIMFreePointerDevice(v9, v4);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v5 = gpInputExtensibilityCallout;
  InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters(gpInputExtensibilityCallout);
  v6 = (char *)v5 + 24;
  *(_QWORD *)v5 = 0LL;
  RIMLockExclusive((__int64)v5 + 24);
  v7 = (HANDLE *)((char *)v5 + 48);
  v8 = (HANDLE *)((char *)v5 + 448);
  while ( v7 != v8 )
  {
    if ( *v7 )
    {
      ZwClose(*v7);
      *v7 = 0LL;
    }
    v7 += 5;
  }
  *((_QWORD *)v6 + 1) = 0LL;
  ExReleasePushLockExclusiveEx(v6, 0LL);
  KeLeaveCriticalRegion();
  CInpLockGuard::LeaveGuardOnThreadTermination((PERESOURCE *)gpTouchProcessor + 9);
  CSpatialProcessor::_spfnInputHitTestCallback = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x13u,
      (__int64)&WPP_035c8a5d0a163117f5a7229eda038445_Traceguids);
}
