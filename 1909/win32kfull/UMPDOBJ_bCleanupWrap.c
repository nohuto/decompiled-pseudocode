/*
 * XREFs of UMPDOBJ_bCleanupWrap @ 0x1C00DC050
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00DC064 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall UMPDOBJ_bCleanupWrap(UMPDOBJ *a1)
{
  return UMPDOBJ::bCleanupWorker(a1);
}
