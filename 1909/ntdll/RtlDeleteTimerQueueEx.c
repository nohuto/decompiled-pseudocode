/*
 * XREFs of RtlDeleteTimerQueueEx @ 0x180082C10
 * Callers:
 *     RtlDeleteTimerQueue @ 0x18010FC20 (RtlDeleteTimerQueue.c)
 * Callees:
 *     RtlpTpTimerRundown @ 0x18003020C (RtlpTpTimerRundown.c)
 *     TpTimerOutstandingCallbackCount @ 0x180030D30 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpRevertCapture @ 0x180030D7C (RtlpTpRevertCapture.c)
 *     RtlpTpResumeImpersonation @ 0x1800310E4 (RtlpTpResumeImpersonation.c)
 *     TpReleaseTimer @ 0x180031810 (TpReleaseTimer.c)
 *     RtlReleaseSRWLockExclusive @ 0x180035C30 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180039340 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpTimerQueueRundown @ 0x180082D84 (RtlpTpTimerQueueRundown.c)
 *     NtWaitForAlertByThreadId @ 0x1800A07C0 (NtWaitForAlertByThreadId.c)
 */

NTSTATUS __cdecl RtlDeleteTimerQueueEx(HANDLE TimerQueueHandle, HANDLE Event)
{
  int v4; // ebx
  char *i; // rsi
  int v7; // [rsp+20h] [rbp-58h]
  char *v8; // [rsp+30h] [rbp-48h]
  HANDLE v9; // [rsp+98h] [rbp+20h] BYREF

  v7 = 0;
  v9 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0;
  if ( TimerQueueHandle )
  {
    v4 = RtlpTpRevertCapture(&v9, 0);
    if ( v4 >= 0 )
    {
      if ( Event )
      {
        if ( Event == (HANDLE)-1LL )
          *((_QWORD *)TimerQueueHandle + 5) = NtCurrentTeb()->ClientId.UniqueThread;
        else
          *((_QWORD *)TimerQueueHandle + 2) = Event;
      }
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      for ( i = (char *)*((_QWORD *)TimerQueueHandle + 3); i != (char *)TimerQueueHandle + 24; i = v8 )
      {
        v8 = *(char **)i;
        _InterlockedOr((volatile signed __int32 *)i + 12, 1u);
        v7 += TpTimerOutstandingCallbackCount(*((_QWORD *)i + 8));
        TpReleaseTimer(*((PTP_TIMER *)i + 8));
        _m_prefetchw(i + 48);
        if ( (_InterlockedAnd((volatile signed __int32 *)i + 12, 0xFFFFFFFE) & 2) != 0 )
          RtlpTpTimerRundown((__int64)i);
      }
      RtlReleaseSRWLockExclusive((PRTL_SRWLOCK)TimerQueueHandle + 1);
      if ( _InterlockedDecrement((volatile signed __int32 *)TimerQueueHandle) )
      {
        if ( Event != (HANDLE)-1LL )
        {
          v4 = v7 != 0 ? 0x103 : 0;
          goto LABEL_19;
        }
        NtWaitForAlertByThreadId(TimerQueueHandle, 0LL);
      }
      else
      {
        *((_QWORD *)TimerQueueHandle + 5) = 0LL;
        RtlpTpTimerQueueRundown(TimerQueueHandle);
      }
      v4 = 0;
    }
LABEL_19:
    RtlpTpResumeImpersonation(v9);
    return v4;
  }
  return -1073741585;
}
