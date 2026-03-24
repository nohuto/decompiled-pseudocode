/*
 * XREFs of KiDpcInterruptBypass @ 0x1401CAD20
 * Callers:
 *     KiChainedDispatch @ 0x1401C5920 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401C6140 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401C63D0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401C6660 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401C68F0 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401C6B70 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401C7650 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1401C9AD0 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C9D70 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401CA2B0 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401CAD60 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x1401CB450 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1401CAD20
 * Reason: Hex-Rays returned no pseudocode for 0x1401CAD20
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401CAD20: sub     rsp, 8
 * 00000001401CAD24: mov     ecx, 2
 * 00000001401CAD29: mov     cr8, rcx
 * 00000001401CAD2D: sti
 * 00000001401CAD2E: mov     al, [rbp-57h]
 * 00000001401CAD31: mov     rcx, gs:188h
 * 00000001401CAD3A: mov     [rcx+186h], al
 * 00000001401CAD40: call    KiDispatchInterrupt
 * 00000001401CAD45: cli
 * 00000001401CAD46: add     rsp, 8
 * 00000001401CAD4A: retn
 */
