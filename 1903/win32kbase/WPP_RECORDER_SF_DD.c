/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C011EE78
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C006DC80 (RIMRegisterForInputWithCallbacks.c)
 *     NtUserInjectDeviceInput @ 0x1C0119AF0 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C0119F50 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C011A6C0 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C011AB10 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C011AF50 (NtUserInjectPointerInput.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C013ADD4 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C013B68C (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0148F58 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0149AC4 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C0149CF0 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C014A04C (RIMIDEInjectDeviceInput.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C014B51C (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C014B768 (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C014C3EC (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     rimStorePointersInHoldingFrame @ 0x1C015044C (rimStorePointersInHoldingFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0155DF4 (rimDoProcessAnyPointerDeviceInput.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0156BF8 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimFindOrCreateActiveContact @ 0x1C0157B48 (rimFindOrCreateActiveContact.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01584F0 (rimProcessMissingPointerDeviceContacts.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C01821E0 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C0182468 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01826B8 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0182D48 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0186CA0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C018C140 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C011EE78
 * Reason: Hex-Rays returned no pseudocode for 0x1C011EE78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C011EE78: mov     [rsp+arg_0], rbx
 * 00000001C011EE7D: mov     [rsp+arg_8], rbp
 * 00000001C011EE82: mov     [rsp+arg_10], rsi
 * 00000001C011EE87: push    rdi
 * 00000001C011EE88: push    r14
 * 00000001C011EE8A: push    r15
 * 00000001C011EE8C: sub     rsp, 50h
 * 00000001C011EE90: mov     r14d, r8d
 * 00000001C011EE93: mov     sil, dl
 * 00000001C011EE96: mov     edi, r8d
 * 00000001C011EE99: movzx   ebp, r9w
 * 00000001C011EE9D: shr     rdi, 10h
 * 00000001C011EEA1: mov     r15, rcx
 * 00000001C011EEA4: lea     ebx, [r14-1]
 * 00000001C011EEA8: mov     r10d, ebx
 * 00000001C011EEAB: and     ebx, 1Fh
 * 00000001C011EEAE: shr     r10, 5
 * 00000001C011EEB2: lea     rax, [rdi+rdi*4]
 * 00000001C011EEB6: and     r10d, 7FFh
 * 00000001C011EEBD: mov     edx, ebx
 * 00000001C011EEBF: mov     ebx, 4
 * 00000001C011EEC4: lea     r11, [r10+rax*4]
 * 00000001C011EEC8: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C011EECF: mov     eax, [r10+r11*4+2Ch]
 * 00000001C011EED4: bt      eax, edx
 * 00000001C011EED7: jnb     short loc_1C011EF32
 * 00000001C011EED9: lea     rcx, [rdi+rdi*4]
 * 00000001C011EEDD: add     rcx, rcx
 * 00000001C011EEE0: cmp     [r10+rcx*8+29h], sil
 * 00000001C011EEE5: jb      short loc_1C011EF32
 * 00000001C011EEE7: and     [rsp+68h+var_28], 0
 * 00000001C011EEED: lea     rdx, [rsp+68h+arg_30]
 * 00000001C011EEF5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C011EEFC: mov     r8, [rsp+68h+arg_20]
 * 00000001C011EF04: mov     rcx, [r10+rcx*8+18h]
 * 00000001C011EF09: mov     [rsp+68h+var_30], rbx
 * 00000001C011EF0E: mov     [rsp+68h+var_38], rdx
 * 00000001C011EF13: lea     rdx, [rsp+68h+arg_28]
 * 00000001C011EF1B: mov     [rsp+68h+var_40], rbx
 * 00000001C011EF20: mov     [rsp+68h+var_48], rdx
 * 00000001C011EF25: lea     edx, [rbx+27h]
 * 00000001C011EF28: movzx   r9d, r9w
 * 00000001C011EF2C: call    cs:__guard_dispatch_icall_fptr
 * 00000001C011EF32: and     [rsp+68h+var_20], 0
 * 00000001C011EF38: lea     rax, [rsp+68h+arg_30]
 * 00000001C011EF40: mov     r9, [rsp+68h+arg_20]
 * 00000001C011EF48: mov     r8d, r14d
 * 00000001C011EF4B: mov     [rsp+68h+var_28], rbx
 * 00000001C011EF50: mov     rcx, r15
 * 00000001C011EF53: mov     [rsp+68h+var_30], rax
 * 00000001C011EF58: lea     rax, [rsp+68h+arg_28]
 * 00000001C011EF60: mov     [rsp+68h+var_38], rbx
 * 00000001C011EF65: mov     [rsp+68h+var_40], rax
 * 00000001C011EF6A: movzx   edx, sil
 * 00000001C011EF6E: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C011EF73: call    cs:__imp_WppAutoLogTrace
 * 00000001C011EF7A: nop     dword ptr [rax+rax+00h]
 * 00000001C011EF7F: lea     r11, [rsp+68h+var_18]
 * 00000001C011EF84: mov     rbx, [r11+20h]
 * 00000001C011EF88: mov     rbp, [r11+28h]
 * 00000001C011EF8C: mov     rsi, [r11+30h]
 * 00000001C011EF90: mov     rsp, r11
 * 00000001C011EF93: pop     r15
 * 00000001C011EF95: pop     r14
 * 00000001C011EF97: pop     rdi
 * 00000001C011EF98: retn
 */
