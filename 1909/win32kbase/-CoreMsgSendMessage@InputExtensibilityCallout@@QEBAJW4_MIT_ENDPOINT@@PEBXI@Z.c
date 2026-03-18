/*
 * XREFs of ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C004B0F0
 * Callers:
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00494FC (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     SendVisibilityChanged @ 0x1C00498E0 (SendVisibilityChanged.c)
 *     SendAppClipChanged @ 0x1C004A450 (SendAppClipChanged.c)
 *     SendMessageTo @ 0x1C004A490 (SendMessageTo.c)
 *     ?InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z @ 0x1C004A4AC (-InformUMObservers@CMouseProcessor@@AEAAXAEBVCMouseEvent@1@AEBUtagPOINT@@@Z.c)
 *     SendPositionChanged @ 0x1C004A5F0 (SendPositionChanged.c)
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C004AF34 (ApiSetEditionHandleAndPostKeyEvent.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C004B908 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C00519EC (-Broadcast@InputConfig@@SAXXZ.c)
 *     _lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_ @ 0x1C009D120 (_lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_--_lambda_invoker_cdecl_.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C009D170 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMOnPowerNotification @ 0x1C00B0E00 (RIMOnPowerNotification.c)
 *     ?internalDestroy@CActivationObject@@AEAAXXZ @ 0x1C011EB28 (-internalDestroy@CActivationObject@@AEAAXXZ.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C014AF18 (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0164A90 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0PEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017AD00 (-ForwardInputToISM@CKeyboardProcessor@@SAX_NGGGPEAXK0PEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z.c)
 *     ?ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_INFO@@@Z @ 0x1C017ADC0 (-ForwardInputToKeyboardOverrider@CKeyboardProcessor@@SAX_NGGGPEAXKGPEAU_KEYBOARD_VIRTUAL_DEVICE_.c)
 *     SendOrientationChanged @ 0x1C0182420 (SendOrientationChanged.c)
 *     SendShellClipChanged @ 0x1C0182460 (SendShellClipChanged.c)
 *     SendSuppressionStateChanged @ 0x1C0182530 (SendSuppressionStateChanged.c)
 *     ?ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z @ 0x1C018F154 (-ForwardInputToISM@CMouseProcessor@@AEAA_NAEBVCInputDest@@AEBVCMouseEvent@1@AEBUtagPOINT@@II_K@Z.c)
 * Callees:
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C004B1B0 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x1C004B268 (CoreMsgSend.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgSendMessage(__int64 a1, int a2)
{
  InputExtensibilityCallout *v2; // rsi
  __int64 v3; // rbp
  void *v4; // rdi

  v2 = gpInputExtensibilityCallout;
  v3 = a2;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx((char *)v2 + 8, 0LL);
  if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v2, (unsigned int)v3) )
    v4 = (void *)*((_QWORD *)v2 + 5 * v3 + 4);
  ExReleasePushLockSharedEx((char *)v2 + 8, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
    return CoreMsgSend(v4);
  else
    return 2147946717LL;
}
