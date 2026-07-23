/*
 * XREFs of KiDpcInterruptBypass @ 0x1401C3920
 * Callers:
 *     KiChainedDispatch @ 0x1401BD360 (KiChainedDispatch.c)
 *     KiInterruptDispatch @ 0x1401BDCD0 (KiInterruptDispatch.c)
 *     KiInterruptDispatchNoLock @ 0x1401BE0B0 (KiInterruptDispatchNoLock.c)
 *     KiInterruptDispatchNoLockNoEtw @ 0x1401BE490 (KiInterruptDispatchNoLockNoEtw.c)
 *     KiInterruptDispatchNoEOI @ 0x1401BE870 (KiInterruptDispatchNoEOI.c)
 *     KiSpuriousDispatchNoEOI @ 0x1401BEC50 (KiSpuriousDispatchNoEOI.c)
 *     KxIsrLinkage @ 0x1401BF890 (KxIsrLinkage.c)
 *     KiHvInterruptDispatch @ 0x1401C2170 (KiHvInterruptDispatch.c)
 *     KiVmbusInterruptDispatch @ 0x1401C2560 (KiVmbusInterruptDispatch.c)
 *     KiSwInterrupt @ 0x1401C2C00 (KiSwInterrupt.c)
 *     KiIpiInterrupt @ 0x1401C3960 (KiIpiInterrupt.c)
 * Callees:
 *     KiDispatchInterrupt @ 0x1401C41B0 (KiDispatchInterrupt.c)
 */

/*
 * Hex-Rays decompilation failed for KiDpcInterruptBypass @ 0x1401C3920
 * Reason: Hex-Rays returned no pseudocode for 0x1401C3920
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C3920: sub     rsp, 8
 * 00000001401C3924: mov     ecx, 2
 * 00000001401C3929: mov     cr8, rcx
 * 00000001401C392D: sti
 * 00000001401C392E: mov     al, [rbp-57h]
 * 00000001401C3931: mov     rcx, gs:188h
 * 00000001401C393A: mov     [rcx+186h], al
 * 00000001401C3940: call    KiDispatchInterrupt
 * 00000001401C3945: cli
 * 00000001401C3946: add     rsp, 8
 * 00000001401C394A: retn
 */
