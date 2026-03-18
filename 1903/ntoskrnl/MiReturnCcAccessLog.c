/*
 * XREFs of MiReturnCcAccessLog @ 0x1401132A4
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x14017D060 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x14066DB98 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x140098114 (MmFreeAccessPfnBuffer.c)
 *     MiQueuePageAccessLog @ 0x1401134B4 (MiQueuePageAccessLog.c)
 */

void __fastcall MiReturnCcAccessLog(signed __int64 P, int a2)
{
  _QWORD *v2; // r8

  v2 = (_QWORD *)P;
  if ( a2 )
    *(_QWORD *)(P + 32) = *(_QWORD *)(P + 24);
  if ( !qword_140466340 )
    v2 = (_QWORD *)(-(__int64)(_InterlockedCompareExchange64(&qword_140466340, P, 0LL) != 0) & P);
  if ( v2 )
  {
    if ( (_QWORD *)v2[4] == v2 + 9 )
      MmFreeAccessPfnBuffer(v2, 1);
    else
      MiQueuePageAccessLog(v2);
  }
}
