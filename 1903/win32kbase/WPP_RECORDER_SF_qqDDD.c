/*
 * XREFs of WPP_RECORDER_SF_qqDDD @ 0x1C00721EC
 * Callers:
 *     EtwTraceUIPIMsgError @ 0x1C0072120 (EtwTraceUIPIMsgError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqDDD @ 0x1C00721EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00721EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00721EC: mov     [rsp+arg_0], rbx
 * 00000001C00721F1: mov     [rsp+arg_8], rbp
 * 00000001C00721F6: mov     [rsp+arg_10], rsi
 * 00000001C00721FB: push    rdi
 * 00000001C00721FC: sub     rsp, 80h
 * 00000001C0072203: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C007220A: mov     edi, 4
 * 00000001C007220F: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0072216: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C007221D: lea     ebp, [rdi+6]
 * 00000001C0072220: lea     esi, [rdi+4]
 * 00000001C0072223: jnz     loc_1C00EEB7E
 * 00000001C0072229: and     [rsp+88h+var_10], 0
 * 00000001C007222F: lea     rax, [rsp+88h+arg_48]
 * 00000001C0072237: mov     [rsp+88h+var_18], rdi
 * 00000001C007223C: lea     r9, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C0072243: mov     [rsp+88h+var_20], rax
 * 00000001C0072248: mov     r8d, 12h
 * 00000001C007224E: mov     [rsp+88h+var_28], rdi
 * 00000001C0072253: lea     rax, [rsp+88h+arg_40]
 * 00000001C007225B: mov     [rsp+88h+var_30], rax
 * 00000001C0072260: mov     edx, edi
 * 00000001C0072262: mov     [rsp+88h+var_38], rdi
 * 00000001C0072267: lea     rax, [rsp+88h+arg_38]
 * 00000001C007226F: mov     [rsp+88h+var_40], rax
 * 00000001C0072274: mov     rcx, rbx
 * 00000001C0072277: mov     [rsp+88h+var_48], rsi
 * 00000001C007227C: lea     rax, [rsp+88h+arg_30]
 * 00000001C0072284: mov     [rsp+88h+var_50], rax
 * 00000001C0072289: lea     rax, [rsp+88h+arg_28]
 * 00000001C0072291: mov     [rsp+88h+var_58], rsi
 * 00000001C0072296: mov     [rsp+88h+var_60], rax
 * 00000001C007229B: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C00722A0: call    cs:__imp_WppAutoLogTrace
 * 00000001C00722A7: nop     dword ptr [rax+rax+00h]
 * 00000001C00722AC: lea     r11, [rsp+88h+var_8]
 * 00000001C00722B4: mov     rbx, [r11+10h]
 * 00000001C00722B8: mov     rbp, [r11+18h]
 * 00000001C00722BC: mov     rsi, [r11+20h]
 * 00000001C00722C0: mov     rsp, r11
 * 00000001C00722C3: pop     rdi
 * 00000001C00722C4: retn
 * 00000001C00EEB7E: cmp     [rcx+29h], dil
 * 00000001C00EEB82: jb      loc_1C0072229
 * 00000001C00EEB88: and     [rsp+88h+var_18], 0
 * 00000001C00EEB8E: lea     rdx, [rsp+88h+arg_48]
 * 00000001C00EEB96: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EEB9D: lea     r8, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C00EEBA4: mov     rcx, [rcx+18h]
 * 00000001C00EEBA8: mov     [rsp+88h+var_20], rdi
 * 00000001C00EEBAD: mov     [rsp+88h+var_28], rdx
 * 00000001C00EEBB2: lea     rdx, [rsp+88h+arg_40]
 * 00000001C00EEBBA: mov     [rsp+88h+var_30], rdi
 * 00000001C00EEBBF: mov     [rsp+88h+var_38], rdx
 * 00000001C00EEBC4: lea     rdx, [rsp+88h+arg_38]
 * 00000001C00EEBCC: mov     [rsp+88h+var_40], rdi
 * 00000001C00EEBD1: mov     [rsp+88h+var_48], rdx
 * 00000001C00EEBD6: lea     rdx, [rsp+88h+arg_30]
 * 00000001C00EEBDE: mov     [rsp+88h+var_50], rsi
 * 00000001C00EEBE3: mov     [rsp+88h+var_58], rdx
 * 00000001C00EEBE8: lea     rdx, [rsp+88h+arg_28]
 * 00000001C00EEBF0: mov     [rsp+88h+var_60], rsi
 * 00000001C00EEBF5: mov     [rsp+88h+var_68], rdx
 * 00000001C00EEBFA: mov     edx, 2Bh ; '+'
 * 00000001C00EEBFF: movzx   r9d, bp
 * 00000001C00EEC03: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EEC09: nop
 * 00000001C00EEC0A: jmp     loc_1C0072229
 */
