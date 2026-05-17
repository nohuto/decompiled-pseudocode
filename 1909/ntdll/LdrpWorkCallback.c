/*
 * XREFs of LdrpWorkCallback @ 0x18002E1E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x18001B380 (RtlEnterCriticalSection.c)
 *     LdrpProcessWork @ 0x18002E26C (LdrpProcessWork.c)
 *     LdrpUpdateStatistics @ 0x18002E464 (LdrpUpdateStatistics.c)
 *     RtlLeaveCriticalSection @ 0x18003A8A0 (RtlLeaveCriticalSection.c)
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
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue != v0 )
      LdrpProcessWork(v0 - 8, 0LL);
  }
}
