/*
 * XREFs of UMPDOBJ_bCleanupWrap @ 0x1C0018830
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C00B1070 (NtGdiSetPUMPDOBJ.c)
 * Callees:
 *     ?bCleanupWorker@UMPDOBJ@@QEAAHXZ @ 0x1C001904C (-bCleanupWorker@UMPDOBJ@@QEAAHXZ.c)
 */

__int64 __fastcall UMPDOBJ_bCleanupWrap(UMPDOBJ *a1)
{
  return UMPDOBJ::bCleanupWorker(a1);
}
