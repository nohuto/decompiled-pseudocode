/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x1403313A0
 * Callers:
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x1403312A0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x1403104A0 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140331560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x1403313A0
 * Reason: Hex-Rays returned no pseudocode for 0x1403313A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403313A0: sub     rsp, 48h
 * 00000001403313A4: call    __guard_retpoline_exit
 * 00000001403313A9: lfence
 * 00000001403313AC: mov     r10, (offset xmmword_140541350+4)
 * 00000001403313B6: mov     r10d, [r10]
 * 00000001403313B9: test    r10d, 2
 * 00000001403313C0: jz      short loc_140331403
 * 00000001403313C2: mov     [rsp+48h+var_28], rax
 * 00000001403313C7: mov     [rsp+48h+var_20], rcx
 * 00000001403313CC: mov     [rsp+48h+var_18], rdx
 * 00000001403313D1: mov     [rsp+48h+var_10], r8
 * 00000001403313D6: mov     [rsp+48h+var_8], r9
 * 00000001403313DB: mov     rcx, rax
 * 00000001403313DE: mov     rax, offset EtwTraceRetpolineExit
 * 00000001403313E8: call    rax ; EtwTraceRetpolineExit
 * 00000001403313EA: mov     rax, [rsp+48h+var_28]
 * 00000001403313EF: mov     rcx, [rsp+48h+var_20]
 * 00000001403313F4: mov     rdx, [rsp+48h+var_18]
 * 00000001403313F9: mov     r8, [rsp+48h+var_10]
 * 00000001403313FE: mov     r9, [rsp+48h+var_8]
 * 0000000140331403: add     rsp, 48h
 * 0000000140331407: jmp     rax
 */
