/*
 * XREFs of ?CoreMsgSendMessage@InputExtensibilityCallout@@QEBAJW4_MIT_ENDPOINT@@PEBXI@Z @ 0x1C0036514
 * Callers:
 *     ApiSetEditionHandleAndPostKeyEvent @ 0x1C003637C (ApiSetEditionHandleAndPostKeyEvent.c)
 *     SendPositionChanged @ 0x1C0037DB0 (SendPositionChanged.c)
 *     SendMessageTo @ 0x1C0038AE0 (SendMessageTo.c)
 *     SendAppClipChanged @ 0x1C0038B20 (SendAppClipChanged.c)
 *     ?Broadcast@InputConfig@@SAXXZ @ 0x1C003C578 (-Broadcast@InputConfig@@SAXXZ.c)
 *     ?ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z @ 0x1C006EB98 (-ProcessMouseButton@CMouseProcessor@@AEAAXAEBVCButtonEvent@1@@Z.c)
 *     _lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_::_lambda_invoker_cdecl_ @ 0x1C007C040 (_lambda_fdb4fbfabcbae4b7f8e3309af96f3b1a_--_lambda_invoker_cdecl_.c)
 *     ?SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z @ 0x1C007C090 (-SendNewIdentityCreated@CDeviceIdentity@@AEAAXPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z @ 0x1C00887D8 (-CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor@@IEAAXKUtagPOINT@@_KIK@Z.c)
 *     SendVisibilityChanged @ 0x1C008C050 (SendVisibilityChanged.c)
 *     RIMOnPowerNotification @ 0x1C00A41C0 (RIMOnPowerNotification.c)
 *     ?rimInvalidateInputs@@YAXPEAURIMDEV@@@Z @ 0x1C01212DC (-rimInvalidateInputs@@YAXPEAURIMDEV@@@Z.c)
 *     ?ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z @ 0x1C0138920 (-ForwardInputToManipulationThread@CTouchProcessor@@QEAAXPEBUCPointerInputFrame@@@Z.c)
 *     ?ForwardInputToISM@CKeyboardProcessor@@SAXHHEGGGPEAX@Z @ 0x1C014C2F0 (-ForwardInputToISM@CKeyboardProcessor@@SAXHHEGGGPEAX@Z.c)
 *     SendOrientationChanged @ 0x1C0151550 (SendOrientationChanged.c)
 *     SendShellClipChanged @ 0x1C01515A0 (SendShellClipChanged.c)
 *     SendSuppressionStateChanged @ 0x1C0151680 (SendSuppressionStateChanged.c)
 *     ?SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z @ 0x1C01596B4 (-SendWheelInputToMT@CMouseProcessor@@AEAAXAEBVCInputDest@@AEBVCWheelEvent@1@I@Z.c)
 * Callees:
 *     ?_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z @ 0x1C00365D4 (-_CanSendMessageToDestinationInternal@InputExtensibilityCallout@@AEBA_NW4_MIT_ENDPOINT@@@Z.c)
 *     CoreMsgSend @ 0x1C0036690 (CoreMsgSend.c)
 */

__int64 __fastcall InputExtensibilityCallout::CoreMsgSendMessage(__int64 a1, int a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbp
  void *v4; // rdi

  v2 = *(_QWORD *)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  v3 = a2;
  v4 = 0LL;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v2 + 24, 0LL);
  if ( (unsigned __int8)InputExtensibilityCallout::_CanSendMessageToDestinationInternal(v2, (unsigned int)v3) )
    v4 = *(void **)(v2 + 40 * v3 + 48);
  ExReleasePushLockSharedEx(v2 + 24, 0LL);
  KeLeaveCriticalRegion();
  if ( v4 )
    return CoreMsgSend(v4);
  else
    return 2147946717LL;
}
