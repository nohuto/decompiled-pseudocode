/*
 * XREFs of MiReturnCcAccessLog @ 0x1400DFAEC
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x14013B948 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x1406637F8 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MiQueuePageAccessLog @ 0x140088970 (MiQueuePageAccessLog.c)
 *     MmFreeAccessPfnBuffer @ 0x1400E269C (MmFreeAccessPfnBuffer.c)
 */

void __fastcall MiReturnCcAccessLog(signed __int64 P, int a2)
{
  _SLIST_ENTRY *v2; // r8

  v2 = (_SLIST_ENTRY *)P;
  if ( a2 )
    *(_QWORD *)(P + 32) = *(_QWORD *)(P + 24);
  if ( !qword_14043B980 )
    v2 = (_SLIST_ENTRY *)(-(__int64)(_InterlockedCompareExchange64(&qword_14043B980, P, 0LL) != 0) & P);
  if ( v2 )
  {
    if ( v2[2].Next == (_SLIST_ENTRY *)(&v2[4].Next + 1) )
      MmFreeAccessPfnBuffer(v2);
    else
      MiQueuePageAccessLog(v2);
  }
}
