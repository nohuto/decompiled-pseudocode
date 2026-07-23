/*
 * XREFs of LdrpUnlockTlsDelayedReclaimTable @ 0x1800D5728
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009BF80 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009C0C0 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6830 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

void __fastcall LdrpUnlockTlsDelayedReclaimTable(int a1)
{
  char *v1; // rdi
  _RTL_SRWLOCK *v3; // rbp
  int v4; // esi
  void *ProcessHeap; // r15
  _QWORD *v6; // r8
  _QWORD *v7; // rbx

  v1 = (char *)&unk_1801662C0;
  v3 = &stru_1801662C8;
  v4 = 15;
  ProcessHeap = NtCurrentPeb()->ProcessHeap;
  do
  {
    if ( a1 )
    {
      v6 = *(_QWORD **)v1;
      if ( *(_QWORD *)v1 )
      {
        do
        {
          v7 = (_QWORD *)v6[1];
          RtlFreeHeap(ProcessHeap, 0, v6);
          v6 = v7;
        }
        while ( v7 );
        *(_QWORD *)v1 = 0LL;
      }
      *((_QWORD *)v1 + 1) = 1LL;
    }
    RtlReleaseSRWLockExclusive(v3);
    v3 -= 2;
    v1 -= 16;
    --v4;
  }
  while ( v4 >= 0 );
  if ( a1 )
  {
    LdrpActiveThreadCount = 1;
    LdrpTlsLock.0 = ($2F38BEDF952D5DA5F266621B11247D04)17LL;
  }
  RtlReleaseSRWLockShared(&LdrpTlsLock);
}
