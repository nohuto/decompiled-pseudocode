/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x1800D77A0
 * Callers:
 *     RtlCloneUserProcess @ 0x1800D8540 (RtlCloneUserProcess.c)
 *     RtlCompleteProcessCloning @ 0x1800D8820 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x1800D8AC0 (RtlPrepareForProcessCloning.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 */

signed __int64 __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  unsigned __int64 *v1; // rdi
  volatile signed __int64 *v3; // rbp
  int v4; // esi
  void *ProcessHeap; // r15
  unsigned __int64 v6; // r8
  unsigned __int64 v7; // rbx

  v1 = (unsigned __int64 *)&unk_1801662A0;
  v3 = (volatile signed __int64 *)&unk_1801662A8;
  v4 = 15;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  do
  {
    if ( a1 )
    {
      v6 = *v1;
      if ( *v1 )
      {
        do
        {
          v7 = *(_QWORD *)(v6 + 8);
          RtlFreeHeap((__int64)ProcessHeap, 0, v6);
          v6 = v7;
        }
        while ( v7 );
        *v1 = 0LL;
      }
      v1[1] = 1LL;
    }
    RtlReleaseSRWLockExclusive(v3);
    v3 -= 2;
    v1 -= 2;
    --v4;
  }
  while ( v4 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock = 17LL;
  }
  return RtlReleaseSRWLockShared(&LdrpTlsLock);
}
