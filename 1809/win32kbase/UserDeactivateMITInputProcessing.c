/*
 * XREFs of UserDeactivateMITInputProcessing @ 0x1C0152E34
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1C0099D40 (xxxDestroyThreadInfo.c)
 *     NtMITDeactivateInputProcessing @ 0x1C00ECE50 (NtMITDeactivateInputProcessing.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     HMValidateHandleNoSecure @ 0x1C0031BAC (HMValidateHandleNoSecure.c)
 *     RawInputManagerObjectResolveHandle @ 0x1C0050410 (RawInputManagerObjectResolveHandle.c)
 *     ?HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z @ 0x1C007BD70 (-HandleInputThreadStateChange@CBaseInput@@QEAAXW4InputThreadState@@@Z.c)
 *     ?OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z @ 0x1C007C164 (-OnInputThreadStateChanged@InputExtensibilityCallout@@QEBAXW4InputThreadState@@@Z.c)
 *     ?DeactivateInputProcessing@CInputThread@@QEAA_NXZ @ 0x1C008EAC8 (-DeactivateInputProcessing@CInputThread@@QEAA_NXZ.c)
 *     ?CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ @ 0x1C009213C (-CoreMsgCloseAllDestinations@InputExtensibilityCallout@@AEAAXXZ.c)
 *     ?ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ @ 0x1C00921C0 (-ReleaseMITPnpUserModeCallbackComletionWaiters@InputExtensibilityCallout@@AEAAXXZ.c)
 *     RIMFreePointerDevice @ 0x1C0116B48 (RIMFreePointerDevice.c)
 */

void UserDeactivateMITInputProcessing()
{
  CInputThread *v0; // rcx
  __int64 v1; // rcx
  __int64 (__fastcall **v2)(); // rbx
  __int64 v3; // rax
  __int64 v4; // rdx
  InputExtensibilityCallout *v5; // rbx
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  v0 = (CInputThread *)WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x12u,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
  CInputThread::DeactivateInputProcessing(v0);
  InputExtensibilityCallout::OnInputThreadStateChanged(v1, 1);
  v2 = s_rgSensorMap;
  do
  {
    CBaseInput::HandleInputThreadStateChange((__int64)v2[3], 1);
    v2 += 6;
  }
  while ( v2 != (__int64 (__fastcall **)())&rgDeviceAccelerator );
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x48u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( (int)IsEditionDeactivateMitInputSupported() >= 0 )
    EditionDeactivateMitInput();
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0xFu,
      0x49u,
      (__int64)&WPP_9884f94c8a543f685b7d0a7b65493c4a_Traceguids);
  if ( TouchExtensibility::ghInjectionDevice )
  {
    if ( (int)RawInputManagerObjectResolveHandle((char *)TouchExtensibility::ghInjectionDevice, 3u, 0, (PVOID *)&v6) >= 0 )
    {
      v3 = HMValidateHandleNoSecure((unsigned __int64)TouchExtensibility::hDeviceUser, 19);
      if ( v3 )
      {
        v4 = *(_QWORD *)(v3 + 480);
        if ( v4 )
          RIMFreePointerDevice(v6, v4);
      }
    }
    TouchExtensibility::ghInjectionDevice = 0LL;
  }
  v5 = *(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  InputExtensibilityCallout::ReleaseMITPnpUserModeCallbackComletionWaiters(*(InputExtensibilityCallout **)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  *(_QWORD *)v5 = 0LL;
  InputExtensibilityCallout::CoreMsgCloseAllDestinations(v5);
  CSpatialProcessor::_spfnInputHitTestCallback = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      1u,
      0x13u,
      (__int64)&WPP_6939431c477f301b6cb0525ef545186a_Traceguids);
}
