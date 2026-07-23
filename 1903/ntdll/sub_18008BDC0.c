/*
 * XREFs of sub_18008BDC0 @ 0x18008BDC0
 * Callers:
 *     <none>
 * Callees:
 *     sub_1800066EC @ 0x1800066EC (sub_1800066EC.c)
 *     RtlAcquireSRWLockShared @ 0x18001A940 (RtlAcquireSRWLockShared.c)
 *     RtlReleaseSRWLockShared @ 0x18001AAF0 (RtlReleaseSRWLockShared.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlFreeHeap @ 0x180040690 (RtlFreeHeap.c)
 *     sub_18008BC70 @ 0x18008BC70 (sub_18008BC70.c)
 *     ZwGetCompleteWnfStateSubscription @ 0x18009E450 (ZwGetCompleteWnfStateSubscription.c)
 */

void __fastcall sub_18008BDC0(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  int v3; // r14d
  _RTL_SRWLOCK *v4; // rcx
  _WNF_STATE_NAME *Ptr; // rdi
  unsigned __int64 v6; // rbp
  _RTL_SRWLOCK *v7; // rcx
  __int64 v8; // rax
  _RTL_SRWLOCK *v9; // rbx
  int v10; // eax

  if ( qword_180166088 )
  {
    v3 = 0;
    RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180166088 + 8));
    v4 = (_RTL_SRWLOCK *)qword_180166088;
    *(_QWORD *)(qword_180166088 + 88) = 0LL;
    RtlReleaseSRWLockShared(v4 + 1);
    while ( 1 )
    {
      Ptr = 0LL;
      v6 = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - RtlpFreezeTimeBias + 500000;
      RtlAcquireSRWLockShared((PRTL_SRWLOCK)(qword_180166088 + 8));
      v7 = (_RTL_SRWLOCK *)qword_180166088;
      v8 = qword_180166088 + 16;
      v9 = *(_RTL_SRWLOCK **)(qword_180166088 + 16);
      while ( v9 != (_RTL_SRWLOCK *)v8 )
      {
        RtlAcquireSRWLockExclusive(v9 + 3);
        if ( LODWORD(v9[12].Ptr) == 2 && (PVOID)v6 >= v9[13].Ptr )
        {
          Ptr = (_WNF_STATE_NAME *)v9[11].Ptr;
          v9[11].Ptr = 0LL;
          LODWORD(v9[12].Ptr) = 0;
          RtlReleaseSRWLockExclusive(v9 + 3);
          v7 = (_RTL_SRWLOCK *)qword_180166088;
          break;
        }
        RtlReleaseSRWLockExclusive(v9 + 3);
        v7 = (_RTL_SRWLOCK *)qword_180166088;
        v9 = (_RTL_SRWLOCK *)v9->Ptr;
        v8 = qword_180166088 + 16;
      }
      RtlReleaseSRWLockShared(v7 + 1);
      if ( !Ptr )
        break;
      sub_18008BC70();
      v3 = 0;
      v10 = sub_1800066EC(Ptr, 1);
      if ( v10 == -1073741267 )
      {
        v3 = 1;
      }
      else
      {
        if ( !v10 )
          ZwGetCompleteWnfStateSubscription(Ptr + 1, (ULONG64 *)Ptr, Ptr[3].Data[0], 0, 0LL, 0);
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Ptr);
      }
    }
    if ( v3 )
      sub_18008BC70();
  }
}
