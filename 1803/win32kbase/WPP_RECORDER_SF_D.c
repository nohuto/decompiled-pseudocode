/*
 * XREFs of WPP_RECORDER_SF_d @ 0x1C00E7F18
 * Callers:
 *     ?ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z @ 0x1C0002648 (-ResolveInputSinkToINPUTDEST@CSpatialProcessor@@IEAA_NPEAXKPEAUtagINPUTDEST@@@Z.c)
 *     rimAbSuppressLowerRankActivityForFrame @ 0x1C00E6F8C (rimAbSuppressLowerRankActivityForFrame.c)
 *     RIMAbArbitratePointerDeviceFrame @ 0x1C00E7940 (RIMAbArbitratePointerDeviceFrame.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C00F64B0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     traceFrame @ 0x1C00F8888 (traceFrame.c)
 *     RIMStartPointerDeviceFrame @ 0x1C00F9344 (RIMStartPointerDeviceFrame.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C00FEE14 (rimProcessDeviceBufferAndStartRead.c)
 *     rimApplyPointerDevicePolicies @ 0x1C0100724 (rimApplyPointerDevicePolicies.c)
 *     rimConfidenceBitPolicyUpdateStateAndApply @ 0x1C01009D4 (rimConfidenceBitPolicyUpdateStateAndApply.c)
 *     rimDigitizerActiveBitPolicyUpdateStateAndApply @ 0x1C0100C08 (rimDigitizerActiveBitPolicyUpdateStateAndApply.c)
 *     rimExtractScantime @ 0x1C0102018 (rimExtractScantime.c)
 *     rimNullXYPolicyUpdateStateAndApply @ 0x1C01027F8 (rimNullXYPolicyUpdateStateAndApply.c)
 *     rimProcessPointerDeviceContact @ 0x1C0102F30 (rimProcessPointerDeviceContact.c)
 *     ?CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z @ 0x1C010EE34 (-CommitRimCompleteFrame@CTouchProcessor@@IEAAPEAUCPointerInputFrame@@PEAURIMCOMPLETEFRAME@@_N1@Z.c)
 *     ?PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z @ 0x1C01184C4 (-PopulatePointerInfoNode@CTouchProcessor@@QEAAHPEAUCPointerInputFrame@@PEAUCPointerInfoNode@@K@Z.c)
 *     ?ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z @ 0x1C01196A0 (-ProcessEnterLeave@CTouchProcessor@@IEAAHPEBUCPointerInputFrame@@PEAUCPointerInfoNode@@@Z.c)
 *     ?CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ @ 0x1C0120A58 (-CreateCoreMsgPort@InputExtensibilityCallout@@AEAAJXZ.c)
 *     ?Close@IOCPDispatcher@@QEAAX_N@Z @ 0x1C0121DA0 (-Close@IOCPDispatcher@@QEAAX_N@Z.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0122260 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     ?InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ @ 0x1C0123110 (-InitializeUserModeHandleDuplicate@IOCPDispatcher@@AEAA_NXZ.c)
 *     ?OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ @ 0x1C0123380 (-OnDirectStartDeviceClassNotification@CBaseInput@@AEAAJXZ.c)
 *     ?OnRemoteOpenNotification@CBaseInput@@AEAAJXZ @ 0x1C0123830 (-OnRemoteOpenNotification@CBaseInput@@AEAAJXZ.c)
 *     ?Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z @ 0x1C01245C0 (-Wait@IOCPDispatcher@@QEAAJPEAT_LARGE_INTEGER@@EPEAU_FILE_IO_COMPLETION_INFORMATION@@@Z.c)
 *     ??0CHidInput@@IEAA@XZ @ 0x1C0126C08 (--0CHidInput@@IEAA@XZ.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@@Z @ 0x1C012C0EC (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@@Z.c)
 *     ?InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z @ 0x1C012C92C (-InitRecorderLog@DelayZonePalmRejection@@AEAAXPEAG@Z.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C012CD3C (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z @ 0x1C012D4E0 (-RemoveDelayZoneFromListInternal@DelayZonePalmRejection@@AEAA_NPEAPEAUCPalmRejectZoneInfo@@@Z.c)
 *     UserProcessMITInput @ 0x1C01311BC (UserProcessMITInput.c)
 *     ?InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z @ 0x1C01327C8 (-InitRecorderLog@CBaseProcessor@@IEAAXPEAG@Z.c)
 *     ?ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z @ 0x1C0134680 (-ForceMouseOwner@CMouseProcessor@@QEAAXPEBUtagINPUTDEST@@K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 */

__int64 WPP_RECORDER_SF_d(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned __int16 a4, __int64 a5, ...)
{
  unsigned __int64 v8; // rdi
  int v10; // eax
  int v12; // [rsp+20h] [rbp-38h]
  va_list va; // [rsp+88h] [rbp+30h] BYREF

  va_start(va, a5);
  v8 = (unsigned __int64)a3 >> 16;
  v10 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v8 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v10, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v8 + 1) >= a2 )
    pfnWppTraceMessage(*((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v8), 43LL, a5, a4, va, 4LL, 0LL);
  LOWORD(v12) = a4;
  return WppAutoLogTrace(a1, a2, a3, a5, v12, va);
}
