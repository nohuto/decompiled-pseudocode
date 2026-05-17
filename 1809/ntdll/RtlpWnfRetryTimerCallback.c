/*
 * XREFs of RtlpWnfRetryTimerCallback @ 0x1800E00E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x180009E40 (RtlReleaseSRWLockShared.c)
 *     RtlAcquireSRWLockShared @ 0x180009F00 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180017E40 (RtlFreeHeap.c)
 *     RtlpWnfProcessCurrentDescriptor @ 0x18005E058 (RtlpWnfProcessCurrentDescriptor.c)
 *     NtGetCompleteWnfStateSubscription @ 0x1800A2030 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800DFC28 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(__int64 a1, char *a2, __int64 a3, __int64 a4)
{
  int v4; // r14d
  __int64 v5; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbp
  unsigned __int64 v9; // rdx
  unsigned __int64 *v10; // r8
  __int64 v11; // r9
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 *v14; // rbx
  char *v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax

  if ( qword_1801660D0 )
  {
    v4 = 0;
    RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801660D0 + 8), a2, a3, a4);
    v5 = qword_1801660D0;
    *(_QWORD *)(qword_1801660D0 + 88) = 0LL;
    RtlReleaseSRWLockShared((volatile signed __int64 *)(v5 + 8));
    while ( 1 )
    {
      v7 = 0LL;
      v8 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((volatile signed __int64 *)(qword_1801660D0 + 8), MEMORY[0x7FFE03B0], 2147352584LL, v6);
      v12 = qword_1801660D0;
      v13 = qword_1801660D0 + 16;
      v14 = *(__int64 **)(qword_1801660D0 + 16);
      while ( v14 != (__int64 *)v13 )
      {
        RtlAcquireSRWLockExclusive((unsigned __int64)(v14 + 3), v9, v10, v11);
        if ( *((_DWORD *)v14 + 24) == 2 && v8 >= v14[13] )
        {
          v7 = v14[11];
          v14[11] = 0LL;
          *((_DWORD *)v14 + 24) = 0;
          RtlReleaseSRWLockExclusive(v14 + 3);
          v12 = qword_1801660D0;
          break;
        }
        RtlReleaseSRWLockExclusive(v14 + 3);
        v12 = qword_1801660D0;
        v14 = (__int64 *)*v14;
        v13 = qword_1801660D0 + 16;
      }
      RtlReleaseSRWLockShared((volatile signed __int64 *)(v12 + 8));
      if ( !v7 )
        break;
      RtlpWnfCalculateAndSetNextTimer(v16, v15, v17, v18);
      v4 = 0;
      v21 = RtlpWnfProcessCurrentDescriptor(v7, (char *)1, v19, v20);
      if ( v21 == -1073741267 )
      {
        v4 = 1;
      }
      else
      {
        if ( !v21 )
          NtGetCompleteWnfStateSubscription();
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v7);
      }
    }
    if ( v4 )
      RtlpWnfCalculateAndSetNextTimer(v16, v15, v17, v18);
  }
}
