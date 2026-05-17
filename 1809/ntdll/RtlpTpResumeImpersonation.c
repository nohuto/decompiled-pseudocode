/*
 * XREFs of RtlpTpResumeImpersonation @ 0x18002BCB8
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
 */

NTSTATUS __fastcall RtlpTpResumeImpersonation(void *a1)
{
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    Handle = a1;
    NtSetInformationThread(-2LL, 5LL, &Handle, 8LL);
    return NtClose(Handle);
  }
  return result;
}
