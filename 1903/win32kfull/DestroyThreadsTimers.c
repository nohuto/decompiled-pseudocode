/*
 * XREFs of DestroyThreadsTimers @ 0x1C00DA8E0
 * Callers:
 *     <none>
 * Callees:
 *     FreeTimer @ 0x1C00DAA90 (FreeTimer.c)
 *     ThreadLockExchangeWorker @ 0x1C01EC098 (ThreadLockExchangeWorker.c)
 */

__int64 __fastcall DestroyThreadsTimers(struct _LIST_ENTRY *a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *v4; // rbx
  __int64 v5; // rdx
  __int64 v7; // [rsp+20h] [rbp-28h] BYREF
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+30h] [rbp-18h]

  v7 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v4 = gtmrListHead;
  v5 = gptiCurrent;
  v7 = *(_QWORD *)(gptiCurrent + 408LL);
  *(_QWORD *)(gptiCurrent + 408LL) = &v7;
  v8 = 0LL;
  while ( v4 != gtmrListHead )
  {
    ThreadLockExchangeWorker(&v4[-5].Blink, &v7);
    if ( v4[-3].Flink == a1 || v4[2].Flink == a1 )
      FreeTimer((struct tagTIMER *)&v4[-5].Blink);
    v4 = v4->Flink;
  }
  return ThreadUnlockWorker1(a1, v5, a3);
}
