/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C0012CD4
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000C5B4 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0006C60 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C0012CD4
 * Reason: Hex-Rays returned no pseudocode for 0x1C0012CD4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0012CD4: mov     rax, rsp
 * 00000001C0012CD7: mov     [rax+8], rbx
 * 00000001C0012CDB: mov     [rax+10h], rsi
 * 00000001C0012CDF: mov     [rax+18h], rdi
 * 00000001C0012CE3: mov     [rax+20h], r12
 * 00000001C0012CE7: push    r15
 * 00000001C0012CE9: sub     rsp, 40h
 * 00000001C0012CED: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0012CF4: lea     r15, Context
 * 00000001C0012CFB: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0012D00: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0012D04: mov     rsi, rcx
 * 00000001C0012D07: mov     r12d, 0E1h
 * 00000001C0012D0D: mov     eax, [rdx+2Ch]
 * 00000001C0012D10: test    al, 8
 * 00000001C0012D12: jz      short loc_1C0012D77
 * 00000001C0012D14: cmp     byte ptr [rdx+29h], 2
 * 00000001C0012D18: jb      short loc_1C0012D77
 * 00000001C0012D1A: test    rdi, rdi
 * 00000001C0012D1D: jz      short loc_1C0012D30
 * 00000001C0012D1F: mov     rdx, rbx
 * 00000001C0012D22: inc     rdx
 * 00000001C0012D25: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0012D29: jnz     short loc_1C0012D22
 * 00000001C0012D2B: inc     rdx
 * 00000001C0012D2E: jmp     short loc_1C0012D35
 * 00000001C0012D30: mov     edx, 5
 * 00000001C0012D35: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0012D3C: lea     r8, Context.Logger+4
 * 00000001C0012D43: test    rdi, rdi
 * 00000001C0012D46: movzx   r9d, r12w
 * 00000001C0012D4A: mov     rcx, rdi
 * 00000001C0012D4D: cmovz   rcx, r15
 * 00000001C0012D51: and     [rsp+48h+var_18], 0
 * 00000001C0012D57: mov     [rsp+48h+var_20], rdx
 * 00000001C0012D5C: mov     edx, 2Bh ; '+'
 * 00000001C0012D61: mov     [rsp+48h+var_28], rcx
 * 00000001C0012D66: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0012D6D: mov     rcx, [rcx+18h]
 * 00000001C0012D71: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0012D77: test    rdi, rdi
 * 00000001C0012D7A: jz      short loc_1C0012D8A
 * 00000001C0012D7C: inc     rbx
 * 00000001C0012D7F: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0012D83: jnz     short loc_1C0012D7C
 * 00000001C0012D85: inc     rbx
 * 00000001C0012D88: jmp     short loc_1C0012D8F
 * 00000001C0012D8A: mov     ebx, 5
 * 00000001C0012D8F: test    rdi, rdi
 * 00000001C0012D92: lea     r9, Context.Logger+4
 * 00000001C0012D99: mov     edx, 2
 * 00000001C0012D9E: mov     rcx, rsi
 * 00000001C0012DA1: cmovz   rdi, r15
 * 00000001C0012DA5: and     [rsp+48h+var_10], 0
 * 00000001C0012DAB: mov     [rsp+48h+var_18], rbx
 * 00000001C0012DB0: mov     [rsp+48h+var_20], rdi
 * 00000001C0012DB5: lea     r8d, [rdx+2]
 * 00000001C0012DB9: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C0012DBF: call    cs:__imp_WppAutoLogTrace
 * 00000001C0012DC6: nop     dword ptr [rax+rax+00h]
 * 00000001C0012DCB: mov     rbx, [rsp+48h+arg_0]
 * 00000001C0012DD0: mov     rsi, [rsp+48h+arg_8]
 * 00000001C0012DD5: mov     rdi, [rsp+48h+arg_10]
 * 00000001C0012DDA: mov     r12, [rsp+48h+arg_18]
 * 00000001C0012DDF: add     rsp, 40h
 * 00000001C0012DE3: pop     r15
 * 00000001C0012DE5: retn
 */
