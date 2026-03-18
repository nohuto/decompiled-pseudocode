/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C004F724
 * Callers:
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C002F4CC (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     RIMAllocateHidDesc @ 0x1C004DE5C (RIMAllocateHidDesc.c)
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMCreateHidDesc @ 0x1C004F0B8 (RIMCreateHidDesc.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C004F6D4 (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMReadInput @ 0x1C004FC10 (RIMReadInput.c)
 *     RIMHidGetCaps @ 0x1C0051804 (RIMHidGetCaps.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00520F8 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0052780 (RIMDeliverDeviceResetRequest.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0065750 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0089698 (rimResetPnpRemovePendingStateBits.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     rimDeviceResetApc @ 0x1C0092A20 (rimDeviceResetApc.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092ECC (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092F04 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C0095490 (rimFreeAutoRepeatCompleteFrame.c)
 *     _lambda_4a9f2014d50dbcc8c02b38ea7afd9847_::_lambda_invoker_cdecl_ @ 0x1C00AD100 (_lambda_4a9f2014d50dbcc8c02b38ea7afd9847_--_lambda_invoker_cdecl_.c)
 *     UserAddBaseWindowHandle @ 0x1C00F3C10 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C00F3E10 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C00F3FDC (UserFindBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C010E850 (RIMIDERemoveInjectionDevice.c)
 *     RIMAddToActiveDevices @ 0x1C0114DD0 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C011728C (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C0117D70 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C0118B60 (RIMRemoveFromActiveDevices.c)
 *     RIMVirtAllocateHidDesc @ 0x1C011BD08 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C011C038 (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C011D6F4 (RIMIDECreateHIDDesc.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C011FD64 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C01210A0 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 *     rimDispatchCompleteFrame @ 0x1C01266D8 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C012689C (rimProcessAnyQueuedCompleteFrames.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C013CB1C (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01428E0 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0146784 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C014A0E0 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C014FCD8 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C01506C4 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
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
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, _QWORD))WPP_MAIN_CB.Dpc.DeferredContext)(
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
