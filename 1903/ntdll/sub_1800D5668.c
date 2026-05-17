/*
 * XREFs of sub_1800D5668 @ 0x1800D5668
 * Callers:
 *     RtlCompleteProcessCloning @ 0x18009B8E0 (RtlCompleteProcessCloning.c)
 *     RtlPrepareForProcessCloning @ 0x18009BA20 (RtlPrepareForProcessCloning.c)
 *     RtlCloneUserProcess @ 0x1800D6770 (RtlCloneUserProcess.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 */

signed __int64 __fastcall sub_1800D5668(int a1)
{
  __int64 *v1; // rdi
  volatile signed __int64 *v3; // rbp
  int v4; // esi
  void *ProcessHeap; // r15
  __int64 v6; // r8
  __int64 v7; // rbx

  v1 = (__int64 *)&unk_1801662B0;
  v3 = (volatile signed __int64 *)&unk_1801662B8;
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
    dword_180165240 = 1;
    qword_1801661B8 = 17LL;
  }
  return RtlReleaseSRWLockShared(&qword_1801661B8);
}
