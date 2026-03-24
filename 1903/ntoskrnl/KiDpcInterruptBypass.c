/*
 * XREFs of KiDpcInterruptBypass @ 0x1401CA1A0
 * Callers:
 *     KiChainedDispatch @ 0x1401C4DA0 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401C55C0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401C5850 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401C5AE0 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401C5D70 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401C5FF0 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401C6AD0 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1401C8F50 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C91F0 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C9730 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CA1E0 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x1401CA8D0 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1401CA1A0
 * Reason: Hex-Rays returned no pseudocode for 0x1401CA1A0
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CA1A0: sub     rsp, 8
 * 00000001401CA1A4: mov     ecx, 2
 * 00000001401CA1A9: mov     cr8, rcx
 * 00000001401CA1AD: sti
 * 00000001401CA1AE: mov     al, [rbp-57h]
 * 00000001401CA1B1: mov     rcx, gs:188h
 * 00000001401CA1BA: mov     [rcx+186h], al
 * 00000001401CA1C0: call    KiDispatchInterrupt
 * 00000001401CA1C5: cli
 * 00000001401CA1C6: add     rsp, 8
 * 00000001401CA1CA: retn
 */
