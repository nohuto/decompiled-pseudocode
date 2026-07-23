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
 *     NtGetCompleteWnfStateSubscription @ 0x1800A2050 (NtGetCompleteWnfStateSubscription.c)
 *     RtlpWnfCalculateAndSetNextTimer @ 0x1800DFC28 (RtlpWnfCalculateAndSetNextTimer.c)
 */

void __fastcall RtlpWnfRetryTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  int v3; // r14d
  _RTL_SRWLOCK *v4; // rcx
  _WNF_STATE_NAME *Value; // rdi
  unsigned __int64 v6; // rbp
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rax
  _RTL_SRWLOCK *v9; // rbx
  int v10; // eax

  if ( qword_1801660D0 )
  {
    v3 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 8));
    v4 = (_RTL_SRWLOCK *)qword_1801660D0;
    *(_QWORD *)(qword_1801660D0 + 88) = 0LL;
    RtlReleaseSRWLockShared(v4 + 1);
    while ( 1 )
    {
      Value = 0LL;
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_1801660D0 + 8));
      v7 = (_RTL_SRWLOCK *)qword_1801660D0;
      v8 = qword_1801660D0 + 16;
      v9 = *(_RTL_SRWLOCK **)(qword_1801660D0 + 16);
      while ( v9 != (_RTL_SRWLOCK *)v8 )
      {
        RtlAcquireSRWLockExclusive(v9 + 3);
        if ( v9[12].0 == 2 && v6 >= v9[13].Value )
        {
          Value = (_WNF_STATE_NAME *)v9[11].Value;
          v9[11].Value = 0LL;
          *(_DWORD *)&v9[12].0 = 0;
          RtlReleaseSRWLockExclusive(v9 + 3);
          v7 = (_RTL_SRWLOCK *)qword_1801660D0;
          break;
        }
        RtlReleaseSRWLockExclusive(v9 + 3);
        v7 = (_RTL_SRWLOCK *)qword_1801660D0;
        v9 = (_RTL_SRWLOCK *)v9->Value;
        v8 = qword_1801660D0 + 16;
      }
      RtlReleaseSRWLockShared(v7 + 1);
      if ( !Value )
        break;
      RtlpWnfCalculateAndSetNextTimer();
      v3 = 0;
      v10 = RtlpWnfProcessCurrentDescriptor(Value, 1);
      if ( v10 == -1073741267 )
      {
        v3 = 1;
      }
      else
      {
        if ( !v10 )
          NtGetCompleteWnfStateSubscription(Value + 1, (ULONG64 *)Value, Value[3].Data[0], 0, 0LL, 0);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Value);
      }
    }
    if ( v3 )
      RtlpWnfCalculateAndSetNextTimer();
  }
}
