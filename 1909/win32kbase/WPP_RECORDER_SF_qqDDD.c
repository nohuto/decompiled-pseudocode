/*
 * XREFs of WPP_RECORDER_SF_qqDDD @ 0x1C005BD1C
 * Callers:
 *     EtwTraceUIPIMsgError @ 0x1C005BC50 (EtwTraceUIPIMsgError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqDDD @ 0x1C005BD1C
 * Reason: Hex-Rays returned no pseudocode for 0x1C005BD1C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C005BD1C: mov     [rsp+arg_0], rbx
 * 00000001C005BD21: mov     [rsp+arg_8], rbp
 * 00000001C005BD26: mov     [rsp+arg_10], rsi
 * 00000001C005BD2B: push    rdi
 * 00000001C005BD2C: sub     rsp, 80h
 * 00000001C005BD33: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C005BD3A: mov     edi, 4
 * 00000001C005BD3F: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C005BD46: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C005BD4D: lea     ebp, [rdi+6]
 * 00000001C005BD50: lea     esi, [rdi+4]
 * 00000001C005BD53: jnz     loc_1C00DF242
 * 00000001C005BD59: and     [rsp+88h+var_10], 0
 * 00000001C005BD5F: lea     rax, [rsp+88h+arg_48]
 * 00000001C005BD67: mov     [rsp+88h+var_18], rdi
 * 00000001C005BD6C: lea     r9, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C005BD73: mov     [rsp+88h+var_20], rax
 * 00000001C005BD78: mov     r8d, 12h
 * 00000001C005BD7E: mov     [rsp+88h+var_28], rdi
 * 00000001C005BD83: lea     rax, [rsp+88h+arg_40]
 * 00000001C005BD8B: mov     [rsp+88h+var_30], rax
 * 00000001C005BD90: mov     edx, edi
 * 00000001C005BD92: mov     [rsp+88h+var_38], rdi
 * 00000001C005BD97: lea     rax, [rsp+88h+arg_38]
 * 00000001C005BD9F: mov     [rsp+88h+var_40], rax
 * 00000001C005BDA4: mov     rcx, rbx
 * 00000001C005BDA7: mov     [rsp+88h+var_48], rsi
 * 00000001C005BDAC: lea     rax, [rsp+88h+arg_30]
 * 00000001C005BDB4: mov     [rsp+88h+var_50], rax
 * 00000001C005BDB9: lea     rax, [rsp+88h+arg_28]
 * 00000001C005BDC1: mov     [rsp+88h+var_58], rsi
 * 00000001C005BDC6: mov     [rsp+88h+var_60], rax
 * 00000001C005BDCB: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C005BDD0: call    cs:__imp_WppAutoLogTrace
 * 00000001C005BDD7: nop     dword ptr [rax+rax+00h]
 * 00000001C005BDDC: lea     r11, [rsp+88h+var_8]
 * 00000001C005BDE4: mov     rbx, [r11+10h]
 * 00000001C005BDE8: mov     rbp, [r11+18h]
 * 00000001C005BDEC: mov     rsi, [r11+20h]
 * 00000001C005BDF0: mov     rsp, r11
 * 00000001C005BDF3: pop     rdi
 * 00000001C005BDF4: retn
 * 00000001C00DF242: cmp     [rcx+29h], dil
 * 00000001C00DF246: jb      loc_1C005BD59
 * 00000001C00DF24C: and     [rsp+88h+var_18], 0
 * 00000001C00DF252: lea     rdx, [rsp+88h+arg_48]
 * 00000001C00DF25A: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00DF261: lea     r8, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C00DF268: mov     rcx, [rcx+18h]
 * 00000001C00DF26C: mov     [rsp+88h+var_20], rdi
 * 00000001C00DF271: mov     [rsp+88h+var_28], rdx
 * 00000001C00DF276: lea     rdx, [rsp+88h+arg_40]
 * 00000001C00DF27E: mov     [rsp+88h+var_30], rdi
 * 00000001C00DF283: mov     [rsp+88h+var_38], rdx
 * 00000001C00DF288: lea     rdx, [rsp+88h+arg_38]
 * 00000001C00DF290: mov     [rsp+88h+var_40], rdi
 * 00000001C00DF295: mov     [rsp+88h+var_48], rdx
 * 00000001C00DF29A: lea     rdx, [rsp+88h+arg_30]
 * 00000001C00DF2A2: mov     [rsp+88h+var_50], rsi
 * 00000001C00DF2A7: mov     [rsp+88h+var_58], rdx
 * 00000001C00DF2AC: lea     rdx, [rsp+88h+arg_28]
 * 00000001C00DF2B4: mov     [rsp+88h+var_60], rsi
 * 00000001C00DF2B9: mov     [rsp+88h+var_68], rdx
 * 00000001C00DF2BE: mov     edx, 2Bh ; '+'
 * 00000001C00DF2C3: movzx   r9d, bp
 * 00000001C00DF2C7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00DF2CD: nop
 * 00000001C00DF2CE: jmp     loc_1C005BD59
 */
