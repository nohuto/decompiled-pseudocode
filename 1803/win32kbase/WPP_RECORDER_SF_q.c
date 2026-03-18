/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00739CC
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C001B1F4 (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     UserAddBaseWindowHandle @ 0x1C00BC290 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C00BC470 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C00BC61C (UserFindBaseWindowHandle.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00DD820 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00DD8B8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00E2B70 (RIMIDERemoveInjectionDevice.c)
 *     RIMReadInput @ 0x1C00E42E0 (RIMReadInput.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     RIMAddToActiveDevices @ 0x1C00EA1F8 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C00ECA34 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C00ED7BC (RIMRemoveFromActiveDevices.c)
 *     RIMAllocateHidDesc @ 0x1C00EE340 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1C00EE898 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C00EFC5C (RIMHidGetCaps.c)
 *     RIMIDECreateHIDDesc @ 0x1C00F2D44 (RIMIDECreateHIDDesc.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C00F6430 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     RIMDiscoverDevicesOfInputType @ 0x1C00F9D88 (RIMDiscoverDevicesOfInputType.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C00FB1D0 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00FCB10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C00FD9C4 (rimResetPnpRemovePendingStateBits.c)
 *     rimDispatchCompleteFrame @ 0x1C00FE4B0 (rimDispatchCompleteFrame.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00FE678 (rimFreeAutoRepeatCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C00FEACC (rimProcessAnyQueuedCompleteFrames.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0115808 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011ABA4 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C011E1F8 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0124070 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0124160 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C012CB50 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012D59C (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_q(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8),
      43LL,
      a5,
      a4,
      va,
      8LL,
      0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
