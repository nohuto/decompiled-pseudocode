/*
 * XREFs of KiHandleMcheck @ 0x1402A4020
 * Callers:
 *     KxMcheckAbort @ 0x1401D3680 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140353600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x1402A4020
 * Reason: Hex-Rays returned no pseudocode for 0x1402A4020
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A4020: sub     rsp, 28h
 * 00000001402A4024: call    cs:__imp_HalHandleMcheck
 * 00000001402A402B: nop     dword ptr [rax+rax+00h]
 * 00000001402A4030: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402A4036: bt      eax, 19h
 * 00000001402A403A: jnb     short loc_1402A4041
 * 00000001402A403C: call    KiFlushCurrentRsb
 * 00000001402A4041: lfence
 * 00000001402A4044: add     rsp, 28h
 * 00000001402A4048: retn
 */
