/*
 * XREFs of WPP_RECORDER_SF_s @ 0x1C00156D4
 * Callers:
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C000E974 (Controller_HwVerifierBreakIfEnabled.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0008A20 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_s @ 0x1C00156D4
 * Reason: Hex-Rays returned no pseudocode for 0x1C00156D4
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C00156D4: mov     rax, rsp
 * 00000001C00156D7: mov     [rax+8], rbx
 * 00000001C00156DB: mov     [rax+10h], rsi
 * 00000001C00156DF: mov     [rax+18h], rdi
 * 00000001C00156E3: mov     [rax+20h], r12
 * 00000001C00156E7: push    r15
 * 00000001C00156E9: sub     rsp, 40h
 * 00000001C00156ED: mov     rdx, cs:WPP_GLOBAL_Control
 * 00000001C00156F4: lea     r15, Context
 * 00000001C00156FB: mov     rdi, [rsp+48h+arg_28]
 * 00000001C0015700: or      rbx, 0FFFFFFFFFFFFFFFFh
 * 00000001C0015704: mov     rsi, rcx
 * 00000001C0015707: mov     r12d, 0E4h
 * 00000001C001570D: mov     eax, [rdx+2Ch]
 * 00000001C0015710: test    al, 8
 * 00000001C0015712: jz      short loc_1C0015777
 * 00000001C0015714: cmp     byte ptr [rdx+29h], 2
 * 00000001C0015718: jb      short loc_1C0015777
 * 00000001C001571A: test    rdi, rdi
 * 00000001C001571D: jz      short loc_1C0015730
 * 00000001C001571F: mov     rdx, rbx
 * 00000001C0015722: inc     rdx
 * 00000001C0015725: cmp     byte ptr [rdi+rdx], 0
 * 00000001C0015729: jnz     short loc_1C0015722
 * 00000001C001572B: inc     rdx
 * 00000001C001572E: jmp     short loc_1C0015735
 * 00000001C0015730: mov     edx, 5
 * 00000001C0015735: mov     rax, cs:pfnWppTraceMessage
 * 00000001C001573C: lea     r8, Context.Logger+4
 * 00000001C0015743: test    rdi, rdi
 * 00000001C0015746: movzx   r9d, r12w
 * 00000001C001574A: mov     rcx, rdi
 * 00000001C001574D: cmovz   rcx, r15
 * 00000001C0015751: and     [rsp+48h+var_18], 0
 * 00000001C0015757: mov     [rsp+48h+var_20], rdx
 * 00000001C001575C: mov     edx, 2Bh ; '+'
 * 00000001C0015761: mov     [rsp+48h+var_28], rcx
 * 00000001C0015766: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C001576D: mov     rcx, [rcx+18h]
 * 00000001C0015771: call    cs:__guard_dispatch_icall_fptr
 * 00000001C0015777: test    rdi, rdi
 * 00000001C001577A: jz      short loc_1C001578A
 * 00000001C001577C: inc     rbx
 * 00000001C001577F: cmp     byte ptr [rdi+rbx], 0
 * 00000001C0015783: jnz     short loc_1C001577C
 * 00000001C0015785: inc     rbx
 * 00000001C0015788: jmp     short loc_1C001578F
 * 00000001C001578A: mov     ebx, 5
 * 00000001C001578F: test    rdi, rdi
 * 00000001C0015792: lea     r9, Context.Logger+4
 * 00000001C0015799: mov     edx, 2
 * 00000001C001579E: mov     rcx, rsi
 * 00000001C00157A1: cmovz   rdi, r15
 * 00000001C00157A5: and     [rsp+48h+var_10], 0
 * 00000001C00157AB: mov     [rsp+48h+var_18], rbx
 * 00000001C00157B0: mov     [rsp+48h+var_20], rdi
 * 00000001C00157B5: lea     r8d, [rdx+2]
 * 00000001C00157B9: mov     word ptr [rsp+48h+var_28], r12w
 * 00000001C00157BF: call    cs:__imp_WppAutoLogTrace
 * 00000001C00157C6: nop     dword ptr [rax+rax+00h]
 * 00000001C00157CB: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00157D0: mov     rsi, [rsp+48h+arg_8]
 * 00000001C00157D5: mov     rdi, [rsp+48h+arg_10]
 * 00000001C00157DA: mov     r12, [rsp+48h+arg_18]
 * 00000001C00157DF: add     rsp, 40h
 * 00000001C00157E3: pop     r15
 * 00000001C00157E5: retn
 */
