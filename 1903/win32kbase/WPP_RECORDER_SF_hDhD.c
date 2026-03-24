/*
 * XREFs of WPP_RECORDER_SF_hDhD @ 0x1C0186EC0
 * Callers:
 *     xxxInternalToUnicode @ 0x1C00710D0 (xxxInternalToUnicode.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C0186CA0 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_hDhD @ 0x1C0186EC0
 * Reason: Hex-Rays returned no pseudocode for 0x1C0186EC0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0186EC0: mov     r11, rsp
 * 00000001C0186EC3: mov     [r11+8], rbx
 * 00000001C0186EC7: mov     [r11+10h], rbp
 * 00000001C0186ECB: mov     [r11+18h], rsi
 * 00000001C0186ECF: push    rdi
 * 00000001C0186ED0: sub     rsp, 70h
 * 00000001C0186ED4: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0186EDB: mov     esi, 4
 * 00000001C0186EE0: mov     rdi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C0186EE7: movzx   ebx, r9w
 * 00000001C0186EEB: test    dword ptr [rcx+2Ch], 8000h
 * 00000001C0186EF2: lea     ebp, [rsi-2]
 * 00000001C0186EF5: jz      short loc_1C0186F51
 * 00000001C0186EF7: cmp     [rcx+29h], sil
 * 00000001C0186EFB: jb      short loc_1C0186F51
 * 00000001C0186EFD: and     qword ptr [r11-18h], 0
 * 00000001C0186F02: lea     rdx, [r11+48h]
 * 00000001C0186F06: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0186F0D: lea     r8, WPP_1521667368713990dadd5db48e8e739e_Traceguids
 * 00000001C0186F14: mov     rcx, [rcx+18h]
 * 00000001C0186F18: mov     [r11-20h], rsi
 * 00000001C0186F1C: mov     [r11-28h], rdx
 * 00000001C0186F20: lea     rdx, [r11+40h]
 * 00000001C0186F24: mov     [r11-30h], rbp
 * 00000001C0186F28: mov     [r11-38h], rdx
 * 00000001C0186F2C: lea     rdx, [r11+38h]
 * 00000001C0186F30: mov     [r11-40h], rsi
 * 00000001C0186F34: mov     [r11-48h], rdx
 * 00000001C0186F38: lea     rdx, [r11+30h]
 * 00000001C0186F3C: mov     [r11-50h], rbp
 * 00000001C0186F40: mov     [r11-58h], rdx
 * 00000001C0186F44: lea     edx, [rsi+27h]
 * 00000001C0186F47: movzx   r9d, bx
 * 00000001C0186F4B: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0186F51: and     [rsp+78h+var_10], 0
 * 00000001C0186F57: lea     rax, [rsp+78h+arg_40]
 * 00000001C0186F5F: mov     [rsp+78h+var_18], rsi
 * 00000001C0186F64: lea     r9, WPP_1521667368713990dadd5db48e8e739e_Traceguids
 * 00000001C0186F6B: mov     [rsp+78h+var_20], rax
 * 00000001C0186F70: mov     r8d, 10h
 * 00000001C0186F76: mov     [rsp+78h+var_28], rbp
 * 00000001C0186F7B: lea     rax, [rsp+78h+arg_38]
 * 00000001C0186F83: mov     [rsp+78h+var_30], rax
 * 00000001C0186F88: mov     edx, esi
 * 00000001C0186F8A: mov     [rsp+78h+var_38], rsi
 * 00000001C0186F8F: lea     rax, [rsp+78h+arg_30]
 * 00000001C0186F97: mov     [rsp+78h+var_40], rax
 * 00000001C0186F9C: mov     rcx, rdi
 * 00000001C0186F9F: lea     rax, [rsp+78h+arg_28]
 * 00000001C0186FA7: mov     [rsp+78h+var_48], rbp
 * 00000001C0186FAC: mov     [rsp+78h+var_50], rax
 * 00000001C0186FB1: mov     [rsp+78h+var_58], bx
 * 00000001C0186FB6: call    cs:__imp_WppAutoLogTrace
 * 00000001C0186FBD: nop     dword ptr [rax+rax+00h]
 * 00000001C0186FC2: lea     r11, [rsp+78h+var_8]
 * 00000001C0186FC7: mov     rbx, [r11+10h]
 * 00000001C0186FCB: mov     rbp, [r11+18h]
 * 00000001C0186FCF: mov     rsi, [r11+20h]
 * 00000001C0186FD3: mov     rsp, r11
 * 00000001C0186FD6: pop     rdi
 * 00000001C0186FD7: retn
 */
