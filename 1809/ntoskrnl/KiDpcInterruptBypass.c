/*
 * XREFs of KiDpcInterruptBypass @ 0x1401C37C0
 * Callers:
 *     KiChainedDispatch @ 0x1401BD200 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDB70 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BDF50 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE330 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE710 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEAF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF730 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1401C2010 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2400 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2AA0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3800 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x1401C4050 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1401C37C0
 * Reason: Hex-Rays returned no pseudocode for 0x1401C37C0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C37C0: sub     rsp, 8
 * 00000001401C37C4: mov     ecx, 2
 * 00000001401C37C9: mov     cr8, rcx
 * 00000001401C37CD: sti
 * 00000001401C37CE: mov     al, [rbp-57h]
 * 00000001401C37D1: mov     rcx, gs:188h
 * 00000001401C37DA: mov     [rcx+186h], al
 * 00000001401C37E0: call    KiDispatchInterrupt
 * 00000001401C37E5: cli
 * 00000001401C37E6: add     rsp, 8
 * 00000001401C37EA: retn
 */
