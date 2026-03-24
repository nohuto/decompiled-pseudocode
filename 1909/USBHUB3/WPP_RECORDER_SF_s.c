/*
 * XREFs of WPP_RECORDER_SF_S @ 0x1C003050C
 * Callers:
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x1C0030984 (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_S @ 0x1C003050C
 * Reason: Hex-Rays returned no pseudocode for 0x1C003050C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C003050C: mov     rax, rsp
 * 00000001C003050F: mov     [rax+8], rbx
 * 00000001C0030513: mov     [rax+10h], rbp
 * 00000001C0030517: mov     [rax+18h], rsi
 * 00000001C003051B: mov     [rax+20h], rdi
 * 00000001C003051F: push    r12
 * 00000001C0030521: push    r14
 * 00000001C0030523: push    r15
 * 00000001C0030525: sub     rsp, 40h
 * 00000001C0030529: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C0030530: lea     rbp, aNull_0; "NULL"
 * 00000001C0030537: mov     rbx, [rsp+58h+arg_28]
 * 00000001C003053F: or      rdi, 0FFFFFFFFFFFFFFFFh
 * 00000001C0030543: xor     r12d, r12d
 * 00000001C0030546: movzx   r14d, r9w
 * 00000001C003054A: mov     r15, rcx
 * 00000001C003054D: mov     eax, [rdx+2Ch]
 * 00000001C0030550: lea     esi, [rdi+0Bh]
 * 00000001C0030553: test    al, 10h
 * 00000001C0030555: jz      short loc_1C00305BD
 * 00000001C0030557: cmp     byte ptr [rdx+29h], 2
 * 00000001C003055B: jb      short loc_1C00305BD
 * 00000001C003055D: test    rbx, rbx
 * 00000001C0030560: jz      short loc_1C0030579
 * 00000001C0030562: mov     rax, rdi
 * 00000001C0030565: inc     rax
 * 00000001C0030568: cmp     [rbx+rax*2], r12w
 * 00000001C003056D: jnz     short loc_1C0030565
 * 00000001C003056F: lea     rdx, ds:2[rax*2]
 * 00000001C0030577: jmp     short loc_1C003057C
 * 00000001C0030579: mov     rdx, rsi
 * 00000001C003057C: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0030583: lea     r8, WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids
 * 00000001C003058A: test    rbx, rbx
 * 00000001C003058D: mov     [rsp+58h+var_28], r12
 * 00000001C0030592: mov     [rsp+58h+var_30], rdx
 * 00000001C0030597: mov     rcx, rbp
 * 00000001C003059A: cmovnz  rcx, rbx
 * 00000001C003059E: movzx   r9d, r14w
 * 00000001C00305A2: mov     [rsp+58h+var_38], rcx
 * 00000001C00305A7: mov     edx, 2Bh ; '+'
 * 00000001C00305AC: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C00305B3: mov     rcx, [rcx+18h]
 * 00000001C00305B7: call    cs:__guard_dispatch_icall_fptr
 * 00000001C00305BD: test    rbx, rbx
 * 00000001C00305C0: jz      short loc_1C00305D7
 * 00000001C00305C2: inc     rdi
 * 00000001C00305C5: cmp     [rbx+rdi*2], r12w
 * 00000001C00305CA: jnz     short loc_1C00305C2
 * 00000001C00305CC: lea     rsi, ds:2[rdi*2]
 * 00000001C00305D4: test    rbx, rbx
 * 00000001C00305D7: mov     [rsp+58h+var_20], r12
 * 00000001C00305DC: lea     r9, WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids
 * 00000001C00305E3: mov     edx, 2
 * 00000001C00305E8: mov     [rsp+58h+var_28], rsi
 * 00000001C00305ED: cmovnz  rbp, rbx
 * 00000001C00305F1: mov     rcx, r15
 * 00000001C00305F4: mov     [rsp+58h+var_30], rbp
 * 00000001C00305F9: mov     word ptr [rsp+58h+var_38], r14w
 * 00000001C00305FF: lea     r8d, [rdx+3]
 * 00000001C0030603: call    cs:__imp_WppAutoLogTrace
 * 00000001C003060A: nop     dword ptr [rax+rax+00h]
 * 00000001C003060F: mov     rbx, [rsp+58h+arg_0]
 * 00000001C0030614: mov     rbp, [rsp+58h+arg_8]
 * 00000001C0030619: mov     rsi, [rsp+58h+arg_10]
 * 00000001C003061E: mov     rdi, [rsp+58h+arg_18]
 * 00000001C0030623: add     rsp, 40h
 * 00000001C0030627: pop     r15
 * 00000001C0030629: pop     r14
 * 00000001C003062B: pop     r12
 * 00000001C003062D: retn
 */
