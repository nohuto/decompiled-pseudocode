/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x180087090
 * Callers:
 *     RtlDeleteTimerQueue @ 0x1801113C0 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18002BCB8 (RtlpTpResumeImpersonation.c)
 *     TpReleaseTimer @ 0x18002C440 (TpReleaseTimer.c)
 *     RtlpTpRevertCapture @ 0x18002F218 (RtlpTpRevertCapture.c)
 *     TpTimerOutstandingCallbackCount @ 0x18002F520 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpTimerRundown @ 0x18002F7D0 (RtlpTpTimerRundown.c)
 *     RtlpTpTimerQueueRundown @ 0x1800871FC (RtlpTpTimerQueueRundown.c)
 *     NtWaitForAlertByThreadId @ 0x1800A3BF0 (NtWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  int v6; // ebx
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  unsigned __int64 i; // rsi
  int v11; // [rsp+20h] [rbp-48h]
  unsigned __int64 v12; // [rsp+30h] [rbp-38h]
  HANDLE v13; // [rsp+88h] [rbp+20h] BYREF

  v11 = 0;
  v13 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v6 = RtlpTpRevertCapture(&v13, 0, a3);
    if ( v6 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive(a1 + 8, v5, v7, v8);
      for ( i = *(_QWORD *)(a1 + 24); i != a1 + 24; i = v12 )
      {
        v12 = *(_QWORD *)i;
        _InterlockedOr((volatile signed __int32 *)(i + 48), 1u);
        v11 += TpTimerOutstandingCallbackCount(*(_QWORD *)(i + 64));
        TpReleaseTimer(*(_QWORD *)(i + 64));
        _m_prefetchw((const void *)(i + 48));
        if ( (_InterlockedAnd((volatile signed __int32 *)(i + 48), 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown(i);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v6 = v11 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        RtlpTpTimerQueueRundown(a1);
      }
      v6 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v13);
    return (unsigned int)v6;
  }
  return 3221225711LL;
}
