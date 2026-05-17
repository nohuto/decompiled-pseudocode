/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x180082570
 * Callers:
 *     RtlDeleteTimerQueue @ 0x18010FAF0 (RtlDeleteTimerQueue.c)
 * Callees:
 *     sub_18003020C @ 0x18003020C (sub_18003020C.c)
 *     TpTimerOutstandingCallbackCount @ 0x180030D30 (TpTimerOutstandingCallbackCount.c)
 *     sub_180030D7C @ 0x180030D7C (sub_180030D7C.c)
 *     sub_1800310E4 @ 0x1800310E4 (sub_1800310E4.c)
 *     TpReleaseTimer @ 0x180031810 (TpReleaseTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     sub_1800826E4 @ 0x1800826E4 (sub_1800826E4.c)
 *     ZwWaitForAlertByThreadId @ 0x1800A0010 (ZwWaitForAlertByThreadId.c)
 */

__int64 __fastcall RtlDeleteTimerQueueEx(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // ebx
  __int64 i; // rsi
  int v8; // [rsp+20h] [rbp-58h]
  __int64 v9; // [rsp+30h] [rbp-48h]
  __int64 v10; // [rsp+98h] [rbp+20h] BYREF

  v8 = 0;
  v10 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( a1 )
  {
    v5 = sub_180030D7C(&v10, 0, a3);
    if ( v5 >= 0 )
    {
      if ( a2 )
      {
        if ( a2 == -1 )
          *(_QWORD *)(a1 + 40) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *(_QWORD *)(a1 + 16) = a2;
      }
      RtlAcquireSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      for ( i = *(_QWORD *)(a1 + 24); i != a1 + 24; i = v9 )
      {
        v9 = *(_QWORD *)i;
        _InterlockedOr((volatile signed __int32 *)(i + 48), 1u);
        v8 += TpTimerOutstandingCallbackCount(*(_QWORD *)(i + 64));
        TpReleaseTimer(*(_QWORD *)(i + 64));
        _m_prefetchw((const void *)(i + 48));
        if ( (_InterlockedAnd((volatile signed __int32 *)(i + 48), 0xFFFFFFFE) & 2) != 0 )
          sub_18003020C(i);
      }
      RtlReleaseSRWLockExclusive((volatile signed __int64 *)(a1 + 8));
      if ( _InterlockedDecrement((volatile signed __int32 *)a1) )
      {
        if ( a2 != -1 )
        {
          v5 = v8 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        ZwWaitForAlertByThreadId(a1, 0LL);
      }
      else
      {
        *(_QWORD *)(a1 + 40) = 0LL;
        sub_1800826E4(a1);
      }
      v5 = 0;
    }
LABEL_19:
    sub_1800310E4(v10);
    return (unsigned int)v5;
  }
  return 3221225711LL;
}
