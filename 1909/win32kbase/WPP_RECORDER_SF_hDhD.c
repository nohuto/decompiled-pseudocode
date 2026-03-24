/*
 * XREFs of WPP_RECORDER_SF_hDhD @ 0x1C0184CD0
 * Callers:
 *     xxxInternalToUnicode @ 0x1C0074B60 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0184AB0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hDhD @ 0x1C0184CD0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0184CD0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0184CD0: mov     r11, rsp
 * 00000001C0184CD3: mov     [r11+8], rbx
 * 00000001C0184CD7: mov     [r11+10h], rbp
 * 00000001C0184CDB: mov     [r11+18h], rsi
 * 00000001C0184CDF: push    rdi
 * 00000001C0184CE0: sub     rsp, 70h
 * 00000001C0184CE4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0184CEB: mov     esi, 4
 * 00000001C0184CF0: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0184CF7: movzx   ebx, r9w
 * 00000001C0184CFB: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C0184D02: lea     ebp, [rsi-2]
 * 00000001C0184D05: jz      short loc_1C0184D61
 * 00000001C0184D07: cmp     [rcx+29h], sil
 * 00000001C0184D0B: jb      short loc_1C0184D61
 * 00000001C0184D0D: and     qword ptr [r11-18h], 0
 * 00000001C0184D12: lea     rdx, [r11+48h]
 * 00000001C0184D16: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0184D1D: lea     r8, WPP_1521667368713990dadd5db48e8e739e_Traceguids
 * 00000001C0184D24: mov     rcx, [rcx+18h]
 * 00000001C0184D28: mov     [r11-20h], rsi
 * 00000001C0184D2C: mov     [r11-28h], rdx
 * 00000001C0184D30: lea     rdx, [r11+40h]
 * 00000001C0184D34: mov     [r11-30h], rbp
 * 00000001C0184D38: mov     [r11-38h], rdx
 * 00000001C0184D3C: lea     rdx, [r11+38h]
 * 00000001C0184D40: mov     [r11-40h], rsi
 * 00000001C0184D44: mov     [r11-48h], rdx
 * 00000001C0184D48: lea     rdx, [r11+30h]
 * 00000001C0184D4C: mov     [r11-50h], rbp
 * 00000001C0184D50: mov     [r11-58h], rdx
 * 00000001C0184D54: lea     edx, [rsi+27h]
 * 00000001C0184D57: movzx   r9d, bx
 * 00000001C0184D5B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0184D61: and     [rsp+78h+var_10], 0
 * 00000001C0184D67: lea     rax, [rsp+78h+arg_40]
 * 00000001C0184D6F: mov     [rsp+78h+var_18], rsi
 * 00000001C0184D74: lea     r9, WPP_1521667368713990dadd5db48e8e739e_Traceguids
 * 00000001C0184D7B: mov     [rsp+78h+var_20], rax
 * 00000001C0184D80: mov     r8d, 10h
 * 00000001C0184D86: mov     [rsp+78h+var_28], rbp
 * 00000001C0184D8B: lea     rax, [rsp+78h+arg_38]
 * 00000001C0184D93: mov     [rsp+78h+var_30], rax
 * 00000001C0184D98: mov     edx, esi
 * 00000001C0184D9A: mov     [rsp+78h+var_38], rsi
 * 00000001C0184D9F: lea     rax, [rsp+78h+arg_30]
 * 00000001C0184DA7: mov     [rsp+78h+var_40], rax
 * 00000001C0184DAC: mov     rcx, rdi
 * 00000001C0184DAF: lea     rax, [rsp+78h+arg_28]
 * 00000001C0184DB7: mov     [rsp+78h+var_48], rbp
 * 00000001C0184DBC: mov     [rsp+78h+var_50], rax
 * 00000001C0184DC1: mov     [rsp+78h+var_58], bx
 * 00000001C0184DC6: call    cs:__imp_WppAutoLogTrace
 * 00000001C0184DCD: nop     dword ptr [rax+rax+00h]
 * 00000001C0184DD2: lea     r11, [rsp+78h+var_8]
 * 00000001C0184DD7: mov     rbx, [r11+10h]
 * 00000001C0184DDB: mov     rbp, [r11+18h]
 * 00000001C0184DDF: mov     rsi, [r11+20h]
 * 00000001C0184DE3: mov     rsp, r11
 * 00000001C0184DE6: pop     rdi
 * 00000001C0184DE7: retn
 */
