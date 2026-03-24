/*
 * XREFs of KiHandleMcheck @ 0x14028D780
 * Callers:
 *     KxMcheckAbort @ 0x1401CC900 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401D1380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x14028D780
 * Reason: Hex-Rays returned no pseudocode for 0x14028D780
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028D780: sub     rsp, 28h
 * 000000014028D784: call    cs:__imp_HalHandleMcheck
 * 000000014028D78B: nop     dword ptr [rax+rax+00h]
 * 000000014028D790: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014028D797: mov     rcx, 20000000000h
 * 000000014028D7A1: test    rcx, rax
 * 000000014028D7A4: jz      short loc_14028D7AB
 * 000000014028D7A6: call    KiFlushCurrentRsb
 * 000000014028D7AB: lfence
 * 000000014028D7AE: add     rsp, 28h
 * 000000014028D7B2: retn
 */
