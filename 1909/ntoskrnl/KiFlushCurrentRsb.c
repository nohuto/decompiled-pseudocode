/*
 * XREFs of KiFlushCurrentRsb @ 0x140353600
 * Callers:
 *     KeFlushRsb @ 0x140180F18 (KeFlushRsb.c)
 *     KiFlushRsbTarget @ 0x1401824F0 (KiFlushRsbTarget.c)
 *     KiHandleMcheck @ 0x1402A4020 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x1402A4120 (KiProcessNMI.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x140353600 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x140353600
 * Reason: Hex-Rays returned no pseudocode for 0x140353600
 * Fallback: raw IDA disassembly follows.
 *
 * 0000000140353600: sub     rsp, 8
 * 0000000140353604: pushfq
 * 0000000140353605: cli
 * 0000000140353606: call    loc_140353719
 * 000000014035360B: add     rsp, 8
 * 000000014035360F: call    loc_140353722
 * 0000000140353614: add     rsp, 8
 * 0000000140353618: call    loc_14035360B
 * 000000014035361D: add     rsp, 8
 * 0000000140353621: call    loc_140353614
 * 0000000140353626: add     rsp, 8
 * 000000014035362A: call    loc_14035361D
 * 000000014035362F: add     rsp, 8
 * 0000000140353633: call    loc_140353626
 * 0000000140353638: add     rsp, 8
 * 000000014035363C: call    loc_14035362F
 * 0000000140353641: add     rsp, 8
 * 0000000140353645: call    loc_140353638
 * 000000014035364A: add     rsp, 8
 * 000000014035364E: call    loc_140353641
 * 0000000140353653: add     rsp, 8
 * 0000000140353657: call    loc_14035364A
 * 000000014035365C: add     rsp, 8
 * 0000000140353660: call    loc_140353653
 * 0000000140353665: add     rsp, 8
 * 0000000140353669: call    loc_14035365C
 * 000000014035366E: add     rsp, 8
 * 0000000140353672: call    loc_140353665
 * 0000000140353677: add     rsp, 8
 * 000000014035367B: call    loc_14035366E
 * 0000000140353680: add     rsp, 8
 * 0000000140353684: call    loc_140353677
 * 0000000140353689: add     rsp, 8
 * 000000014035368D: call    loc_140353680
 * 0000000140353692: add     rsp, 8
 * 0000000140353696: call    loc_140353689
 * 000000014035369B: add     rsp, 8
 * 000000014035369F: call    loc_140353692
 * 00000001403536A4: add     rsp, 8
 * 00000001403536A8: call    loc_14035369B
 * 00000001403536AD: add     rsp, 8
 * 00000001403536B1: call    loc_1403536A4
 * 00000001403536B6: add     rsp, 8
 * 00000001403536BA: call    loc_1403536AD
 * 00000001403536BF: add     rsp, 8
 * 00000001403536C3: call    loc_1403536B6
 * 00000001403536C8: add     rsp, 8
 * 00000001403536CC: call    loc_1403536BF
 * 00000001403536D1: add     rsp, 8
 * 00000001403536D5: call    loc_1403536C8
 * 00000001403536DA: add     rsp, 8
 * 00000001403536DE: call    loc_1403536D1
 * 00000001403536E3: add     rsp, 8
 * 00000001403536E7: call    loc_1403536DA
 * 00000001403536EC: add     rsp, 8
 * 00000001403536F0: call    loc_1403536E3
 * 00000001403536F5: add     rsp, 8
 * 00000001403536F9: call    loc_1403536EC
 * 00000001403536FE: add     rsp, 8
 * 0000000140353702: call    loc_1403536F5
 * 0000000140353707: add     rsp, 8
 * 000000014035370B: call    loc_1403536FE
 * 0000000140353710: add     rsp, 8
 * 0000000140353714: call    loc_140353707
 * 0000000140353719: add     rsp, 8
 * 000000014035371D: call    loc_140353710
 * 0000000140353722: add     rsp, 8
 * 0000000140353726: lfence
 * 0000000140353729: bt      [rsp-0F0h+arg_E8], 9
 * 000000014035372F: jnb     short loc_140353732
 * 0000000140353731: sti
 * 0000000140353732: add     rsp, 10h
 * 0000000140353736: retn
 */
