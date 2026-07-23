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

void __fastcall LdrpWorkCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rax

  if ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v3 = (__int64 *)LdrpWorkQueue;
    v4 = *(_QWORD *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue || *(_QWORD *)(v4 + 8) != LdrpWorkQueue )
      __fastfail(3u);
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v4 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v3 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue != v3 )
      LdrpProcessWork(v3 - 8, 0LL);
  }
}
