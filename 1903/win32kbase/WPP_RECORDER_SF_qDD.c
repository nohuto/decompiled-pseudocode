/*
 * XREFs of WPP_RECORDER_SF_qdd @ 0x1C014DD68
 * Callers:
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C014D230 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014D410 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qdd @ 0x1C014DD68
 * Reason: Hex-Rays returned no pseudocode for 0x1C014DD68
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C014DD68: mov     r11, rsp
 * 00000001C014DD6B: mov     [r11+8], rbx
 * 00000001C014DD6F: mov     [r11+10h], rsi
 * 00000001C014DD73: push    rdi
 * 00000001C014DD74: sub     rsp, 60h
 * 00000001C014DD78: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C014DD7F: movzx   ebx, r9w
 * 00000001C014DD83: mov     rdi, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C014DD8A: mov     esi, 4
 * 00000001C014DD8F: mov     eax, [rcx+2Ch]
 * 00000001C014DD92: test    al, 1
 * 00000001C014DD94: jz      short loc_1C014DDE8
 * 00000001C014DD96: cmp     [rcx+29h], sil
 * 00000001C014DD9A: jb      short loc_1C014DDE8
 * 00000001C014DD9C: and     qword ptr [r11-18h], 0
 * 00000001C014DDA1: lea     rdx, [r11+40h]
 * 00000001C014DDA5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C014DDAC: lea     r8, WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids
 * 00000001C014DDB3: mov     rcx, [rcx+18h]
 * 00000001C014DDB7: mov     [r11-20h], rsi
 * 00000001C014DDBB: mov     [r11-28h], rdx
 * 00000001C014DDBF: lea     rdx, [r11+38h]
 * 00000001C014DDC3: mov     [r11-30h], rsi
 * 00000001C014DDC7: mov     [r11-38h], rdx
 * 00000001C014DDCB: lea     rdx, [r11+30h]
 * 00000001C014DDCF: mov     qword ptr [r11-40h], 8
 * 00000001C014DDD7: mov     [r11-48h], rdx
 * 00000001C014DDDB: lea     edx, [rsi+27h]
 * 00000001C014DDDE: movzx   r9d, bx
 * 00000001C014DDE2: call    cs:__guard_dispatch_icall_fptr
 * 00000001C014DDE8: and     [rsp+68h+var_10], 0
 * 00000001C014DDEE: lea     rax, [rsp+68h+arg_38]
 * 00000001C014DDF6: mov     [rsp+68h+var_18], rsi
 * 00000001C014DDFB: lea     r9, WPP_6878f1d2c442338edbb7ef469ac48284_Traceguids
 * 00000001C014DE02: mov     [rsp+68h+var_20], rax
 * 00000001C014DE07: mov     r8d, 1
 * 00000001C014DE0D: mov     [rsp+68h+var_28], rsi
 * 00000001C014DE12: lea     rax, [rsp+68h+arg_30]
 * 00000001C014DE1A: mov     [rsp+68h+var_30], rax
 * 00000001C014DE1F: mov     edx, esi
 * 00000001C014DE21: lea     rax, [rsp+68h+arg_28]
 * 00000001C014DE29: mov     [rsp+68h+var_38], 8
 * 00000001C014DE32: mov     [rsp+68h+var_40], rax
 * 00000001C014DE37: mov     rcx, rdi
 * 00000001C014DE3A: mov     [rsp+68h+var_48], bx
 * 00000001C014DE3F: call    cs:__imp_WppAutoLogTrace
 * 00000001C014DE46: nop     dword ptr [rax+rax+00h]
 * 00000001C014DE4B: mov     rbx, [rsp+68h+arg_0]
 * 00000001C014DE50: mov     rsi, [rsp+68h+arg_8]
 * 00000001C014DE55: add     rsp, 60h
 * 00000001C014DE59: pop     rdi
 * 00000001C014DE5A: retn
 */
