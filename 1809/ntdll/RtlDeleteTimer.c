/*
 * XREFs of RtlDeleteTimer @ 0x18002F570
 * Callers:
 *     RtlCancelTimer @ 0x1801113B0 (RtlCancelTimer.c)
 * Callees:
 *     RtlReleaseSRWLockExclusive @ 0x180015B60 (RtlReleaseSRWLockExclusive.c)
 *     RtlAcquireSRWLockExclusive @ 0x180015FF0 (RtlAcquireSRWLockExclusive.c)
 *     RtlpTpResumeImpersonation @ 0x18002BCB8 (RtlpTpResumeImpersonation.c)
 *     TpReleaseTimer @ 0x18002C440 (TpReleaseTimer.c)
 *     TpWaitForTimer @ 0x18002C6D0 (TpWaitForTimer.c)
 *     TpSetTimerEx @ 0x18002C800 (TpSetTimerEx.c)
 *     RtlpTpRevertCapture @ 0x18002F218 (RtlpTpRevertCapture.c)
 *     TpTimerOutstandingCallbackCount @ 0x18002F520 (TpTimerOutstandingCallbackCount.c)
 *     RtlpTpTimerRundown @ 0x18002F7D0 (RtlpTpTimerRundown.c)
 */

__int64 __fastcall RtlDeleteTimer(__int64 a1, volatile signed __int32 *a2, __int64 a3)
{
  unsigned __int64 v5; // rdx
  int v6; // edi
  unsigned __int64 *v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 **v10; // rax
  HANDLE v12; // [rsp+28h] [rbp-10h] BYREF
  int v13; // [rsp+58h] [rbp+20h]

  v12 = 0LL;
  if ( NtCurrentPeb()->Ldr->ShutdownInProgress )
    return 0LL;
  if ( !a1 )
    return 3221225711LL;
  if ( !a2 )
    return 3221225712LL;
  v6 = RtlpTpRevertCapture(&v12, 0, a3);
  if ( v6 >= 0 )
  {
    RtlAcquireSRWLockExclusive(*((_QWORD *)a2 + 7) + 8LL, v5, v7, v8);
    v9 = *(__int64 **)a2;
    v10 = (__int64 **)*((_QWORD *)a2 + 1);
    if ( *(volatile signed __int32 **)(*(_QWORD *)a2 + 8LL) != a2 || *v10 != (__int64 *)a2 )
      __fastfail(3u);
    *v10 = v9;
    v9[1] = (__int64)v10;
    RtlReleaseSRWLockExclusive((volatile signed __int64 *)(*((_QWORD *)a2 + 7) + 8LL));
    _InterlockedOr(a2 + 12, 1u);
    TpSetTimerEx(*((_QWORD *)a2 + 8), 0LL, 0, 0);
    if ( a3 == -1 )
    {
      TpWaitForTimer(*((_QWORD *)a2 + 8), 1u);
    }
    else if ( a3 )
    {
      *((_QWORD *)a2 + 9) = a3;
    }
    v13 = TpTimerOutstandingCallbackCount(*((_QWORD *)a2 + 8));
    TpReleaseTimer(*((_QWORD *)a2 + 8));
    _m_prefetchw((const void *)(a2 + 12));
    if ( (_InterlockedAnd(a2 + 12, 0xFFFFFFFE) & 2) != 0 )
    {
      RtlpTpTimerRundown(a2);
      v13 = 0;
    }
    v6 = v13 != 0 ? 0x103 : 0;
  }
  RtlpTpResumeImpersonation(v12);
  return (unsigned int)v6;
}
