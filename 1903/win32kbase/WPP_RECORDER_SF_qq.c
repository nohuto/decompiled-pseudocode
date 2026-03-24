/*
 * XREFs of WPP_RECORDER_SF_qq @ 0x1C00726E8
 * Callers:
 *     zzzDestroyQueue @ 0x1C0035070 (zzzDestroyQueue.c)
 *     rimFindPausedDeviceAndCompleteRead @ 0x1C006CBD8 (rimFindPausedDeviceAndCompleteRead.c)
 *     rimInputApc @ 0x1C006E9D0 (rimInputApc.c)
 *     EtwTraceUIPIInputError @ 0x1C0072050 (EtwTraceUIPIInputError.c)
 *     rimDereferenceDev @ 0x1C00725E0 (rimDereferenceDev.c)
 *     RIMOnPowerNotification @ 0x1C00B40C0 (RIMOnPowerNotification.c)
 *     UserAddBaseWindowHandle @ 0x1C011FA60 (UserAddBaseWindowHandle.c)
 *     UserFindBaseWindowHandle @ 0x1C011FE34 (UserFindBaseWindowHandle.c)
 *     RIMGetPnpActionBitsFromGuid @ 0x1C0150AE0 (RIMGetPnpActionBitsFromGuid.c)
 *     RIMSignalOnPnpNotificationAndWait @ 0x1C0150C60 (RIMSignalOnPnpNotificationAndWait.c)
 *     RIMWaitForPriorPnpWorkToComplete @ 0x1C015158C (RIMWaitForPriorPnpWorkToComplete.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01535B4 (rimProcessDeviceBufferAndStartRead.c)
 *     rimSignalReadComplete @ 0x1C01542AC (rimSignalReadComplete.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qq @ 0x1C00726E8
 * Reason: Hex-Rays returned no pseudocode for 0x1C00726E8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00726E8: mov     [rsp+arg_0], rbx
 * 00000001C00726ED: mov     [rsp+arg_8], rbp
 * 00000001C00726F2: mov     [rsp+arg_10], rsi
 * 00000001C00726F7: push    rdi
 * 00000001C00726F8: push    r14
 * 00000001C00726FA: push    r15
 * 00000001C00726FC: sub     rsp, 50h
 * 00000001C0072700: mov     r14d, r8d
 * 00000001C0072703: mov     sil, dl
 * 00000001C0072706: mov     edi, r8d
 * 00000001C0072709: movzx   ebp, r9w
 * 00000001C007270D: shr     rdi, 10h
 * 00000001C0072711: mov     r15, rcx
 * 00000001C0072714: lea     ebx, [r14-1]
 * 00000001C0072718: mov     r10d, ebx
 * 00000001C007271B: and     ebx, 1Fh
 * 00000001C007271E: shr     r10, 5
 * 00000001C0072722: lea     rax, [rdi+rdi*4]
 * 00000001C0072726: and     r10d, 7FFh
 * 00000001C007272D: mov     edx, ebx
 * 00000001C007272F: mov     ebx, 8
 * 00000001C0072734: lea     r11, [r10+rax*4]
 * 00000001C0072738: mov     r10, cs:WPP_GLOBAL_Control
 * 00000001C007273F: mov     eax, [r10+r11*4+2Ch]
 * 00000001C0072744: bt      eax, edx
 * 00000001C0072747: jb      loc_1C00EECF4
 * 00000001C007274D: and     [rsp+68h+var_20], 0
 * 00000001C0072753: lea     rax, [rsp+68h+arg_30]
 * 00000001C007275B: mov     r9, [rsp+68h+arg_20]
 * 00000001C0072763: mov     r8d, r14d
 * 00000001C0072766: mov     [rsp+68h+var_28], rbx
 * 00000001C007276B: mov     rcx, r15
 * 00000001C007276E: mov     [rsp+68h+var_30], rax
 * 00000001C0072773: lea     rax, [rsp+68h+arg_28]
 * 00000001C007277B: mov     [rsp+68h+var_38], rbx
 * 00000001C0072780: mov     [rsp+68h+var_40], rax
 * 00000001C0072785: movzx   edx, sil
 * 00000001C0072789: mov     word ptr [rsp+68h+var_48], bp
 * 00000001C007278E: call    cs:__imp_WppAutoLogTrace
 * 00000001C0072795: nop     dword ptr [rax+rax+00h]
 * 00000001C007279A: lea     r11, [rsp+68h+var_18]
 * 00000001C007279F: mov     rbx, [r11+20h]
 * 00000001C00727A3: mov     rbp, [r11+28h]
 * 00000001C00727A7: mov     rsi, [r11+30h]
 * 00000001C00727AB: mov     rsp, r11
 * 00000001C00727AE: pop     r15
 * 00000001C00727B0: pop     r14
 * 00000001C00727B2: pop     rdi
 * 00000001C00727B3: retn
 * 00000001C00EECF4: lea     rcx, [rdi+rdi*4]
 * 00000001C00EECF8: add     rcx, rcx
 * 00000001C00EECFB: cmp     [r10+rcx*8+29h], sil
 * 00000001C00EED00: jb      loc_1C007274D
 * 00000001C00EED06: and     [rsp+68h+var_28], 0
 * 00000001C00EED0C: lea     rdx, [rsp+68h+arg_30]
 * 00000001C00EED14: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EED1B: mov     r8, [rsp+68h+arg_20]
 * 00000001C00EED23: mov     rcx, [r10+rcx*8+18h]
 * 00000001C00EED28: mov     [rsp+68h+var_30], rbx
 * 00000001C00EED2D: mov     [rsp+68h+var_38], rdx
 * 00000001C00EED32: lea     rdx, [rsp+68h+arg_28]
 * 00000001C00EED3A: mov     [rsp+68h+var_40], rbx
 * 00000001C00EED3F: mov     [rsp+68h+var_48], rdx
 * 00000001C00EED44: mov     edx, 2Bh ; '+'
 * 00000001C00EED49: movzx   r9d, bp
 * 00000001C00EED4D: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EED53: nop
 * 00000001C00EED54: jmp     loc_1C007274D
 */
