/*
 * XREFs of WPP_RECORDER_SF_LLL @ 0x1C0174EC4
 * Callers:
 *     ?GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z @ 0x1C0165E1C (-GenerateMessagesCore@CTouchProcessor@@QEAAHHHHPEBUCPointerInputFrame@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_LLL @ 0x1C0174EC4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0174EC4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0174EC4: mov     r11, rsp
 * 00000001C0174EC7: mov     [r11+8], rbx
 * 00000001C0174ECB: mov     [r11+10h], rsi
 * 00000001C0174ECF: push    rdi
 * 00000001C0174ED0: sub     rsp, 60h
 * 00000001C0174ED4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0174EDB: movzx   ebx, r9w
 * 00000001C0174EDF: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0174EE6: mov     esi, 4
 * 00000001C0174EEB: mov     eax, [rcx+2Ch]
 * 00000001C0174EEE: test    al, 40h
 * 00000001C0174EF0: jz      short loc_1C0174F40
 * 00000001C0174EF2: cmp     byte ptr [rcx+29h], 5
 * 00000001C0174EF6: jb      short loc_1C0174F40
 * 00000001C0174EF8: and     qword ptr [r11-18h], 0
 * 00000001C0174EFD: lea     rdx, [r11+40h]
 * 00000001C0174F01: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0174F08: lea     r8, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174F0F: mov     rcx, [rcx+18h]
 * 00000001C0174F13: mov     [r11-20h], rsi
 * 00000001C0174F17: mov     [r11-28h], rdx
 * 00000001C0174F1B: lea     rdx, [r11+38h]
 * 00000001C0174F1F: mov     [r11-30h], rsi
 * 00000001C0174F23: mov     [r11-38h], rdx
 * 00000001C0174F27: lea     rdx, [r11+30h]
 * 00000001C0174F2B: mov     [r11-40h], rsi
 * 00000001C0174F2F: mov     [r11-48h], rdx
 * 00000001C0174F33: lea     edx, [rsi+27h]
 * 00000001C0174F36: movzx   r9d, bx
 * 00000001C0174F3A: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0174F40: and     [rsp+68h+var_10], 0
 * 00000001C0174F46: lea     rax, [rsp+68h+arg_38]
 * 00000001C0174F4E: mov     [rsp+68h+var_18], rsi
 * 00000001C0174F53: lea     r9, WPP_dde6ae6ba4d53e169de0efe5dbb74602_Traceguids
 * 00000001C0174F5A: mov     [rsp+68h+var_20], rax
 * 00000001C0174F5F: mov     edx, 5
 * 00000001C0174F64: mov     [rsp+68h+var_28], rsi
 * 00000001C0174F69: lea     rax, [rsp+68h+arg_30]
 * 00000001C0174F71: mov     [rsp+68h+var_30], rax
 * 00000001C0174F76: mov     rcx, rdi
 * 00000001C0174F79: lea     rax, [rsp+68h+arg_28]
 * 00000001C0174F81: mov     [rsp+68h+var_38], rsi
 * 00000001C0174F86: mov     [rsp+68h+var_40], rax
 * 00000001C0174F8B: lea     r8d, [rdx+2]
 * 00000001C0174F8F: mov     [rsp+68h+var_48], bx
 * 00000001C0174F94: call    cs:__imp_WppAutoLogTrace
 * 00000001C0174F9B: nop     dword ptr [rax+rax+00h]
 * 00000001C0174FA0: mov     rbx, [rsp+68h+arg_0]
 * 00000001C0174FA5: mov     rsi, [rsp+68h+arg_8]
 * 00000001C0174FAA: add     rsp, 60h
 * 00000001C0174FAE: pop     rdi
 * 00000001C0174FAF: retn
 */
