/*
 * XREFs of EngMovePointer @ 0x1C026C210
 * Callers:
 *     <none>
 * Callees:
 *     EngpMovePointer @ 0x1C0161EA8 (EngpMovePointer.c)
 */

void __stdcall EngMovePointer(SURFOBJ *pso, LONG x, LONG y, RECTL *prcl)
{
  EngpMovePointer(pso, x, y, prcl, 0);
}
