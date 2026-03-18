/*
 * XREFs of UMPDOBJ_bCleanupWrap @ 0x1C008F9C0
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C008F620 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C008F9D4 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall UMPDOBJ_bCleanupWrap(UMPDOBJ *a1)
{
  return UMPDOBJ::bCleanupWorker(a1);
}
