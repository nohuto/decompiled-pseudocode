/*
 * XREFs of LdrpWorkCallback @ 0x180070C60
 * Callers:
 *     <none>
 * Callees:
 *     RtlLeaveCriticalSection @ 0x180014020 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x180014370 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x180070CEC (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x180070EE4 (LdrpUpdateStatistics.c)
 */

void LdrpWorkCallback()
{
  __int64 *v0; // rbx
  __int64 v1; // rax

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v0 = (__int64 *)LdrpWorkQueue;
    v1 = *(_QWORD *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v1 + 8) != LdrpWorkQueue )
      __fastfail(3u);
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v1 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v0 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue != v0 )
      LdrpProcessWork(v0 - 8, 0LL);
  }
}
