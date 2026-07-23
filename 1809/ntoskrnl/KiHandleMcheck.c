/*
 * XREFs of KiHandleMcheck @ 0x14028D970
 * Callers:
 *     KxMcheckAbort @ 0x1401CCA00 (KxMcheckAbort.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401D1480 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiHandleMcheck @ 0x14028D970
 * Reason: Hex-Rays returned no pseudocode for 0x14028D970
 * Fallback: raw IDA disassembly follows.
 *
 * 000000014028D970: sub     rsp, 28h
 * 000000014028D974: call    cs:__imp_HalHandleMcheck
 * 000000014028D97B: nop     dword ptr [rax+rax+00h]
 * 000000014028D980: mov     rax, qword ptr cs:KiSpeculationFeatures
 * 000000014028D987: mov     rcx, 20000000000h
 * 000000014028D991: test    rcx, rax
 * 000000014028D994: jz      short loc_14028D99B
 * 000000014028D996: call    KiFlushCurrentRsb
 * 000000014028D99B: lfence
 * 000000014028D99E: add     rsp, 28h
 * 000000014028D9A2: retn
 */
