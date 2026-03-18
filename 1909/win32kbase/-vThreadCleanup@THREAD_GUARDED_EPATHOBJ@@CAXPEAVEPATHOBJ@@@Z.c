/*
 * XREFs of ?vThreadCleanup@THREAD_GUARDED_EPATHOBJ@@CAXPEAVEPATHOBJ@@@Z @ 0x1C01216A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@EPATHOBJ@@QEAAXXZ @ 0x1C0015C80 (-vUnlock@EPATHOBJ@@QEAAXXZ.c)
 */

void __fastcall THREAD_GUARDED_EPATHOBJ::vThreadCleanup(struct EPATHOBJ *a1)
{
  EPATHOBJ::vUnlock(a1);
}
