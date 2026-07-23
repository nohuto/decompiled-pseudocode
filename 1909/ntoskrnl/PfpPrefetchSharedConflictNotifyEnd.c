/*
 * XREFs of PfpPrefetchSharedConflictNotifyEnd @ 0x1408A06D0
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14003E350 (KeAbPreAcquire.c)
 *     KeAbPostReleaseEx @ 0x140109CF0 (KeAbPostReleaseEx.c)
 *     PfpPrefetchSharedDeref @ 0x14062A0B8 (PfpPrefetchSharedDeref.c)
 */

void __fastcall PfpPrefetchSharedConflictNotifyEnd(volatile signed __int64 *a1, _KLOCK_ENTRY *a2)
{
  ULONG_PTR *v4; // rbx

  if ( a2 )
  {
    v4 = (ULONG_PTR *)a1;
    if ( !a1 )
      v4 = &PfGlobals;
    KeAbPreAcquire((ULONG_PTR)v4, &a2->TreeNode, 0);
    KeAbPostReleaseEx((ULONG_PTR)v4, a2);
  }
  if ( a1 )
    PfpPrefetchSharedDeref(a1);
}
