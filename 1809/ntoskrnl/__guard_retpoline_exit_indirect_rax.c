/*
 * XREFs of __guard_retpoline_exit_indirect_rax @ 0x1403323A0
 * Callers:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     __guard_retpoline_indirect_cfg_rax @ 0x1403322A0 (__guard_retpoline_indirect_cfg_rax.c)
 * Callees:
 *     EtwTraceRetpolineExit @ 0x140310690 (EtwTraceRetpolineExit.c)
 *     __guard_retpoline_exit @ 0x140332560 (__guard_retpoline_exit.c)
 */

/*
 * Hex-Rays decompilation failed for __guard_retpoline_exit_indirect_rax @ 0x1403323A0
 * Reason: Hex-Rays returned no pseudocode for 0x1403323A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001403323A0: sub     rsp, 48h
 * 00000001403323A4: call    __guard_retpoline_exit
 * 00000001403323A9: lfence
 * 00000001403323AC: mov     r10, (offset xmmword_140542350+4)
 * 00000001403323B6: mov     r10d, [r10]
 * 00000001403323B9: test    r10d, 2
 * 00000001403323C0: jz      short loc_140332403
 * 00000001403323C2: mov     [rsp+48h+var_28], rax
 * 00000001403323C7: mov     [rsp+48h+var_20], rcx
 * 00000001403323CC: mov     [rsp+48h+var_18], rdx
 * 00000001403323D1: mov     [rsp+48h+var_10], r8
 * 00000001403323D6: mov     [rsp+48h+var_8], r9
 * 00000001403323DB: mov     rcx, rax
 * 00000001403323DE: mov     rax, offset EtwTraceRetpolineExit
 * 00000001403323E8: call    rax ; EtwTraceRetpolineExit
 * 00000001403323EA: mov     rax, [rsp+48h+var_28]
 * 00000001403323EF: mov     rcx, [rsp+48h+var_20]
 * 00000001403323F4: mov     rdx, [rsp+48h+var_18]
 * 00000001403323F9: mov     r8, [rsp+48h+var_10]
 * 00000001403323FE: mov     r9, [rsp+48h+var_8]
 * 0000000140332403: add     rsp, 48h
 * 0000000140332407: jmp     rax
 */
