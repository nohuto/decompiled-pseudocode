/*
 * XREFs of KxExceptionDispatchOnExceptionStack @ 0x1401C5500
 * Callers:
 *     KiExceptionDispatchOnExceptionStack @ 0x1401C54C0 (KiExceptionDispatchOnExceptionStack.c)
 * Callees:
 *     KiDispatchException @ 0x1400161A0 (KiDispatchException.c)
 */

/*
 * Hex-Rays decompilation failed for KxExceptionDispatchOnExceptionStack @ 0x1401C5500
 * Reason: Hex-Rays returned no pseudocode for 0x1401C5500
 * Fallback: raw IDA disassembly follows.
 *
 * 00000001401C5500: test    dword ptr [rbp+0F8h], 200h
 * 00000001401C550A: jz      short loc_1401C550D
 * 00000001401C550C: sti
 * 00000001401C550D: call    KiDispatchException
 * 00000001401C5512: cli
 * 00000001401C5513: mov     rsp, [rsp+arg_38]
 * 00000001401C5518: jmp     short KiExceptionDispatchOnExceptionStackContinue
 */
