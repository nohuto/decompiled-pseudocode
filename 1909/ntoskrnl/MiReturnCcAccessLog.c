/*
 * XREFs of MiReturnCcAccessLog @ 0x1400901DC
 * Callers:
 *     MiCheckAndProcessCcAccessLog @ 0x14017D750 (MiCheckAndProcessCcAccessLog.c)
 *     MmPrefetchForCacheManager @ 0x1406475F8 (MmPrefetchForCacheManager.c)
 * Callees:
 *     MmFreeAccessPfnBuffer @ 0x1400D4890 (MmFreeAccessPfnBuffer.c)
 *     MiQueuePageAccessLog @ 0x14013AEF4 (MiQueuePageAccessLog.c)
 */

__int64 __fastcall MiReturnCcAccessLog(signed __int64 P, int a2)
{
  _QWORD *v2; // r8
  __int64 result; // rax

  v2 = (_QWORD *)P;
  if ( a2 )
  {
    result = *(_QWORD *)(P + 24);
    *(_QWORD *)(P + 32) = result;
  }
  if ( !qword_140466040 )
  {
    result = -_InterlockedCompareExchange64(&qword_140466040, P, 0LL);
    v2 = (_QWORD *)(-(__int64)(result != 0) & P);
  }
  if ( v2 )
  {
    if ( (_QWORD *)v2[4] == v2 + 9 )
      return MmFreeAccessPfnBuffer(v2);
    else
      return MiQueuePageAccessLog(v2);
  }
  return result;
}
