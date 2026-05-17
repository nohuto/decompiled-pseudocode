/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x18008C460
 * Callers:
 *     <none>
 * Callees:
 *     RtlpWnfProcessCurrentDescriptor @ 0x1800066EC (RtlpWnfProcessCurrentDescriptor.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x18008C310 (RtlpWnfCalculateAndSetNextTimer.c)
 *     NtGetCompleteWnfStateSubscription @ 0x18009EC00 (NtGetCompleteWnfStateSubscription.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(__int64 a1, unsigned __int64 a2, unsigned __int64 a3, unsigned __int64 a4)
{
  int v4; // r14d
  __int64 v5; // rcx
  unsigned __int64 v6; // r9
  __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 *v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r9
  int v16; // eax
  __int64 v17; // [rsp+30h] [rbp-18h]
  __int64 v18; // [rsp+38h] [rbp-10h]

  if ( qword_180166090 )
  {
    v4 = 0;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180166090 + 8), a2, a3, a4);
    v5 = qword_180166090;
    *(_QWORD *)(qword_180166090 + 88) = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v5 + 8));
    while ( 1 )
    {
      v7 = 0LL;
      v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_180166090 + 8), MEMORY[0x7FFE03B0], 0x7FFE0008uLL, v6);
      v9 = qword_180166090;
      v10 = qword_180166090 + 16;
      v11 = *(__int64 **)(qword_180166090 + 16);
      while ( v11 != (__int64 *)v10 )
      {
        RtlAcquireSRWLockExclusive(v11 + 3);
        if ( *((_DWORD *)v11 + 24) == 2 && v8 >= v11[13] )
        {
          v7 = v11[11];
          v11[11] = 0LL;
          *((_DWORD *)v11 + 24) = 0;
          RtlReleaseSRWLockExclusive(v11 + 3);
          v9 = qword_180166090;
          break;
        }
        RtlReleaseSRWLockExclusive(v11 + 3);
        v9 = qword_180166090;
        v11 = (__int64 *)*v11;
        v10 = qword_180166090 + 16;
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v9 + 8));
      if ( !v7 )
        break;
      RtlpWnfCalculateAndSetNextTimer(v13, v12, v14, v15);
      v4 = 0;
      v16 = RtlpWnfProcessCurrentDescriptor(v7, 1);
      if ( v16 == -1073741267 )
      {
        v4 = 1;
      }
      else
      {
        if ( !v16 )
          NtGetCompleteWnfStateSubscription(v7 + 8, v7, *(unsigned int *)(v7 + 24), 0LL, 0LL, 0, v17, v18);
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    if ( v4 )
      RtlpWnfCalculateAndSetNextTimer(v13, v12, v14, v15);
  }
}
