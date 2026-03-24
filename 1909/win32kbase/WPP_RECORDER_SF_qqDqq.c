/*
 * XREFs of WPP_RECORDER_SF_qqDqq @ 0x1C010F7B0
 * Callers:
 *     EtwTraceUIPIEventHookError @ 0x1C010C490 (EtwTraceUIPIEventHookError.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqDqq @ 0x1C010F7B0
 * Reason: Hex-Rays returned no pseudocode for 0x1C010F7B0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C010F7B0: mov     r11, rsp
 * 00000001C010F7B3: mov     [r11+8], rbx
 * 00000001C010F7B7: mov     [r11+10h], rbp
 * 00000001C010F7BB: push    rdi
 * 00000001C010F7BC: sub     rsp, 80h
 * 00000001C010F7C3: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C010F7CA: mov     ebp, 0Ch
 * 00000001C010F7CF: mov     rbx, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C010F7D6: test    dword ptr [rcx+2Ch], 20000h
 * 00000001C010F7DD: lea     edi, [rbp-4]
 * 00000001C010F7E0: jz      short loc_1C010F84C
 * 00000001C010F7E2: cmp     byte ptr [rcx+29h], 4
 * 00000001C010F7E6: jb      short loc_1C010F84C
 * 00000001C010F7E8: and     qword ptr [r11-18h], 0
 * 00000001C010F7ED: lea     rdx, [r11+50h]
 * 00000001C010F7F1: mov     rax, cs:pfnWppTraceMessage
 * 00000001C010F7F8: lea     r8, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C010F7FF: mov     rcx, [rcx+18h]
 * 00000001C010F803: mov     [r11-20h], rdi
 * 00000001C010F807: mov     [r11-28h], rdx
 * 00000001C010F80B: lea     rdx, [r11+48h]
 * 00000001C010F80F: mov     [r11-30h], rdi
 * 00000001C010F813: mov     [r11-38h], rdx
 * 00000001C010F817: lea     rdx, [r11+40h]
 * 00000001C010F81B: mov     qword ptr [r11-40h], 4
 * 00000001C010F823: mov     [r11-48h], rdx
 * 00000001C010F827: lea     rdx, [r11+38h]
 * 00000001C010F82B: mov     [r11-50h], rdi
 * 00000001C010F82F: mov     [r11-58h], rdx
 * 00000001C010F833: lea     rdx, [r11+30h]
 * 00000001C010F837: mov     [r11-60h], rdi
 * 00000001C010F83B: mov     [r11-68h], rdx
 * 00000001C010F83F: lea     edx, [rbp+1Fh]
 * 00000001C010F842: movzx   r9d, bp
 * 00000001C010F846: call    cs:__guard_dispatch_icall_fptr
 * 00000001C010F84C: and     [rsp+88h+var_10], 0
 * 00000001C010F852: lea     rax, [rsp+88h+arg_48]
 * 00000001C010F85A: mov     [rsp+88h+var_18], rdi
 * 00000001C010F85F: lea     r9, WPP_419062ec1cc132b1a1010c6c61a6dd0d_Traceguids
 * 00000001C010F866: mov     [rsp+88h+var_20], rax
 * 00000001C010F86B: mov     edx, 4
 * 00000001C010F870: mov     [rsp+88h+var_28], rdi
 * 00000001C010F875: lea     rax, [rsp+88h+arg_40]
 * 00000001C010F87D: mov     [rsp+88h+var_30], rax
 * 00000001C010F882: mov     rcx, rbx
 * 00000001C010F885: mov     [rsp+88h+var_38], 4
 * 00000001C010F88E: lea     rax, [rsp+88h+arg_38]
 * 00000001C010F896: mov     [rsp+88h+var_40], rax
 * 00000001C010F89B: lea     r8d, [rdx+0Eh]
 * 00000001C010F89F: mov     [rsp+88h+var_48], rdi
 * 00000001C010F8A4: lea     rax, [rsp+88h+arg_30]
 * 00000001C010F8AC: mov     [rsp+88h+var_50], rax
 * 00000001C010F8B1: lea     rax, [rsp+88h+arg_28]
 * 00000001C010F8B9: mov     [rsp+88h+var_58], rdi
 * 00000001C010F8BE: mov     [rsp+88h+var_60], rax
 * 00000001C010F8C3: mov     [rsp+88h+var_68], bp
 * 00000001C010F8C8: call    cs:__imp_WppAutoLogTrace
 * 00000001C010F8CF: nop     dword ptr [rax+rax+00h]
 * 00000001C010F8D4: lea     r11, [rsp+88h+var_8]
 * 00000001C010F8DC: mov     rbx, [r11+10h]
 * 00000001C010F8E0: mov     rbp, [r11+18h]
 * 00000001C010F8E4: mov     rsp, r11
 * 00000001C010F8E7: pop     rdi
 * 00000001C010F8E8: retn
 */
