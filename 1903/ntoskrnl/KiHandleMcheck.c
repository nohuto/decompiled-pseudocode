/*
 * XREFs of KiHandleMcheck @ 0x1402A42C0
 * Callers:
 *     KxMcheckAbort @ 0x1401D2A80 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140353600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x1402A42C0
 * Reason: Hex-Rays returned no pseudocode for 0x1402A42C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001402A42C0: sub     rsp, 28h
 * 00000001402A42C4: call    cs:__imp_HalHandleMcheck
 * 00000001402A42CB: nop     dword ptr [rax+rax+00h]
 * 00000001402A42D0: mov     eax, dword ptr cs:KiSpeculationFeatures
 * 00000001402A42D6: bt      eax, 19h
 * 00000001402A42DA: jnb     short loc_1402A42E1
 * 00000001402A42DC: call    KiFlushCurrentRsb
 * 00000001402A42E1: lfence
 * 00000001402A42E4: add     rsp, 28h
 * 00000001402A42E8: retn
 */
