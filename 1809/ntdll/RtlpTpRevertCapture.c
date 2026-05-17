/*
 * XREFs of RtlpTpRevertCapture @ 0x18002F218
 * Callers:
 *     RtlRegisterWait @ 0x18002BA40 (RtlRegisterWait.c)
 *     RtlCreateTimer @ 0x18002F2A0 (RtlCreateTimer.c)
 *     RtlDeleteTimer @ 0x18002F570 (RtlDeleteTimer.c)
 *     RtlDeregisterWaitEx @ 0x18002F8A0 (RtlDeregisterWaitEx.c)
 *     RtlUpdateTimer @ 0x180032010 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x1800321F0 (RtlCreateTimerQueue.c)
 *     RtlQueueWorkItem @ 0x180047CF0 (RtlQueueWorkItem.c)
 *     RtlDeleteTimerQueueEx @ 0x180087090 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x18008BC90 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x1800A0480 (NtSetInformationThread.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenThreadToken @ 0x1800A0760 (NtOpenThreadToken.c)
 */

__int64 __fastcall RtlpTpRevertCapture(HANDLE *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  LOBYTE(a3) = 1;
  result = NtOpenThreadToken(-2LL, a2 != 0 ? 6 : 4, a3, a1);
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    v5 = NtSetInformationThread(-2LL, 5LL, &v6, 8LL);
    if ( v5 < 0 )
    {
      NtClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v5;
    }
    return 0LL;
  }
  return result;
}
