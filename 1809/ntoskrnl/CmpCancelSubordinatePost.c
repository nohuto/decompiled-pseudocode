/*
 * XREFs of CmpCancelSubordinatePost @ 0x1406B2EDC
 * Callers:
 *     CmpPostNotify @ 0x1405DC29C (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1405F917C (CmNotifyRunDown.c)
 * Callees:
 *     CmpAddToDelayedDeref @ 0x1406B2F28 (CmpAddToDelayedDeref.c)
 */

/*
 * Hex-Rays decompilation failed for CmpCancelSubordinatePost @ 0x1406B2EDC
 * Reason: Hex-Rays returned no pseudocode for 0x1406B2EDC
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B2EDC: sub     rsp, 28h
 * 00000001406B2EE0: add     rcx, 20h ; ' '
 * 00000001406B2EE4: mov     rax, [rcx]
 * 00000001406B2EE7: cmp     rax, rcx
 * 00000001406B2EEA: jnz     short loc_1406B2EF1
 * 00000001406B2EEC: add     rsp, 28h
 * 00000001406B2EF0: retn
 * 00000001406B2EF1: lea     rcx, [rax-20h]
 * 00000001406B2EF5: mov     r8, [rcx]
 * 00000001406B2EF8: cmp     [r8+8], rcx
 * 00000001406B2EFC: jnz     short loc_1406B2F1A
 * 00000001406B2EFE: mov     rax, [rcx+8]
 * 00000001406B2F02: cmp     [rax], rcx
 * 00000001406B2F05: jnz     short loc_1406B2F1A
 * 00000001406B2F07: mov     [rax], r8
 * 00000001406B2F0A: mov     [r8+8], rax
 * 00000001406B2F0E: test    rdx, rdx
 * 00000001406B2F11: jz      short loc_1406B2EEC
 * 00000001406B2F13: call    CmpAddToDelayedDeref
 * 00000001406B2F18: jmp     short loc_1406B2EEC
 * 00000001406B2F1A: mov     ecx, 3
 * 00000001406B2F1F: int     29h; Win8: RtlFailFast(ecx)
 */
