/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C002DA1C
 * Callers:
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C002DE04 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C002DA1C
 * Reason: Hex-Rays returned no pseudocode for 0x1C002DA1C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C002DA1C: mov     rax, rsp
 * 00000001C002DA1F: mov     [rax+8], rbx
 * 00000001C002DA23: mov     [rax+10h], rbp
 * 00000001C002DA27: mov     [rax+18h], rsi
 * 00000001C002DA2B: mov     [rax+20h], rdi
 * 00000001C002DA2F: push    r12
 * 00000001C002DA31: push    r14
 * 00000001C002DA33: push    r15
 * 00000001C002DA35: sub     rsp, 40h
 * 00000001C002DA39: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C002DA40: lea     rbp, aNull; "NULL"
 * 00000001C002DA47: mov     rbx, [rsp+58h+arg_28]
 * 00000001C002DA4F: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C002DA53: xor     r12d, r12d
 * 00000001C002DA56: movzx   r14d, r9w
 * 00000001C002DA5A: mov     r15, rcx
 * 00000001C002DA5D: mov     eax, [rdx+2Ch]
 * 00000001C002DA60: lea     esi, [rdi+0Bh]
 * 00000001C002DA63: test    al, 10h
 * 00000001C002DA65: jz      short loc_1C002DACD
 * 00000001C002DA67: cmp     byte ptr [rdx+29h], 2
 * 00000001C002DA6B: jb      short loc_1C002DACD
 * 00000001C002DA6D: test    rbx, rbx
 * 00000001C002DA70: jz      short loc_1C002DA89
 * 00000001C002DA72: mov     rax, rdi
 * 00000001C002DA75: inc     rax
 * 00000001C002DA78: cmp     [rbx+rax*2], r12w
 * 00000001C002DA7D: jnz     short loc_1C002DA75
 * 00000001C002DA7F: lea     rdx, ds:2[rax*2]
 * 00000001C002DA87: jmp     short loc_1C002DA8C
 * 00000001C002DA89: mov     rdx, rsi
 * 00000001C002DA8C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C002DA93: lea     r8, WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids
 * 00000001C002DA9A: test    rbx, rbx
 * 00000001C002DA9D: mov     [rsp+58h+var_28], r12
 * 00000001C002DAA2: mov     [rsp+58h+var_30], rdx
 * 00000001C002DAA7: mov     rcx, rbp
 * 00000001C002DAAA: cmovnz  rcx, rbx
 * 00000001C002DAAE: movzx   r9d, r14w
 * 00000001C002DAB2: mov     [rsp+58h+var_38], rcx
 * 00000001C002DAB7: mov     edx, 2Bh ; '+'
 * 00000001C002DABC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C002DAC3: mov     rcx, [rcx+18h]
 * 00000001C002DAC7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C002DACD: test    rbx, rbx
 * 00000001C002DAD0: jz      short loc_1C002DAE7
 * 00000001C002DAD2: inc     rdi
 * 00000001C002DAD5: cmp     [rbx+rdi*2], r12w
 * 00000001C002DADA: jnz     short loc_1C002DAD2
 * 00000001C002DADC: lea     rsi, ds:2[rdi*2]
 * 00000001C002DAE4: test    rbx, rbx
 * 00000001C002DAE7: mov     [rsp+58h+var_20], r12
 * 00000001C002DAEC: lea     r9, WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids
 * 00000001C002DAF3: mov     edx, 2
 * 00000001C002DAF8: mov     [rsp+58h+var_28], rsi
 * 00000001C002DAFD: cmovnz  rbp, rbx
 * 00000001C002DB01: mov     rcx, r15
 * 00000001C002DB04: mov     [rsp+58h+var_30], rbp
 * 00000001C002DB09: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C002DB0F: lea     r8d, [rdx+3]
 * 00000001C002DB13: call    cs:__imp_WppAutoLogTrace
 * 00000001C002DB1A: nop     dword ptr [rax+rax+00h]
 * 00000001C002DB1F: mov     rbx, [rsp+58h+arg_0]
 * 00000001C002DB24: mov     rbp, [rsp+58h+arg_8]
 * 00000001C002DB29: mov     rsi, [rsp+58h+arg_10]
 * 00000001C002DB2E: mov     rdi, [rsp+58h+arg_18]
 * 00000001C002DB33: add     rsp, 40h
 * 00000001C002DB37: pop     r15
 * 00000001C002DB39: pop     r14
 * 00000001C002DB3B: pop     r12
 * 00000001C002DB3D: retn
 */
