/*
 * XREFs of WPP_RECORDER_SF_sq @ 0x1C003865C
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00AC440 (xxxInitProcessInfo.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_sq @ 0x1C003865C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003865C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003865C: mov     rax, rsp
 * 00000001C003865F: mov     [rax+8], rbx
 * 00000001C0038663: mov     [rax+10h], rsi
 * 00000001C0038667: mov     [rax+18h], rdi
 * 00000001C003866B: mov     [rax+20h], r12
 * 00000001C003866F: push    r13
 * 00000001C0038671: sub     rsp, 50h
 * 00000001C0038675: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C003867C: lea     r12, stru_1C01EAA14
 * 00000001C0038683: mov     rsi, cs:?gBaseLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gBaseLog
 * 00000001C003868A: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C003868E: mov     rdi, [rsp+58h+arg_28]
 * 00000001C0038696: test    dword ptr [rcx+2Ch], 1000h
 * 00000001C003869D: lea     r13d, [rbx+14h]
 * 00000001C00386A1: jnz     loc_1C00D3A0C
 * 00000001C00386A7: test    rdi, rdi
 * 00000001C00386AA: jz      loc_1C00D3A8F
 * 00000001C00386B0: inc     rbx
 * 00000001C00386B3: cmp     byte ptr [rdi+rbx], 0
 * 00000001C00386B7: jnz     short loc_1C00386B0
 * 00000001C00386B9: inc     rbx
 * 00000001C00386BC: test    rdi, rdi
 * 00000001C00386BF: lea     rax, [rsp+58h+arg_30]
 * 00000001C00386C7: mov     edx, 4
 * 00000001C00386CC: lea     r9, WPP_ab23653d659a3eef467127bc1c313d97_Traceguids
 * 00000001C00386D3: cmovz   rdi, r12
 * 00000001C00386D7: mov     rcx, rsi
 * 00000001C00386DA: and     [rsp+58h+var_10], 0
 * 00000001C00386E0: mov     [rsp+58h+var_18], 8
 * 00000001C00386E9: mov     [rsp+58h+var_20], rax
 * 00000001C00386EE: lea     r8d, [rdx+9]
 * 00000001C00386F2: mov     [rsp+58h+var_28], rbx
 * 00000001C00386F7: mov     [rsp+58h+var_30], rdi
 * 00000001C00386FC: mov     word ptr [rsp+58h+var_38], r13w
 * 00000001C0038702: call    cs:__imp_WppAutoLogTrace
 * 00000001C0038709: nop     dword ptr [rax+rax+00h]
 * 00000001C003870E: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0038713: mov     rsi, [rsp+58h+arg_8]
 * 00000001C0038718: mov     rdi, [rsp+58h+arg_10]
 * 00000001C003871D: mov     r12, [rsp+58h+arg_18]
 * 00000001C0038722: add     rsp, 50h
 * 00000001C0038726: pop     r13
 * 00000001C0038728: retn
 * 00000001C00D3A0C: cmp     byte ptr [rcx+29h], 4
 * 00000001C00D3A10: jb      loc_1C00386A7
 * 00000001C00D3A16: test    rdi, rdi
 * 00000001C00D3A19: jz      short loc_1C00D3A2C
 * 00000001C00D3A1B: mov     rdx, rbx
 * 00000001C00D3A1E: inc     rdx
 * 00000001C00D3A21: cmp     byte ptr [rdi+rdx], 0
 * 00000001C00D3A25: jnz     short loc_1C00D3A1E
 * 00000001C00D3A27: inc     rdx
 * 00000001C00D3A2A: jmp     short loc_1C00D3A31
 * 00000001C00D3A2C: mov     edx, 5
 * 00000001C00D3A31: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00D3A38: lea     r8, [rsp+58h+arg_30]
 * 00000001C00D3A40: test    rdi, rdi
 * 00000001C00D3A43: movzx   r9d, r13w
 * 00000001C00D3A47: mov     rcx, rdi
 * 00000001C00D3A4A: cmovz   rcx, r12
 * 00000001C00D3A4E: and     [rsp+58h+var_18], 0
 * 00000001C00D3A54: mov     [rsp+58h+var_20], 8
 * 00000001C00D3A5D: mov     [rsp+58h+var_28], r8
 * 00000001C00D3A62: lea     r8, WPP_ab23653d659a3eef467127bc1c313d97_Traceguids
 * 00000001C00D3A69: mov     [rsp+58h+var_30], rdx
 * 00000001C00D3A6E: mov     edx, 2Bh ; '+'
 * 00000001C00D3A73: mov     [rsp+58h+var_38], rcx
 * 00000001C00D3A78: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00D3A7F: mov     rcx, [rcx+18h]
 * 00000001C00D3A83: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00D3A89: nop
 * 00000001C00D3A8A: jmp     loc_1C00386A7
 * 00000001C00D3A8F: mov     ebx, 5
 * 00000001C00D3A94: jmp     loc_1C00386BC
 */
