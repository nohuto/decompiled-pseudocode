/*
 * XREFs of sub_180074288 @ 0x180074288
 * Callers:
 *     sub_18006EC40 @ 0x18006EC40 (sub_18006EC40.c)
 *     sub_18006F084 @ 0x18006F084 (sub_18006F084.c)
 *     sub_1800B9888 @ 0x1800B9888 (sub_1800B9888.c)
 *     sub_1800BB1FC @ 0x1800BB1FC (sub_1800BB1FC.c)
 *     sub_180123BC0 @ 0x180123BC0 (sub_180123BC0.c)
 * Callees:
 *     sub_18011DB98 @ 0x18011DB98 (sub_18011DB98.c)
 */

/*
 * Hex-Rays decompilation failed for sub_180074288 @ 0x180074288
 * Reason: Hex-Rays returned no pseudocode for 0x180074288
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000180074288: push    rbx
 * 000000018007428A: sub     rsp, 20h
 * 000000018007428E: mov     r9b, r8b
 * 0000000180074291: mov     rbx, rcx
 * 0000000180074294: mov     r8, rdx
 * 0000000180074297: mov     edx, 80070057h
 * 000000018007429C: call    sub_18011DB98
 * 00000001800742A1: lea     rax, ??_7SpectreInvalidArgException@Utils@Spectre@@6B@; const Spectre::Utils::SpectreInvalidArgException::`vftable'
 * 00000001800742A8: mov     [rbx], rax
 * 00000001800742AB: mov     rax, rbx
 * 00000001800742AE: add     rsp, 20h
 * 00000001800742B2: pop     rbx
 * 00000001800742B3: retn
 */
