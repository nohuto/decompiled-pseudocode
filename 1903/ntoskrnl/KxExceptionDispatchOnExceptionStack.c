/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1401C4980
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1401C4940 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x140015DB0 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1401C4980
 * Reason: Hex-Rays returned no pseudocode for 0x1401C4980
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C4980: test    dword ptr [rbp+0F8h], 200h
 * 00000001401C498A: jz      short loc_1401C498D
 * 00000001401C498C: sti
 * 00000001401C498D: call    KiDispatchException
 * 00000001401C4992: cli
 * 00000001401C4993: mov     rsp, [rsp+arg_38]
 * 00000001401C4998: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
