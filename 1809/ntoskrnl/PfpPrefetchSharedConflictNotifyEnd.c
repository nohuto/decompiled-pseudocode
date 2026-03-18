/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x140864630
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPostReleaseEx @ 0x1400043BC (KeAbPostReleaseEx.c)
 *     KeAbPreAcquire @ 0x14004E270 (KeAbPreAcquire.c)
 *     PfpPrefetchSharedDeref @ 0x14065CA24 (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(volatile signed __int64 *a1, _KLOCK_ENTRY *a2)
{
  ULONG_PTR *v4; // rbx

  if ( a2 )
  {
    v4 = (ULONG_PTR *)a1;
    if ( !a1 )
      v4 = &PfGlobals;
    KeAbPreAcquire((ULONG_PTR)v4, (__int64)a2, 0);
    KeAbPostReleaseEx((ULONG_PTR)v4, a2);
  }
  if ( a1 )
    PfpPrefetchSharedDeref(a1);
}
