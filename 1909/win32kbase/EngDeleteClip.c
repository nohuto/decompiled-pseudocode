/*
 * XREFs of EngDeleteClip @ 0x1C012F330
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C0072250 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  EngFreeMem(pco);
}
