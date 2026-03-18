/*
 * XREFs of EngDeleteClip @ 0x1C01077F0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C0060D80 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  EngFreeMem(pco);
}
