/*
 * XREFs of CLIPOBJ_bEnum @ 0x1C0120CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z @ 0x1C008B104 (-bEnum@XCLIPOBJ@@QEAAHKPEAXPEAK@Z.c)
 */

BOOL __stdcall CLIPOBJ_bEnum(CLIPOBJ *pco, ULONG cj, ULONG *pul)
{
  return XCLIPOBJ::bEnum((XCLIPOBJ *)pco, cj, (char *)pul, 0LL);
}
