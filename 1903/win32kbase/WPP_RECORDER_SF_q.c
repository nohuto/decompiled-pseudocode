/*
 * XREFs of WPP_RECORDER_SF_q @ 0x1C0038944
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     ??0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z @ 0x1C0023ED0 (--0CHMRefHwndByHandle@@QEAA@PEAUHWND__@@_N111@Z.c)
 *     xxxCreateThreadInfo @ 0x1C002F9C4 (xxxCreateThreadInfo.c)
 *     ?ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA?AVCInputDest@@AEBU_InputHitTestResult@@K_K@Z @ 0x1C0034D8C (-ResolveDcompHitTestResultToInputDest@CSpatialProcessor@@AEAA-AVCInputDest@@AEBU_InputHitTestRes.c)
 *     xxxSetProcessInitState @ 0x1C0038730 (xxxSetProcessInitState.c)
 *     RIMCreateHidDesc @ 0x1C00513AC (RIMCreateHidDesc.c)
 *     RIMHidGetCaps @ 0x1C005497C (RIMHidGetCaps.c)
 *     RIMDeliverDeviceResetRequest @ 0x1C0067C70 (RIMDeliverDeviceResetRequest.c)
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     RIMDeviceClassNotify @ 0x1C006AB90 (RIMDeviceClassNotify.c)
 *     RIMSignalAllPriorPnpWorkToCompleteWaiters @ 0x1C006AF5C (RIMSignalAllPriorPnpWorkToCompleteWaiters.c)
 *     RIMReadInput @ 0x1C006AFC0 (RIMReadInput.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C006CDAC (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C006DC80 (RIMRegisterForInputWithCallbacks.c)
 *     rimDeviceResetApc @ 0x1C006EE70 (rimDeviceResetApc.c)
 *     ?RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C006F1D0 (-RIMDeviceCallback_Destroyed@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     EtwTraceUIPISystemError @ 0x1C00722D0 (EtwTraceUIPISystemError.c)
 *     rimResetPnpRemovePendingStateBits @ 0x1C0072840 (rimResetPnpRemovePendingStateBits.c)
 *     ?CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C0095FE0 (-CheckAppStarting@@YAXPEAUtagWND@@I_K_J@Z.c)
 *     RIMDoOnPnpNotification @ 0x1C00A5F4C (RIMDoOnPnpNotification.c)
 *     RIMAllocateHidDesc @ 0x1C00AE4FC (RIMAllocateHidDesc.c)
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B7B64 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B7BA8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     rimFreeAutoRepeatCompleteFrame @ 0x1C00BAD10 (rimFreeAutoRepeatCompleteFrame.c)
 *     _lambda_b69e77e0fe9f52d9f607e8c4f2045e39_::operator() @ 0x1C00BF3F8 (_lambda_b69e77e0fe9f52d9f607e8c4f2045e39_--operator().c)
 *     RIMFindSiblingPointerDeviceForMouse @ 0x1C00BF498 (RIMFindSiblingPointerDeviceForMouse.c)
 *     RIMMarkSiblingMouseDevice @ 0x1C00BF5B8 (RIMMarkSiblingMouseDevice.c)
 *     UserAddBaseWindowHandle @ 0x1C011FA60 (UserAddBaseWindowHandle.c)
 *     UserDeleteBaseWindowHandle @ 0x1C011FC60 (UserDeleteBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C011FE34 (UserFindBaseWindowHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C0139738 (RIMIDERemoveInjectionDevice.c)
 *     RIMAddToActiveDevices @ 0x1C013D574 (RIMAddToActiveDevices.c)
 *     RIMGetMaxCountFeatureDetails @ 0x1C013FAC8 (RIMGetMaxCountFeatureDetails.c)
 *     RIMGetPointerInputType @ 0x1C0140480 (RIMGetPointerInputType.c)
 *     RIMRemoveFromActiveDevices @ 0x1C014130C (RIMRemoveFromActiveDevices.c)
 *     RIMFindSiblingMouseDevice @ 0x1C01437C0 (RIMFindSiblingMouseDevice.c)
 *     RIMVirtAllocateHidDesc @ 0x1C0144678 (RIMVirtAllocateHidDesc.c)
 *     RIMVirtCreateHidDesc @ 0x1C0144A3C (RIMVirtCreateHidDesc.c)
 *     RIMIDECreateHIDDesc @ 0x1C0148AD8 (RIMIDECreateHIDDesc.c)
 *     RIMTransferInjectionDeviceDataFifoToDataBuffer @ 0x1C014B948 (RIMTransferInjectionDeviceDataFifoToDataBuffer.c)
 *     ?RIMOnTTMDeviceClose@@YAX_K@Z @ 0x1C014D370 (-RIMOnTTMDeviceClose@@YAX_K@Z.c)
 *     RIMVirtDeviceClassNotify @ 0x1C0150F54 (RIMVirtDeviceClassNotify.c)
 *     rimDispatchCompleteFrame @ 0x1C0153044 (rimDispatchCompleteFrame.c)
 *     rimProcessAnyQueuedCompleteFrames @ 0x1C0153230 (rimProcessAnyQueuedCompleteFrames.c)
 *     ?GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z @ 0x1C016B434 (-GetPointerInfoInternal@CTouchProcessor@@QEAAHPEAUtagTHREADINFO@@GKKPEAUtagPOINTER_INFO@@@Z.c)
 *     ?ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01717A8 (-ReferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C0175710 (-UnreferenceMsgData@CTouchProcessor@@AEAAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z @ 0x1C0179230 (-RIMDeviceCallback_Reset@CBaseInput@@AEAAKPEAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z @ 0x1C0182B58 (-OnDeviceRemoval@DelayZonePalmRejection@@QEAAXPEAX@Z.c)
 *     ?RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0183650 (-RemoveEdgeZonesForDevice@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     InitCreateUserCrit @ 0x1C02691C4 (InitCreateUserCrit.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_q @ 0x1C0038944
 * Reason: Hex-Rays returned no pseudocode for 0x1C0038944
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0038944: mov     [rsp+arg_0], rbx
 * 00000001C0038949: mov     [rsp+arg_8], rbp
 * 00000001C003894E: mov     [rsp+arg_10], rsi
 * 00000001C0038953: push    rdi
 * 00000001C0038954: push    r14
 * 00000001C0038956: push    r15
 * 00000001C0038958: sub     rsp, 40h
 * 00000001C003895C: mov     r14d, r8d
 * 00000001C003895F: mov     sil, dl
 * 00000001C0038962: mov     edi, r8d
 * 00000001C0038965: movzx   ebp, r9w
 * 00000001C0038969: shr     rdi, 10h
 * 00000001C003896D: mov     r15, rcx
 * 00000001C0038970: lea     ebx, [r14-1]
 * 00000001C0038974: mov     r10d, ebx
 * 00000001C0038977: and     ebx, 1Fh
 * 00000001C003897A: shr     r10, 5
 * 00000001C003897E: lea     rax, [rdi+rdi*4]
 * 00000001C0038982: and     r10d, 7FFh
 * 00000001C0038989: mov     edx, ebx
 * 00000001C003898B: mov     ebx, 8
 * 00000001C0038990: lea     r11, [r10+rax*4]
 * 00000001C0038994: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C003899B: mov     eax, [r10+r11*4+2Ch]
 * 00000001C00389A0: bt      eax, edx
 * 00000001C00389A3: jb      loc_1C00D3B06
 * 00000001C00389A9: and     [rsp+58h+var_20], 0
 * 00000001C00389AF: lea     rax, [rsp+58h+arg_28]
 * 00000001C00389B7: mov     r9, [rsp+58h+arg_20]
 * 00000001C00389BF: mov     r8d, r14d
 * 00000001C00389C2: mov     [rsp+58h+var_28], rbx
 * 00000001C00389C7: mov     rcx, r15
 * 00000001C00389CA: mov     [rsp+58h+var_30], rax
 * 00000001C00389CF: movzx   edx, sil
 * 00000001C00389D3: mov     word ptr [rsp+58h+var_38], bp
 * 00000001C00389D8: call    cs:__imp_WppAutoLogTrace
 * 00000001C00389DF: nop     dword ptr [rax+rax+00h]
 * 00000001C00389E4: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00389E9: mov     rbp, [rsp+58h+arg_8]
 * 00000001C00389EE: mov     rsi, [rsp+58h+arg_10]
 * 00000001C00389F3: add     rsp, 40h
 * 00000001C00389F7: pop     r15
 * 00000001C00389F9: pop     r14
 * 00000001C00389FB: pop     rdi
 * 00000001C00389FC: retn
 * 00000001C00D3B06: lea     rcx, [rdi+rdi*4]
 * 00000001C00D3B0A: add     rcx, rcx
 * 00000001C00D3B0D: cmp     [r10+rcx*8+29h], sil
 * 00000001C00D3B12: jb      loc_1C00389A9
 * 00000001C00D3B18: and     [rsp+58h+var_28], 0
 * 00000001C00D3B1E: lea     rdx, [rsp+58h+arg_28]
 * 00000001C00D3B26: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D3B2D: mov     r8, [rsp+58h+arg_20]
 * 00000001C00D3B35: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00D3B3A: mov     [rsp+58h+var_30], rbx
 * 00000001C00D3B3F: mov     [rsp+58h+var_38], rdx
 * 00000001C00D3B44: mov     edx, 2Bh ; '+'
 * 00000001C00D3B49: movzx   r9d, bp
 * 00000001C00D3B4D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D3B53: nop
 * 00000001C00D3B54: jmp     loc_1C00389A9
 */
