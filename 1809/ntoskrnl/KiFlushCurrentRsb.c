/*
 * XREFs of KiFlushCurrentRsb @ 0x1401D1480
 * Callers:
 *     KiUpdateSpeculationControl @ 0x1400F83B0 (KiUpdateSpeculationControl.c)
 *     KiUpdateStibpPairing @ 0x1400F8C70 (KiUpdateStibpPairing.c)
 *     KiHandleMcheck @ 0x14028D970 (KiHandleMcheck.c)
 *     KiProcessNMI @ 0x14028DA80 (KiProcessNMI.c)
 *     KeFlushRsb @ 0x1402956B0 (KeFlushRsb.c)
 *     KePrepareToDispatchVirtualProcessor @ 0x140295780 (KePrepareToDispatchVirtualProcessor.c)
 *     KiFlushRsbTarget @ 0x140295970 (KiFlushRsbTarget.c)
 * Callees:
 *     KiFlushCurrentRsb @ 0x1401D1480 (KiFlushCurrentRsb.c)
 */

/*
 * Hex-Rays decompilation failed for KiFlushCurrentRsb @ 0x1401D1480
 * Reason: Hex-Rays returned no pseudocode for 0x1401D1480
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401D1480: sub     rsp, 8
 * 00000001401D1484: pushfq
 * 00000001401D1485: cli
 * 00000001401D1486: call    loc_1401D1599
 * 00000001401D148B: add     rsp, 8
 * 00000001401D148F: call    loc_1401D15A2
 * 00000001401D1494: add     rsp, 8
 * 00000001401D1498: call    loc_1401D148B
 * 00000001401D149D: add     rsp, 8
 * 00000001401D14A1: call    loc_1401D1494
 * 00000001401D14A6: add     rsp, 8
 * 00000001401D14AA: call    loc_1401D149D
 * 00000001401D14AF: add     rsp, 8
 * 00000001401D14B3: call    loc_1401D14A6
 * 00000001401D14B8: add     rsp, 8
 * 00000001401D14BC: call    loc_1401D14AF
 * 00000001401D14C1: add     rsp, 8
 * 00000001401D14C5: call    loc_1401D14B8
 * 00000001401D14CA: add     rsp, 8
 * 00000001401D14CE: call    loc_1401D14C1
 * 00000001401D14D3: add     rsp, 8
 * 00000001401D14D7: call    loc_1401D14CA
 * 00000001401D14DC: add     rsp, 8
 * 00000001401D14E0: call    loc_1401D14D3
 * 00000001401D14E5: add     rsp, 8
 * 00000001401D14E9: call    loc_1401D14DC
 * 00000001401D14EE: add     rsp, 8
 * 00000001401D14F2: call    loc_1401D14E5
 * 00000001401D14F7: add     rsp, 8
 * 00000001401D14FB: call    loc_1401D14EE
 * 00000001401D1500: add     rsp, 8
 * 00000001401D1504: call    loc_1401D14F7
 * 00000001401D1509: add     rsp, 8
 * 00000001401D150D: call    loc_1401D1500
 * 00000001401D1512: add     rsp, 8
 * 00000001401D1516: call    loc_1401D1509
 * 00000001401D151B: add     rsp, 8
 * 00000001401D151F: call    loc_1401D1512
 * 00000001401D1524: add     rsp, 8
 * 00000001401D1528: call    loc_1401D151B
 * 00000001401D152D: add     rsp, 8
 * 00000001401D1531: call    loc_1401D1524
 * 00000001401D1536: add     rsp, 8
 * 00000001401D153A: call    loc_1401D152D
 * 00000001401D153F: add     rsp, 8
 * 00000001401D1543: call    loc_1401D1536
 * 00000001401D1548: add     rsp, 8
 * 00000001401D154C: call    loc_1401D153F
 * 00000001401D1551: add     rsp, 8
 * 00000001401D1555: call    loc_1401D1548
 * 00000001401D155A: add     rsp, 8
 * 00000001401D155E: call    loc_1401D1551
 * 00000001401D1563: add     rsp, 8
 * 00000001401D1567: call    loc_1401D155A
 * 00000001401D156C: add     rsp, 8
 * 00000001401D1570: call    loc_1401D1563
 * 00000001401D1575: add     rsp, 8
 * 00000001401D1579: call    loc_1401D156C
 * 00000001401D157E: add     rsp, 8
 * 00000001401D1582: call    loc_1401D1575
 * 00000001401D1587: add     rsp, 8
 * 00000001401D158B: call    loc_1401D157E
 * 00000001401D1590: add     rsp, 8
 * 00000001401D1594: call    loc_1401D1587
 * 00000001401D1599: add     rsp, 8
 * 00000001401D159D: call    loc_1401D1590
 * 00000001401D15A2: add     rsp, 8
 * 00000001401D15A6: mov     eax, 0DADAh
 * 00000001401D15AB: lfence
 * 00000001401D15AE: bt      [rsp-0F0h+arg_E8], 9
 * 00000001401D15B4: jnb     short loc_1401D15B7
 * 00000001401D15B6: sti
 * 00000001401D15B7: add     rsp, 10h
 * 00000001401D15BB: retn
 */
