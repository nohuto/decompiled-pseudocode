/*
 * XREFs of WPP_RECORDER_SF_Dd @ 0x1C011C508
 * Callers:
 *     NtUserReportInertia @ 0x1C0004670 (NtUserReportInertia.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     NtUserInjectDeviceInput @ 0x1C0117180 (NtUserInjectDeviceInput.c)
 *     NtUserInjectGenericHidInput @ 0x1C01175E0 (NtUserInjectGenericHidInput.c)
 *     NtUserInjectKeyboardInput @ 0x1C0117D50 (NtUserInjectKeyboardInput.c)
 *     NtUserInjectMouseInput @ 0x1C01181A0 (NtUserInjectMouseInput.c)
 *     NtUserInjectPointerInput @ 0x1C01185E0 (NtUserInjectPointerInput.c)
 *     rimAbCreateGlobalPenDeadzone @ 0x1C0138764 (rimAbCreateGlobalPenDeadzone.c)
 *     rimAbShouldButtonContactBeSuppressed @ 0x1C013901C (rimAbShouldButtonContactBeSuppressed.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C01468E8 (RIMIDECreatePointerDeviceInfo.c)
 *     RIMIDEFillContactUsageValues @ 0x1C0147454 (RIMIDEFillContactUsageValues.c)
 *     RIMIDEGetTimeStampDelta @ 0x1C0147680 (RIMIDEGetTimeStampDelta.c)
 *     RIMIDEInjectDeviceInput @ 0x1C01479DC (RIMIDEInjectDeviceInput.c)
 *     RIMIDEValidateKeybdInputStruct @ 0x1C0148EAC (RIMIDEValidateKeybdInputStruct.c)
 *     RIMIDEValidateMouseInputStruct @ 0x1C01490F8 (RIMIDEValidateMouseInputStruct.c)
 *     ?BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z @ 0x1C0149D7C (-BuildValueDeviceUsages@@YAHKPEAPEAUtagINPUT_INJECTION_VALUE@@PEAK@Z.c)
 *     rimStorePointersInHoldingFrame @ 0x1C014DDDC (rimStorePointersInHoldingFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C0153BFC (rimDoProcessAnyPointerDeviceInput.c)
 *     rimExtractParallelFrameInfoAndAbandonIncompleteFrame @ 0x1C0154A00 (rimExtractParallelFrameInfoAndAbandonIncompleteFrame.c)
 *     rimFindOrCreateActiveContact @ 0x1C0155950 (rimFindOrCreateActiveContact.c)
 *     rimProcessMissingPointerDeviceContacts @ 0x1C01562F8 (rimProcessMissingPointerDeviceContacts.c)
 *     ?AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z @ 0x1C017FFF0 (-AddDelayZoneToList@DelayZonePalmRejection@@QEAAKPEAXUtagRECT@@01H@Z.c)
 *     ?AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z @ 0x1C0180278 (-AddEdgeZoneToList@DelayZonePalmRejection@@QEAAKPEAXKUtagRECT@@@Z.c)
 *     ?DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ @ 0x1C01804C8 (-DispatchBufferedInputFrames@DelayZonePalmRejection@@QEAAXXZ.c)
 *     ?ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z @ 0x1C0180B58 (-ProcessInput@DelayZonePalmRejection@@QEAA_NPEAX@Z.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0184AB0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     ?ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x1C0189F50 (-ivHandleKeyboardAsyncKeyStatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_Dd @ 0x1C011C508
 * Reason: Hex-Rays returned no pseudocode for 0x1C011C508
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C011C508: mov     [rsp+arg_0], rbx
 * 00000001C011C50D: mov     [rsp+arg_8], rbp
 * 00000001C011C512: mov     [rsp+arg_10], rsi
 * 00000001C011C517: push    rdi
 * 00000001C011C518: push    r14
 * 00000001C011C51A: push    r15
 * 00000001C011C51C: sub     rsp, 50h
 * 00000001C011C520: mov     r14d, r8d
 * 00000001C011C523: mov     sil, dl
 * 00000001C011C526: mov     edi, r8d
 * 00000001C011C529: movzx   ebp, r9w
 * 00000001C011C52D: shr     rdi, 10h
 * 00000001C011C531: mov     r15, rcx
 * 00000001C011C534: lea     ebx, [r14-1]
 * 00000001C011C538: mov     r10d, ebx
 * 00000001C011C53B: and     ebx, 1Fh
 * 00000001C011C53E: shr     r10, 5
 * 00000001C011C542: lea     rax, [rdi+rdi*4]
 * 00000001C011C546: and     r10d, 7FFh
 * 00000001C011C54D: mov     edx, ebx
 * 00000001C011C54F: mov     ebx, 4
 * 00000001C011C554: lea     r11, [r10+rax*4]
 * 00000001C011C558: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C011C55F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C011C564: bt      eax, edx
 * 00000001C011C567: jnb     short loc_1C011C5C2
 * 00000001C011C569: lea     rcx, [rdi+rdi*4]
 * 00000001C011C56D: add     rcx, rcx
 * 00000001C011C570: cmp     [r10+rcx*8+29h], sil
 * 00000001C011C575: jb      short loc_1C011C5C2
 * 00000001C011C577: and     [rsp+68h+var_28], 0
 * 00000001C011C57D: lea     rdx, [rsp+68h+arg_30]
 * 00000001C011C585: mov     rax, cs:pfnWppTraceMessage
 * 00000001C011C58C: mov     r8, [rsp+68h+arg_20]
 * 00000001C011C594: mov     rcx, [r10+rcx*8+18h]
 * 00000001C011C599: mov     [rsp+68h+var_30], rbx
 * 00000001C011C59E: mov     [rsp+68h+var_38], rdx
 * 00000001C011C5A3: lea     rdx, [rsp+68h+arg_28]
 * 00000001C011C5AB: mov     [rsp+68h+var_40], rbx
 * 00000001C011C5B0: mov     [rsp+68h+var_48], rdx
 * 00000001C011C5B5: lea     edx, [rbx+27h]
 * 00000001C011C5B8: movzx   r9d, r9w
 * 00000001C011C5BC: call    cs:__guard_dispatch_icall_fptr
 * 00000001C011C5C2: and     [rsp+68h+var_20], 0
 * 00000001C011C5C8: lea     rax, [rsp+68h+arg_30]
 * 00000001C011C5D0: mov     r9, [rsp+68h+arg_20]
 * 00000001C011C5D8: mov     r8d, r14d
 * 00000001C011C5DB: mov     [rsp+68h+var_28], rbx
 * 00000001C011C5E0: mov     rcx, r15
 * 00000001C011C5E3: mov     [rsp+68h+var_30], rax
 * 00000001C011C5E8: lea     rax, [rsp+68h+arg_28]
 * 00000001C011C5F0: mov     [rsp+68h+var_38], rbx
 * 00000001C011C5F5: mov     [rsp+68h+var_40], rax
 * 00000001C011C5FA: movzx   edx, sil
 * 00000001C011C5FE: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C011C603: call    cs:__imp_WppAutoLogTrace
 * 00000001C011C60A: nop     dword ptr [rax+rax+00h]
 * 00000001C011C60F: lea     r11, [rsp+68h+var_18]
 * 00000001C011C614: mov     rbx, [r11+20h]
 * 00000001C011C618: mov     rbp, [r11+28h]
 * 00000001C011C61C: mov     rsi, [r11+30h]
 * 00000001C011C620: mov     rsp, r11
 * 00000001C011C623: pop     r15
 * 00000001C011C625: pop     r14
 * 00000001C011C627: pop     rdi
 * 00000001C011C628: retn
 */
