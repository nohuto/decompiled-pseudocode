/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C00A73D0
 * Callers:
 *     rimOnPnpArrived @ 0x1C00690B0 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00C13F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqS @ 0x1C00A73D0
 * Reason: Hex-Rays returned no pseudocode for 0x1C00A73D0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00A73D0: mov     [rsp+arg_0], rbx
 * 00000001C00A73D5: mov     [rsp+arg_8], rbp
 * 00000001C00A73DA: mov     [rsp+arg_10], rsi
 * 00000001C00A73DF: push    rdi
 * 00000001C00A73E0: push    r12
 * 00000001C00A73E2: push    r13
 * 00000001C00A73E4: push    r14
 * 00000001C00A73E6: push    r15
 * 00000001C00A73E8: sub     rsp, 60h
 * 00000001C00A73EC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00A73F3: lea     r13, Context
 * 00000001C00A73FA: mov     r14, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C00A7401: xor     r15d, r15d
 * 00000001C00A7404: mov     rbx, [rsp+88h+arg_38]
 * 00000001C00A740C: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C00A7410: movzx   ebp, r9w
 * 00000001C00A7414: mov     eax, [rcx+2Ch]
 * 00000001C00A7417: lea     r12d, [r15+8]
 * 00000001C00A741B: lea     esi, [rdi+0Bh]
 * 00000001C00A741E: test    al, 1
 * 00000001C00A7420: jnz     loc_1C00FF30C
 * 00000001C00A7426: test    rbx, rbx
 * 00000001C00A7429: jz      short loc_1C00A7440
 * 00000001C00A742B: inc     rdi
 * 00000001C00A742E: cmp     [rbx+rdi*2], r15w
 * 00000001C00A7433: jnz     short loc_1C00A742B
 * 00000001C00A7435: lea     rsi, ds:2[rdi*2]
 * 00000001C00A743D: test    rbx, rbx
 * 00000001C00A7440: mov     [rsp+88h+var_30], r15
 * 00000001C00A7445: lea     rax, [rsp+88h+arg_30]
 * 00000001C00A744D: mov     [rsp+88h+var_38], rsi
 * 00000001C00A7452: lea     r9, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C00A7459: cmovz   rbx, r13
 * 00000001C00A745D: mov     edx, 4
 * 00000001C00A7462: mov     [rsp+88h+var_40], rbx
 * 00000001C00A7467: mov     rcx, r14
 * 00000001C00A746A: mov     [rsp+88h+var_48], r12
 * 00000001C00A746F: mov     [rsp+88h+var_50], rax
 * 00000001C00A7474: lea     rax, [rsp+88h+arg_28]
 * 00000001C00A747C: mov     [rsp+88h+var_58], r12
 * 00000001C00A7481: lea     r8d, [rdx-3]
 * 00000001C00A7485: mov     [rsp+88h+var_60], rax
 * 00000001C00A748A: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C00A748F: call    cs:__imp_WppAutoLogTrace
 * 00000001C00A7496: nop     dword ptr [rax+rax+00h]
 * 00000001C00A749B: lea     r11, [rsp+88h+var_28]
 * 00000001C00A74A0: mov     rbx, [r11+30h]
 * 00000001C00A74A4: mov     rbp, [r11+38h]
 * 00000001C00A74A8: mov     rsi, [r11+40h]
 * 00000001C00A74AC: mov     rsp, r11
 * 00000001C00A74AF: pop     r15
 * 00000001C00A74B1: pop     r14
 * 00000001C00A74B3: pop     r13
 * 00000001C00A74B5: pop     r12
 * 00000001C00A74B7: pop     rdi
 * 00000001C00A74B8: retn
 * 00000001C00FF30C: cmp     byte ptr [rcx+29h], 4
 * 00000001C00FF310: jb      loc_1C00A7426
 * 00000001C00FF316: test    rbx, rbx
 * 00000001C00FF319: jz      short loc_1C00FF332
 * 00000001C00FF31B: mov     rax, rdi
 * 00000001C00FF31E: inc     rax
 * 00000001C00FF321: cmp     [rbx+rax*2], r15w
 * 00000001C00FF326: jnz     short loc_1C00FF31E
 * 00000001C00FF328: lea     rdx, ds:2[rax*2]
 * 00000001C00FF330: jmp     short loc_1C00FF335
 * 00000001C00FF332: mov     rdx, rsi
 * 00000001C00FF335: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00FF33C: lea     r8, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C00FF343: mov     [rsp+88h+var_38], r15
 * 00000001C00FF348: test    rbx, rbx
 * 00000001C00FF34B: mov     [rsp+88h+var_40], rdx
 * 00000001C00FF350: mov     rcx, rbx
 * 00000001C00FF353: cmovz   rcx, r13
 * 00000001C00FF357: movzx   r9d, bp
 * 00000001C00FF35B: mov     [rsp+88h+var_48], rcx
 * 00000001C00FF360: mov     edx, 2Bh ; '+'
 * 00000001C00FF365: mov     [rsp+88h+var_50], r12
 * 00000001C00FF36A: lea     rcx, [rsp+88h+arg_30]
 * 00000001C00FF372: mov     [rsp+88h+var_58], rcx
 * 00000001C00FF377: lea     rcx, [rsp+88h+arg_28]
 * 00000001C00FF37F: mov     [rsp+88h+var_60], r12
 * 00000001C00FF384: mov     [rsp+88h+var_68], rcx
 * 00000001C00FF389: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00FF390: mov     rcx, [rcx+18h]
 * 00000001C00FF394: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00FF39A: nop
 * 00000001C00FF39B: jmp     loc_1C00A7426
 */
