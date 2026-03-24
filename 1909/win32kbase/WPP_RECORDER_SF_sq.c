/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x1C00375EC
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00AA140 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sq @ 0x1C00375EC
 * Reason: Hex-Rays returned no pseudocode for 0x1C00375EC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00375EC: mov     rax, rsp
 * 00000001C00375EF: mov     [rax+8], rbx
 * 00000001C00375F3: mov     [rax+10h], rsi
 * 00000001C00375F7: mov     [rax+18h], rdi
 * 00000001C00375FB: mov     [rax+20h], r12
 * 00000001C00375FF: push    r13
 * 00000001C0037601: sub     rsp, 50h
 * 00000001C0037605: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003760C: lea     r12, stru_1C01E8A24
 * 00000001C0037613: mov     rsi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C003761A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C003761E: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0037626: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003762D: lea     r13d, [rbx+14h]
 * 00000001C0037631: jnz     loc_1C00D0C0A
 * 00000001C0037637: test    rdi, rdi
 * 00000001C003763A: jz      loc_1C00D0C8D
 * 00000001C0037640: inc     rbx
 * 00000001C0037643: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0037647: jnz     short loc_1C0037640
 * 00000001C0037649: inc     rbx
 * 00000001C003764C: test    rdi, rdi
 * 00000001C003764F: lea     rax, [rsp+58h+arg_30]
 * 00000001C0037657: mov     edx, 4
 * 00000001C003765C: lea     r9, WPP_ab23653d659a3eef467127bc1c313d97_Traceguids
 * 00000001C0037663: cmovz   rdi, r12
 * 00000001C0037667: mov     rcx, rsi
 * 00000001C003766A: and     [rsp+58h+var_10], 0
 * 00000001C0037670: mov     [rsp+58h+var_18], 8
 * 00000001C0037679: mov     [rsp+58h+var_20], rax
 * 00000001C003767E: lea     r8d, [rdx+9]
 * 00000001C0037682: mov     [rsp+58h+var_28], rbx
 * 00000001C0037687: mov     [rsp+58h+var_30], rdi
 * 00000001C003768C: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0037692: call    cs:__imp_WppAutoLogTrace
 * 00000001C0037699: nop     dword ptr [rax+rax+00h]
 * 00000001C003769E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C00376A3: mov     rsi, [rsp+58h+arg_8]
 * 00000001C00376A8: mov     rdi, [rsp+58h+arg_10]
 * 00000001C00376AD: mov     r12, [rsp+58h+arg_18]
 * 00000001C00376B2: add     rsp, 50h
 * 00000001C00376B6: pop     r13
 * 00000001C00376B8: retn
 * 00000001C00D0C0A: cmp     byte ptr [rcx+29h], 4
 * 00000001C00D0C0E: jb      loc_1C0037637
 * 00000001C00D0C14: test    rdi, rdi
 * 00000001C00D0C17: jz      short loc_1C00D0C2A
 * 00000001C00D0C19: mov     rdx, rbx
 * 00000001C00D0C1C: inc     rdx
 * 00000001C00D0C1F: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00D0C23: jnz     short loc_1C00D0C1C
 * 00000001C00D0C25: inc     rdx
 * 00000001C00D0C28: jmp     short loc_1C00D0C2F
 * 00000001C00D0C2A: mov     edx, 5
 * 00000001C00D0C2F: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D0C36: lea     r8, [rsp+58h+arg_30]
 * 00000001C00D0C3E: test    rdi, rdi
 * 00000001C00D0C41: movzx   r9d, r13w
 * 00000001C00D0C45: mov     rcx, rdi
 * 00000001C00D0C48: cmovz   rcx, r12
 * 00000001C00D0C4C: and     [rsp+58h+var_18], 0
 * 00000001C00D0C52: mov     [rsp+58h+var_20], 8
 * 00000001C00D0C5B: mov     [rsp+58h+var_28], r8
 * 00000001C00D0C60: lea     r8, WPP_ab23653d659a3eef467127bc1c313d97_Traceguids
 * 00000001C00D0C67: mov     [rsp+58h+var_30], rdx
 * 00000001C00D0C6C: mov     edx, 2Bh ; '+'
 * 00000001C00D0C71: mov     [rsp+58h+var_38], rcx
 * 00000001C00D0C76: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00D0C7D: mov     rcx, [rcx+18h]
 * 00000001C00D0C81: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D0C87: nop
 * 00000001C00D0C88: jmp     loc_1C0037637
 * 00000001C00D0C8D: mov     ebx, 5
 * 00000001C00D0C92: jmp     loc_1C003764C
 */
