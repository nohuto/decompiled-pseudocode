/*
 * XREFs of UMPDOBJ_bCleanupWrap @ 0x1C00792A0
 * Callers:
 *     <none>
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C00792B4 (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall UMPDOBJ_bCleanupWrap(UMPDOBJ *a1)
{
  return UMPDOBJ::bCleanupWorker(a1);
}
