/*
 * XREFs of WPP_RECORDER_SF_DDqq @ 0x1C005BF78
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C005BEC4 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqq @ 0x1C005BF78
 * Reason: Hex-Rays returned no pseudocode for 0x1C005BF78
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005BF78: mov     [rsp+arg_0], rbx
 * 00000001C005BF7D: mov     [rsp+arg_8], rbp
 * 00000001C005BF82: mov     [rsp+arg_10], rsi
 * 00000001C005BF87: push    rdi
 * 00000001C005BF88: sub     rsp, 70h
 * 00000001C005BF8C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005BF93: mov     edi, 4
 * 00000001C005BF98: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C005BF9F: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C005BFA6: lea     ebp, [rdi+9]
 * 00000001C005BFA9: lea     esi, [rdi+4]
 * 00000001C005BFAC: jnz     loc_1C00DF30C
 * 00000001C005BFB2: and     [rsp+78h+var_10], 0
 * 00000001C005BFB8: lea     rax, [rsp+78h+arg_40]
 * 00000001C005BFC0: mov     [rsp+78h+var_18], rsi
 * 00000001C005BFC5: lea     r9, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C005BFCC: mov     [rsp+78h+var_20], rax
 * 00000001C005BFD1: mov     r8d, 12h
 * 00000001C005BFD7: mov     [rsp+78h+var_28], rsi
 * 00000001C005BFDC: lea     rax, [rsp+78h+arg_38]
 * 00000001C005BFE4: mov     [rsp+78h+var_30], rax
 * 00000001C005BFE9: mov     edx, edi
 * 00000001C005BFEB: mov     [rsp+78h+var_38], rdi
 * 00000001C005BFF0: lea     rax, [rsp+78h+arg_30]
 * 00000001C005BFF8: mov     [rsp+78h+var_40], rax
 * 00000001C005BFFD: mov     rcx, rbx
 * 00000001C005C000: lea     rax, [rsp+78h+arg_28]
 * 00000001C005C008: mov     [rsp+78h+var_48], rdi
 * 00000001C005C00D: mov     [rsp+78h+var_50], rax
 * 00000001C005C012: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C005C017: call    cs:__imp_WppAutoLogTrace
 * 00000001C005C01E: nop     dword ptr [rax+rax+00h]
 * 00000001C005C023: lea     r11, [rsp+78h+var_8]
 * 00000001C005C028: mov     rbx, [r11+10h]
 * 00000001C005C02C: mov     rbp, [r11+18h]
 * 00000001C005C030: mov     rsi, [r11+20h]
 * 00000001C005C034: mov     rsp, r11
 * 00000001C005C037: pop     rdi
 * 00000001C005C038: retn
 * 00000001C00DF30C: cmp     [rcx+29h], dil
 * 00000001C00DF310: jb      loc_1C005BFB2
 * 00000001C00DF316: and     [rsp+78h+var_18], 0
 * 00000001C00DF31C: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00DF324: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00DF32B: lea     r8, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C00DF332: mov     rcx, [rcx+18h]
 * 00000001C00DF336: mov     [rsp+78h+var_20], rsi
 * 00000001C00DF33B: mov     [rsp+78h+var_28], rdx
 * 00000001C00DF340: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00DF348: mov     [rsp+78h+var_30], rsi
 * 00000001C00DF34D: mov     [rsp+78h+var_38], rdx
 * 00000001C00DF352: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00DF35A: mov     [rsp+78h+var_40], rdi
 * 00000001C00DF35F: mov     [rsp+78h+var_48], rdx
 * 00000001C00DF364: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00DF36C: mov     [rsp+78h+var_50], rdi
 * 00000001C00DF371: mov     [rsp+78h+var_58], rdx
 * 00000001C00DF376: mov     edx, 2Bh ; '+'
 * 00000001C00DF37B: movzx   r9d, bp
 * 00000001C00DF37F: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00DF385: nop
 * 00000001C00DF386: jmp     loc_1C005BFB2
 */
