/*
 * XREFs of RtlpTpRevertCapture @ 0x180030D7C
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180030E70 (RtlCreateTimer.c)
 *     RtlUpdateTimer @ 0x18007EBE0 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x180081990 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimerQueueEx @ 0x180082C10 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x180089400 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     NtSetInformationThread @ 0x18009D030 (NtSetInformationThread.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenThreadToken @ 0x18009D310 (NtOpenThreadToken.c)
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
    v5 = NtSetInformationThread(-2LL, 5LL, &v6);
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
