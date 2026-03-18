/*
 * XREFs of EngDeleteClip @ 0x1C00D9A70
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C005AD60 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  EngFreeMem(pco);
}
