/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C005C218
 * Callers:
 *     zzzDestroyQueue @ 0x1C0034320 (zzzDestroyQueue.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C0058C78 (rimFindPausedDeviceAndCompleteRead.c)
 *     EtwTraceUIPIInputError @ 0x1C005BB80 (EtwTraceUIPIInputError.c)
 *     rimDereferenceDev @ 0x1C005C110 (rimDereferenceDev.c)
 *     RIMOnPowerNotification @ 0x1C00B0E00 (RIMOnPowerNotification.c)
 *     UserAddBaseWindowHandle @ 0x1C011D0F0 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C011D4C4 (UserFindBaseWindowHandle.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C014E470 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C014E5F0 (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C014EF1C (RIMWaitForPriorPnpWorkToComplete.c)
 *     rimInputApc @ 0x1C0150BC0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C01520B4 (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C005C218
 * Reason: Hex-Rays returned no pseudocode for 0x1C005C218
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005C218: mov     [rsp+arg_0], rbx
 * 00000001C005C21D: mov     [rsp+arg_8], rbp
 * 00000001C005C222: mov     [rsp+arg_10], rsi
 * 00000001C005C227: push    rdi
 * 00000001C005C228: push    r14
 * 00000001C005C22A: push    r15
 * 00000001C005C22C: sub     rsp, 50h
 * 00000001C005C230: mov     r14d, r8d
 * 00000001C005C233: mov     sil, dl
 * 00000001C005C236: mov     edi, r8d
 * 00000001C005C239: movzx   ebp, r9w
 * 00000001C005C23D: shr     rdi, 10h
 * 00000001C005C241: mov     r15, rcx
 * 00000001C005C244: lea     ebx, [r14-1]
 * 00000001C005C248: mov     r10d, ebx
 * 00000001C005C24B: and     ebx, 1Fh
 * 00000001C005C24E: shr     r10, 5
 * 00000001C005C252: lea     rax, [rdi+rdi*4]
 * 00000001C005C256: and     r10d, 7FFh
 * 00000001C005C25D: mov     edx, ebx
 * 00000001C005C25F: mov     ebx, 8
 * 00000001C005C264: lea     r11, [r10+rax*4]
 * 00000001C005C268: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C005C26F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C005C274: bt      eax, edx
 * 00000001C005C277: jb      loc_1C00DF3B8
 * 00000001C005C27D: and     [rsp+68h+var_20], 0
 * 00000001C005C283: lea     rax, [rsp+68h+arg_30]
 * 00000001C005C28B: mov     r9, [rsp+68h+arg_20]
 * 00000001C005C293: mov     r8d, r14d
 * 00000001C005C296: mov     [rsp+68h+var_28], rbx
 * 00000001C005C29B: mov     rcx, r15
 * 00000001C005C29E: mov     [rsp+68h+var_30], rax
 * 00000001C005C2A3: lea     rax, [rsp+68h+arg_28]
 * 00000001C005C2AB: mov     [rsp+68h+var_38], rbx
 * 00000001C005C2B0: mov     [rsp+68h+var_40], rax
 * 00000001C005C2B5: movzx   edx, sil
 * 00000001C005C2B9: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C005C2BE: call    cs:__imp_WppAutoLogTrace
 * 00000001C005C2C5: nop     dword ptr [rax+rax+00h]
 * 00000001C005C2CA: lea     r11, [rsp+68h+var_18]
 * 00000001C005C2CF: mov     rbx, [r11+20h]
 * 00000001C005C2D3: mov     rbp, [r11+28h]
 * 00000001C005C2D7: mov     rsi, [r11+30h]
 * 00000001C005C2DB: mov     rsp, r11
 * 00000001C005C2DE: pop     r15
 * 00000001C005C2E0: pop     r14
 * 00000001C005C2E2: pop     rdi
 * 00000001C005C2E3: retn
 * 00000001C00DF3B8: lea     rcx, [rdi+rdi*4]
 * 00000001C00DF3BC: add     rcx, rcx
 * 00000001C00DF3BF: cmp     [r10+rcx*8+29h], sil
 * 00000001C00DF3C4: jb      loc_1C005C27D
 * 00000001C00DF3CA: and     [rsp+68h+var_28], 0
 * 00000001C00DF3D0: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00DF3D8: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00DF3DF: mov     r8, [rsp+68h+arg_20]
 * 00000001C00DF3E7: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00DF3EC: mov     [rsp+68h+var_30], rbx
 * 00000001C00DF3F1: mov     [rsp+68h+var_38], rdx
 * 00000001C00DF3F6: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00DF3FE: mov     [rsp+68h+var_40], rbx
 * 00000001C00DF403: mov     [rsp+68h+var_48], rdx
 * 00000001C00DF408: mov     edx, 2Bh ; '+'
 * 00000001C00DF40D: movzx   r9d, bp
 * 00000001C00DF411: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00DF417: nop
 * 00000001C00DF418: jmp     loc_1C005C27D
 */
