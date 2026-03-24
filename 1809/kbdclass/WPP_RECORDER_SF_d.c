/*
 * XREFs of WPP_RECORDER_SF_D @ 0x1C0002780
 * Callers:
 *     KbdConfiguration @ 0x1C000F530 (KbdConfiguration.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002D00 (_guard_dispatch_icall_nop.c)
 */

/*
 * Hex-Rays decompilation failed for WPP_RECORDER_SF_D @ 0x1C0002780
 * Reason: Hex-Rays returned no pseudocode for 0x1C0002780
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001C0002780: mov     [rsp+arg_0], rbx
 * 00000001C0002785: push    rdi
 * 00000001C0002786: sub     rsp, 40h
 * 00000001C000278A: mov     rdi, rcx
 * 00000001C000278D: movzx   ebx, r9w
 * 00000001C0002791: mov     rcx, cs:WPP_GLOBAL_Control
 * 00000001C0002798: mov     eax, [rcx+2Ch]
 * 00000001C000279B: test    al, 1
 * 00000001C000279D: jnz     loc_1C0004438
 * 00000001C00027A3: mov     [rsp+48h+var_10], 0
 * 00000001C00027AC: lea     rax, [rsp+48h+arg_28]
 * 00000001C00027B1: mov     edx, 4
 * 00000001C00027B6: mov     [rsp+48h+var_18], 4
 * 00000001C00027BF: mov     [rsp+48h+var_20], rax
 * 00000001C00027C4: lea     r9, WPP_1975c0ad83fe39ae2d5358536952ac4e_Traceguids
 * 00000001C00027CB: mov     rcx, rdi
 * 00000001C00027CE: mov     word ptr [rsp+48h+var_28], bx
 * 00000001C00027D3: lea     r8d, [rdx-3]
 * 00000001C00027D7: call    cs:__imp_WppAutoLogTrace
 * 00000001C00027DE: nop     dword ptr [rax+rax+00h]
 * 00000001C00027E3: mov     rbx, [rsp+48h+arg_0]
 * 00000001C00027E8: add     rsp, 40h
 * 00000001C00027EC: pop     rdi
 * 00000001C00027ED: retn
 * 00000001C0004438: cmp     byte ptr [rcx+29h], 4
 * 00000001C000443C: jb      loc_1C00027A3
 * 00000001C0004442: mov     rax, cs:pfnWppTraceMessage
 * 00000001C0004449: lea     rdx, [rsp+48h+arg_28]
 * 00000001C000444E: mov     rcx, [rcx+18h]
 * 00000001C0004452: lea     r8, WPP_1975c0ad83fe39ae2d5358536952ac4e_Traceguids
 * 00000001C0004459: mov     [rsp+48h+var_18], 0
 * 00000001C0004462: mov     [rsp+48h+var_20], 4
 * 00000001C000446B: mov     [rsp+48h+var_28], rdx
 * 00000001C0004470: mov     edx, 2Bh ; '+'
 * 00000001C0004475: movzx   r9d, bx
 * 00000001C0004479: call    cs:__guard_dispatch_icall_fptr
 * 00000001C000447F: nop
 * 00000001C0004480: jmp     loc_1C00027A3
 */
