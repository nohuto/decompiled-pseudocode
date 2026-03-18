/*
 * XREFs of EngDeleteClip @ 0x1C0131AE0
 * Callers:
 *     <none>
 * Callees:
 *     EngFreeMem @ 0x1C0078B80 (EngFreeMem.c)
 */

void __stdcall EngDeleteClip(CLIPOBJ *pco)
{
  EngFreeMem(pco);
}
