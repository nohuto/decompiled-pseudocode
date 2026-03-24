/*
 * XREFs of WPP_RECORDER_SF_qDqq @ 0x1C010F694
 * Callers:
 *     EtwTraceUIPIHookError @ 0x1C010C590 (EtwTraceUIPIHookError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qDqq @ 0x1C010F694
 * Reason: Hex-Rays returned no pseudocode for 0x1C010F694
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C010F694: mov     r11, rsp
 * 00000001C010F697: mov     [r11+8], rbx
 * 00000001C010F69B: mov     [r11+10h], rbp
 * 00000001C010F69F: push    rsi
 * 00000001C010F6A0: sub     rsp, 70h
 * 00000001C010F6A4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C010F6AB: mov     ebp, 0Bh
 * 00000001C010F6B0: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C010F6B7: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C010F6BE: lea     esi, [rbp-3]
 * 00000001C010F6C1: jz      short loc_1C010F721
 * 00000001C010F6C3: cmp     byte ptr [rcx+29h], 4
 * 00000001C010F6C7: jb      short loc_1C010F721
 * 00000001C010F6C9: and     qword ptr [r11-18h], 0
 * 00000001C010F6CE: lea     rdx, [r11+48h]
 * 00000001C010F6D2: mov     rax, cs:pfnWppTraceMessage
 * 00000001C010F6D9: lea     r8, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C010F6E0: mov     rcx, [rcx+18h]
 * 00000001C010F6E4: mov     [r11-20h], rsi
 * 00000001C010F6E8: mov     [r11-28h], rdx
 * 00000001C010F6EC: lea     rdx, [r11+40h]
 * 00000001C010F6F0: mov     [r11-30h], rsi
 * 00000001C010F6F4: mov     [r11-38h], rdx
 * 00000001C010F6F8: lea     rdx, [r11+38h]
 * 00000001C010F6FC: mov     qword ptr [r11-40h], 4
 * 00000001C010F704: mov     [r11-48h], rdx
 * 00000001C010F708: lea     rdx, [r11+30h]
 * 00000001C010F70C: mov     [r11-50h], rsi
 * 00000001C010F710: mov     [r11-58h], rdx
 * 00000001C010F714: lea     edx, [rbp+20h]
 * 00000001C010F717: movzx   r9d, bp
 * 00000001C010F71B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C010F721: and     [rsp+78h+var_10], 0
 * 00000001C010F727: lea     rax, [rsp+78h+arg_40]
 * 00000001C010F72F: mov     [rsp+78h+var_18], rsi
 * 00000001C010F734: lea     r9, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C010F73B: mov     [rsp+78h+var_20], rax
 * 00000001C010F740: mov     edx, 4
 * 00000001C010F745: mov     [rsp+78h+var_28], rsi
 * 00000001C010F74A: lea     rax, [rsp+78h+arg_38]
 * 00000001C010F752: mov     [rsp+78h+var_30], rax
 * 00000001C010F757: mov     rcx, rbx
 * 00000001C010F75A: mov     [rsp+78h+var_38], 4
 * 00000001C010F763: lea     rax, [rsp+78h+arg_30]
 * 00000001C010F76B: mov     [rsp+78h+var_40], rax
 * 00000001C010F770: lea     r8d, [rdx+0Eh]
 * 00000001C010F774: lea     rax, [rsp+78h+arg_28]
 * 00000001C010F77C: mov     [rsp+78h+var_48], rsi
 * 00000001C010F781: mov     [rsp+78h+var_50], rax
 * 00000001C010F786: mov     [rsp+78h+var_58], bp
 * 00000001C010F78B: call    cs:__imp_WppAutoLogTrace
 * 00000001C010F792: nop     dword ptr [rax+rax+00h]
 * 00000001C010F797: lea     r11, [rsp+78h+var_8]
 * 00000001C010F79C: mov     rbx, [r11+10h]
 * 00000001C010F7A0: mov     rbp, [r11+18h]
 * 00000001C010F7A4: mov     rsp, r11
 * 00000001C010F7A7: pop     rsi
 * 00000001C010F7A8: retn
 */
