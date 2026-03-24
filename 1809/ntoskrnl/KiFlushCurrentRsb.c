/*
 * XREFs of KiFlushCurrentRsb @ 0x1401D1380
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400F8330 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x1400F8BF0 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x14028D780 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x14028D890 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x1402954C0 (KeFlushRsb.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140295590 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x140295780 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401D1380 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x1401D1380
 * Reason: Hex-Rays returned no pseudocode for 0x1401D1380
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D1380: sub     rsp, 8
 * 00000001401D1384: pushfq
 * 00000001401D1385: cli
 * 00000001401D1386: call    loc_1401D1499
 * 00000001401D138B: add     rsp, 8
 * 00000001401D138F: call    loc_1401D14A2
 * 00000001401D1394: add     rsp, 8
 * 00000001401D1398: call    loc_1401D138B
 * 00000001401D139D: add     rsp, 8
 * 00000001401D13A1: call    loc_1401D1394
 * 00000001401D13A6: add     rsp, 8
 * 00000001401D13AA: call    loc_1401D139D
 * 00000001401D13AF: add     rsp, 8
 * 00000001401D13B3: call    loc_1401D13A6
 * 00000001401D13B8: add     rsp, 8
 * 00000001401D13BC: call    loc_1401D13AF
 * 00000001401D13C1: add     rsp, 8
 * 00000001401D13C5: call    loc_1401D13B8
 * 00000001401D13CA: add     rsp, 8
 * 00000001401D13CE: call    loc_1401D13C1
 * 00000001401D13D3: add     rsp, 8
 * 00000001401D13D7: call    loc_1401D13CA
 * 00000001401D13DC: add     rsp, 8
 * 00000001401D13E0: call    loc_1401D13D3
 * 00000001401D13E5: add     rsp, 8
 * 00000001401D13E9: call    loc_1401D13DC
 * 00000001401D13EE: add     rsp, 8
 * 00000001401D13F2: call    loc_1401D13E5
 * 00000001401D13F7: add     rsp, 8
 * 00000001401D13FB: call    loc_1401D13EE
 * 00000001401D1400: add     rsp, 8
 * 00000001401D1404: call    loc_1401D13F7
 * 00000001401D1409: add     rsp, 8
 * 00000001401D140D: call    loc_1401D1400
 * 00000001401D1412: add     rsp, 8
 * 00000001401D1416: call    loc_1401D1409
 * 00000001401D141B: add     rsp, 8
 * 00000001401D141F: call    loc_1401D1412
 * 00000001401D1424: add     rsp, 8
 * 00000001401D1428: call    loc_1401D141B
 * 00000001401D142D: add     rsp, 8
 * 00000001401D1431: call    loc_1401D1424
 * 00000001401D1436: add     rsp, 8
 * 00000001401D143A: call    loc_1401D142D
 * 00000001401D143F: add     rsp, 8
 * 00000001401D1443: call    loc_1401D1436
 * 00000001401D1448: add     rsp, 8
 * 00000001401D144C: call    loc_1401D143F
 * 00000001401D1451: add     rsp, 8
 * 00000001401D1455: call    loc_1401D1448
 * 00000001401D145A: add     rsp, 8
 * 00000001401D145E: call    loc_1401D1451
 * 00000001401D1463: add     rsp, 8
 * 00000001401D1467: call    loc_1401D145A
 * 00000001401D146C: add     rsp, 8
 * 00000001401D1470: call    loc_1401D1463
 * 00000001401D1475: add     rsp, 8
 * 00000001401D1479: call    loc_1401D146C
 * 00000001401D147E: add     rsp, 8
 * 00000001401D1482: call    loc_1401D1475
 * 00000001401D1487: add     rsp, 8
 * 00000001401D148B: call    loc_1401D147E
 * 00000001401D1490: add     rsp, 8
 * 00000001401D1494: call    loc_1401D1487
 * 00000001401D1499: add     rsp, 8
 * 00000001401D149D: call    loc_1401D1490
 * 00000001401D14A2: add     rsp, 8
 * 00000001401D14A6: mov     eax, 0DADAh
 * 00000001401D14AB: lfence
 * 00000001401D14AE: bt      [rsp-0F0h+arg_E8], 9
 * 00000001401D14B4: jnb     short loc_1401D14B7
 * 00000001401D14B6: sti
 * 00000001401D14B7: add     rsp, 10h
 * 00000001401D14BB: retn
 */
