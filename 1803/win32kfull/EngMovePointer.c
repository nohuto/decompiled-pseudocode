/*
 * XREFs of EngMovePointer @ 0x1C023BFD0
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C023BFEC (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, 0);
}
