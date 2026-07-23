/*
 * XREFs of CmpCancelSubordinatePost @ 0x1406B417C
 * Callers:
 *     CmpPostNotify @ 0x1405DD29C (CmpPostNotify.c)
 *     CmNotifyRunDown @ 0x1405FA17C (CmNotifyRunDown.c)
 * Callees:
 *     CmpAddToDelayedDeref @ 0x1406B41C8 (CmpAddToDelayedDeref.c)
 */

/*
 * Hex-Rays decompilation failed for CmpCancelSubordinatePost @ 0x1406B417C
 * Reason: Hex-Rays returned no pseudocode for 0x1406B417C
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001406B417C: sub     rsp, 28h
 * 00000001406B4180: add     rcx, 20h ; ' '
 * 00000001406B4184: mov     rax, [rcx]
 * 00000001406B4187: cmp     rax, rcx
 * 00000001406B418A: jnz     short loc_1406B4191
 * 00000001406B418C: add     rsp, 28h
 * 00000001406B4190: retn
 * 00000001406B4191: lea     rcx, [rax-20h]
 * 00000001406B4195: mov     r8, [rcx]
 * 00000001406B4198: cmp     [r8+8], rcx
 * 00000001406B419C: jnz     short loc_1406B41BA
 * 00000001406B419E: mov     rax, [rcx+8]
 * 00000001406B41A2: cmp     [rax], rcx
 * 00000001406B41A5: jnz     short loc_1406B41BA
 * 00000001406B41A7: mov     [rax], r8
 * 00000001406B41AA: mov     [r8+8], rax
 * 00000001406B41AE: test    rdx, rdx
 * 00000001406B41B1: jz      short loc_1406B418C
 * 00000001406B41B3: call    CmpAddToDelayedDeref
 * 00000001406B41B8: jmp     short loc_1406B418C
 * 00000001406B41BA: mov     ecx, 3
 * 00000001406B41BF: int     29h; Win8: RtlFailFast(ecx)
 */
