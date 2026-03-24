/*
 * XREFs of WPP_RECORDER_SF_qdd @ 0x1C014B6F8
 * Callers:
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C014ABC0 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014ADA0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdd @ 0x1C014B6F8
 * Reason: Hex-Rays returned no pseudocode for 0x1C014B6F8
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014B6F8: mov     r11, rsp
 * 00000001C014B6FB: mov     [r11+8], rbx
 * 00000001C014B6FF: mov     [r11+10h], rsi
 * 00000001C014B703: push    rdi
 * 00000001C014B704: sub     rsp, 60h
 * 00000001C014B708: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014B70F: movzx   ebx, r9w
 * 00000001C014B713: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C014B71A: mov     esi, 4
 * 00000001C014B71F: mov     eax, [rcx+2Ch]
 * 00000001C014B722: test    al, 1
 * 00000001C014B724: jz      short loc_1C014B778
 * 00000001C014B726: cmp     [rcx+29h], sil
 * 00000001C014B72A: jb      short loc_1C014B778
 * 00000001C014B72C: and     qword ptr [r11-18h], 0
 * 00000001C014B731: lea     rdx, [r11+40h]
 * 00000001C014B735: mov     rax, cs:pfnWppTraceMessage
 * 00000001C014B73C: lea     r8, WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids
 * 00000001C014B743: mov     rcx, [rcx+18h]
 * 00000001C014B747: mov     [r11-20h], rsi
 * 00000001C014B74B: mov     [r11-28h], rdx
 * 00000001C014B74F: lea     rdx, [r11+38h]
 * 00000001C014B753: mov     [r11-30h], rsi
 * 00000001C014B757: mov     [r11-38h], rdx
 * 00000001C014B75B: lea     rdx, [r11+30h]
 * 00000001C014B75F: mov     qword ptr [r11-40h], 8
 * 00000001C014B767: mov     [r11-48h], rdx
 * 00000001C014B76B: lea     edx, [rsi+27h]
 * 00000001C014B76E: movzx   r9d, bx
 * 00000001C014B772: call    cs:__guard_dispatch_icall_fptr
 * 00000001C014B778: and     [rsp+68h+var_10], 0
 * 00000001C014B77E: lea     rax, [rsp+68h+arg_38]
 * 00000001C014B786: mov     [rsp+68h+var_18], rsi
 * 00000001C014B78B: lea     r9, WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids
 * 00000001C014B792: mov     [rsp+68h+var_20], rax
 * 00000001C014B797: mov     r8d, 1
 * 00000001C014B79D: mov     [rsp+68h+var_28], rsi
 * 00000001C014B7A2: lea     rax, [rsp+68h+arg_30]
 * 00000001C014B7AA: mov     [rsp+68h+var_30], rax
 * 00000001C014B7AF: mov     edx, esi
 * 00000001C014B7B1: lea     rax, [rsp+68h+arg_28]
 * 00000001C014B7B9: mov     [rsp+68h+var_38], 8
 * 00000001C014B7C2: mov     [rsp+68h+var_40], rax
 * 00000001C014B7C7: mov     rcx, rdi
 * 00000001C014B7CA: mov     [rsp+68h+var_48], bx
 * 00000001C014B7CF: call    cs:__imp_WppAutoLogTrace
 * 00000001C014B7D6: nop     dword ptr [rax+rax+00h]
 * 00000001C014B7DB: mov     rbx, [rsp+68h+arg_0]
 * 00000001C014B7E0: mov     rsi, [rsp+68h+arg_8]
 * 00000001C014B7E5: add     rsp, 60h
 * 00000001C014B7E9: pop     rdi
 * 00000001C014B7EA: retn
 */
