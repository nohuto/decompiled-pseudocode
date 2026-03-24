/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C00378D4
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C00243F0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     xxxCreateThreadInfo @ 0x1C002EBB4 (xxxCreateThreadInfo.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C003403C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     xxxSetProcessInitState @ 0x1C00376C0 (xxxSetProcessInitState.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C003ABE0 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0053400 (RIMDeliverDeviceResetRequest.c)
 *     RIMUnregisterForInput @ 0x1C00566D0 (RIMUnregisterForInput.c)
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C0056FFC (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMReadInput @ 0x1C0057060 (RIMReadInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0058E4C (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     EtwTraceUIPISystemError @ 0x1C005BE00 (EtwTraceUIPISystemError.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C005C370 (rimResetPnpRemovePendingStateBits.c)
 *     RIMCreateHidDesc @ 0x1C005C480 (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C005CC80 (RIMHidGetCaps.c)
 *     RIMAllocateHidDesc @ 0x1C005D02C (RIMAllocateHidDesc.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C00732C0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     RIMDoOnPnpNotification @ 0x1C00A4EFC (RIMDoOnPnpNotification.c)
 *     rimDeviceResetApc @ 0x1C00A6380 (rimDeviceResetApc.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B5084 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B50C8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00B7CB0 (rimFreeAutoRepeatCompleteFrame.c)
 *     _lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::operator() @ 0x1C00BD358 (_lambda_b69e77e0fe9f52d9f607e8c4f2045e39_--operator().c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BD3F8 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C00BD518 (RIMMarkSiblingMouseDevice.c)
 *     UserAddBaseWindowHandle @ 0x1C011D0F0 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C011D2F0 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C011D4C4 (UserFindBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01370C8 (RIMIDERemoveInjectionDevice.c)
 *     RIMAddToActiveDevices @ 0x1C013AF04 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013D458 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C013DE10 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C013EC9C (RIMRemoveFromActiveDevices.c)
 *     RIMFindSiblingMouseDevice @ 0x1C0141150 (RIMFindSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0142008 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C01423CC (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0146468 (RIMIDECreateHIDDesc.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C01492D8 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C014AD00 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 *     rimDispatchCompleteFrame @ 0x1C01509D4 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0151038 (rimProcessAnyQueuedCompleteFrames.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C0169234 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C016F5B8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0173520 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0177040 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0180968 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0181460 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     InitCreateUserCrit @ 0x1C0265AF8 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C00378D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00378D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00378D4: mov     [rsp+arg_0], rbx
 * 00000001C00378D9: mov     [rsp+arg_8], rbp
 * 00000001C00378DE: mov     [rsp+arg_10], rsi
 * 00000001C00378E3: push    rdi
 * 00000001C00378E4: push    r14
 * 00000001C00378E6: push    r15
 * 00000001C00378E8: sub     rsp, 40h
 * 00000001C00378EC: mov     r14d, r8d
 * 00000001C00378EF: mov     sil, dl
 * 00000001C00378F2: mov     edi, r8d
 * 00000001C00378F5: movzx   ebp, r9w
 * 00000001C00378F9: shr     rdi, 10h
 * 00000001C00378FD: mov     r15, rcx
 * 00000001C0037900: lea     ebx, [r14-1]
 * 00000001C0037904: mov     r10d, ebx
 * 00000001C0037907: and     ebx, 1Fh
 * 00000001C003790A: shr     r10, 5
 * 00000001C003790E: lea     rax, [rdi+rdi*4]
 * 00000001C0037912: and     r10d, 7FFh
 * 00000001C0037919: mov     edx, ebx
 * 00000001C003791B: mov     ebx, 8
 * 00000001C0037920: lea     r11, [r10+rax*4]
 * 00000001C0037924: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C003792B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0037930: bt      eax, edx
 * 00000001C0037933: jb      loc_1C00D0D04
 * 00000001C0037939: and     [rsp+58h+var_20], 0
 * 00000001C003793F: lea     rax, [rsp+58h+arg_28]
 * 00000001C0037947: mov     r9, [rsp+58h+arg_20]
 * 00000001C003794F: mov     r8d, r14d
 * 00000001C0037952: mov     [rsp+58h+var_28], rbx
 * 00000001C0037957: mov     rcx, r15
 * 00000001C003795A: mov     [rsp+58h+var_30], rax
 * 00000001C003795F: movzx   edx, sil
 * 00000001C0037963: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C0037968: call    cs:__imp_WppAutoLogTrace
 * 00000001C003796F: nop     dword ptr [rax+rax+00h]
 * 00000001C0037974: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0037979: mov     rbp, [rsp+58h+arg_8]
 * 00000001C003797E: mov     rsi, [rsp+58h+arg_10]
 * 00000001C0037983: add     rsp, 40h
 * 00000001C0037987: pop     r15
 * 00000001C0037989: pop     r14
 * 00000001C003798B: pop     rdi
 * 00000001C003798C: retn
 * 00000001C00D0D04: lea     rcx, [rdi+rdi*4]
 * 00000001C00D0D08: add     rcx, rcx
 * 00000001C00D0D0B: cmp     [r10+rcx*8+29h], sil
 * 00000001C00D0D10: jb      loc_1C0037939
 * 00000001C00D0D16: and     [rsp+58h+var_28], 0
 * 00000001C00D0D1C: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00D0D24: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D0D2B: mov     r8, [rsp+58h+arg_20]
 * 00000001C00D0D33: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00D0D38: mov     [rsp+58h+var_30], rbx
 * 00000001C00D0D3D: mov     [rsp+58h+var_38], rdx
 * 00000001C00D0D42: mov     edx, 2Bh ; '+'
 * 00000001C00D0D47: movzx   r9d, bp
 * 00000001C00D0D4B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D0D51: nop
 * 00000001C00D0D52: jmp     loc_1C0037939
 */
