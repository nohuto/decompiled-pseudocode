/*
 * XREFs of WPP_RECORDER_SF_qqS @ 0x1C00A6790
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00BF5D0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_qqS @ 0x1C00A6790
 * Reason: Hex-Rays returned no pseudocode for 0x1C00A6790
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00A6790: mov     [rsp+arg_0], rbx
 * 00000001C00A6795: mov     [rsp+arg_8], rbp
 * 00000001C00A679A: mov     [rsp+arg_10], rsi
 * 00000001C00A679F: push    rdi
 * 00000001C00A67A0: push    r12
 * 00000001C00A67A2: push    r13
 * 00000001C00A67A4: push    r14
 * 00000001C00A67A6: push    r15
 * 00000001C00A67A8: sub     rsp, 60h
 * 00000001C00A67AC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00A67B3: lea     r13, Context
 * 00000001C00A67BA: mov     r14, cs:?gRimLog@@3PEAURECORDER_LOG__@@EA; RECORDER_LOG__ * gRimLog
 * 00000001C00A67C1: xor     r15d, r15d
 * 00000001C00A67C4: mov     rbx, [rsp+88h+arg_38]
 * 00000001C00A67CC: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C00A67D0: movzx   ebp, r9w
 * 00000001C00A67D4: mov     eax, [rcx+2Ch]
 * 00000001C00A67D7: lea     r12d, [r15+8]
 * 00000001C00A67DB: lea     esi, [rdi+0Bh]
 * 00000001C00A67DE: test    al, 1
 * 00000001C00A67E0: jnz     loc_1C00FDCCC
 * 00000001C00A67E6: test    rbx, rbx
 * 00000001C00A67E9: jz      short loc_1C00A6800
 * 00000001C00A67EB: inc     rdi
 * 00000001C00A67EE: cmp     [rbx+rdi*2], r15w
 * 00000001C00A67F3: jnz     short loc_1C00A67EB
 * 00000001C00A67F5: lea     rsi, ds:2[rdi*2]
 * 00000001C00A67FD: test    rbx, rbx
 * 00000001C00A6800: mov     [rsp+88h+var_30], r15
 * 00000001C00A6805: lea     rax, [rsp+88h+arg_30]
 * 00000001C00A680D: mov     [rsp+88h+var_38], rsi
 * 00000001C00A6812: lea     r9, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C00A6819: cmovz   rbx, r13
 * 00000001C00A681D: mov     edx, 4
 * 00000001C00A6822: mov     [rsp+88h+var_40], rbx
 * 00000001C00A6827: mov     rcx, r14
 * 00000001C00A682A: mov     [rsp+88h+var_48], r12
 * 00000001C00A682F: mov     [rsp+88h+var_50], rax
 * 00000001C00A6834: lea     rax, [rsp+88h+arg_28]
 * 00000001C00A683C: mov     [rsp+88h+var_58], r12
 * 00000001C00A6841: lea     r8d, [rdx-3]
 * 00000001C00A6845: mov     [rsp+88h+var_60], rax
 * 00000001C00A684A: mov     word ptr [rsp+88h+var_68], bp
 * 00000001C00A684F: call    cs:__imp_WppAutoLogTrace
 * 00000001C00A6856: nop     dword ptr [rax+rax+00h]
 * 00000001C00A685B: lea     r11, [rsp+88h+var_28]
 * 00000001C00A6860: mov     rbx, [r11+30h]
 * 00000001C00A6864: mov     rbp, [r11+38h]
 * 00000001C00A6868: mov     rsi, [r11+40h]
 * 00000001C00A686C: mov     rsp, r11
 * 00000001C00A686F: pop     r15
 * 00000001C00A6871: pop     r14
 * 00000001C00A6873: pop     r13
 * 00000001C00A6875: pop     r12
 * 00000001C00A6877: pop     rdi
 * 00000001C00A6878: retn
 * 00000001C00FDCCC: cmp     byte ptr [rcx+29h], 4
 * 00000001C00FDCD0: jb      loc_1C00A67E6
 * 00000001C00FDCD6: test    rbx, rbx
 * 00000001C00FDCD9: jz      short loc_1C00FDCF2
 * 00000001C00FDCDB: mov     rax, rdi
 * 00000001C00FDCDE: inc     rax
 * 00000001C00FDCE1: cmp     [rbx+rax*2], r15w
 * 00000001C00FDCE6: jnz     short loc_1C00FDCDE
 * 00000001C00FDCE8: lea     rdx, ds:2[rax*2]
 * 00000001C00FDCF0: jmp     short loc_1C00FDCF5
 * 00000001C00FDCF2: mov     rdx, rsi
 * 00000001C00FDCF5: mov     rax, cs:pfnWppTraceMessage
 * 00000001C00FDCFC: lea     r8, WPP_658a0cc68d373b3c0da87ff40b0f95a6_Traceguids
 * 00000001C00FDD03: mov     [rsp+88h+var_38], r15
 * 00000001C00FDD08: test    rbx, rbx
 * 00000001C00FDD0B: mov     [rsp+88h+var_40], rdx
 * 00000001C00FDD10: mov     rcx, rbx
 * 00000001C00FDD13: cmovz   rcx, r13
 * 00000001C00FDD17: movzx   r9d, bp
 * 00000001C00FDD1B: mov     [rsp+88h+var_48], rcx
 * 00000001C00FDD20: mov     edx, 2Bh ; '+'
 * 00000001C00FDD25: mov     [rsp+88h+var_50], r12
 * 00000001C00FDD2A: lea     rcx, [rsp+88h+arg_30]
 * 00000001C00FDD32: mov     [rsp+88h+var_58], rcx
 * 00000001C00FDD37: lea     rcx, [rsp+88h+arg_28]
 * 00000001C00FDD3F: mov     [rsp+88h+var_60], r12
 * 00000001C00FDD44: mov     [rsp+88h+var_68], rcx
 * 00000001C00FDD49: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00FDD50: mov     rcx, [rcx+18h]
 * 00000001C00FDD54: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00FDD5A: nop
 * 00000001C00FDD5B: jmp     loc_1C00A67E6
 */
