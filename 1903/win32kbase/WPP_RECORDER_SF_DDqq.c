/*
 * XREFs of WPP_RECORDER_SF_DDqq @ 0x1C0072448
 * Callers:
 *     EtwTraceUIPIHandleValidationError @ 0x1C0072394 (EtwTraceUIPIHandleValidationError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_DDqq @ 0x1C0072448
 * Reason: Hex-Rays returned no pseudocode for 0x1C0072448
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0072448: mov     [rsp+arg_0], rbx
 * 00000001C007244D: mov     [rsp+arg_8], rbp
 * 00000001C0072452: mov     [rsp+arg_10], rsi
 * 00000001C0072457: push    rdi
 * 00000001C0072458: sub     rsp, 70h
 * 00000001C007245C: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0072463: mov     edi, 4
 * 00000001C0072468: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C007246F: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C0072476: lea     ebp, [rdi+9]
 * 00000001C0072479: lea     esi, [rdi+4]
 * 00000001C007247C: jnz     loc_1C00EEC48
 * 00000001C0072482: and     [rsp+78h+var_10], 0
 * 00000001C0072488: lea     rax, [rsp+78h+arg_40]
 * 00000001C0072490: mov     [rsp+78h+var_18], rsi
 * 00000001C0072495: lea     r9, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C007249C: mov     [rsp+78h+var_20], rax
 * 00000001C00724A1: mov     r8d, 12h
 * 00000001C00724A7: mov     [rsp+78h+var_28], rsi
 * 00000001C00724AC: lea     rax, [rsp+78h+arg_38]
 * 00000001C00724B4: mov     [rsp+78h+var_30], rax
 * 00000001C00724B9: mov     edx, edi
 * 00000001C00724BB: mov     [rsp+78h+var_38], rdi
 * 00000001C00724C0: lea     rax, [rsp+78h+arg_30]
 * 00000001C00724C8: mov     [rsp+78h+var_40], rax
 * 00000001C00724CD: mov     rcx, rbx
 * 00000001C00724D0: lea     rax, [rsp+78h+arg_28]
 * 00000001C00724D8: mov     [rsp+78h+var_48], rdi
 * 00000001C00724DD: mov     [rsp+78h+var_50], rax
 * 00000001C00724E2: mov     word ptr [rsp+78h+var_58], bp
 * 00000001C00724E7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00724EE: nop     dword ptr [rax+rax+00h]
 * 00000001C00724F3: lea     r11, [rsp+78h+var_8]
 * 00000001C00724F8: mov     rbx, [r11+10h]
 * 00000001C00724FC: mov     rbp, [r11+18h]
 * 00000001C0072500: mov     rsi, [r11+20h]
 * 00000001C0072504: mov     rsp, r11
 * 00000001C0072507: pop     rdi
 * 00000001C0072508: retn
 * 00000001C00EEC48: cmp     [rcx+29h], dil
 * 00000001C00EEC4C: jb      loc_1C0072482
 * 00000001C00EEC52: and     [rsp+78h+var_18], 0
 * 00000001C00EEC58: lea     rdx, [rsp+78h+arg_40]
 * 00000001C00EEC60: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00EEC67: lea     r8, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C00EEC6E: mov     rcx, [rcx+18h]
 * 00000001C00EEC72: mov     [rsp+78h+var_20], rsi
 * 00000001C00EEC77: mov     [rsp+78h+var_28], rdx
 * 00000001C00EEC7C: lea     rdx, [rsp+78h+arg_38]
 * 00000001C00EEC84: mov     [rsp+78h+var_30], rsi
 * 00000001C00EEC89: mov     [rsp+78h+var_38], rdx
 * 00000001C00EEC8E: lea     rdx, [rsp+78h+arg_30]
 * 00000001C00EEC96: mov     [rsp+78h+var_40], rdi
 * 00000001C00EEC9B: mov     [rsp+78h+var_48], rdx
 * 00000001C00EECA0: lea     rdx, [rsp+78h+arg_28]
 * 00000001C00EECA8: mov     [rsp+78h+var_50], rdi
 * 00000001C00EECAD: mov     [rsp+78h+var_58], rdx
 * 00000001C00EECB2: mov     edx, 2Bh ; '+'
 * 00000001C00EECB7: movzx   r9d, bp
 * 00000001C00EECBB: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00EECC1: nop
 * 00000001C00EECC2: jmp     loc_1C0072482
 */
