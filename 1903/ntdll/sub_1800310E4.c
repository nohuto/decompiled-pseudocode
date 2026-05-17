/*
 * XREFs of sub_1800310E4 @ 0x1800310E4
 * Callers:
 *     RtlQueueWorkItem @ 0x18002F7D0 (RtlQueueWorkItem.c)
 *     RtlDeregisterWaitEx @ 0x18002FE20 (RtlDeregisterWaitEx.c)
 *     RtlRegisterWait @ 0x180030960 (RtlRegisterWait.c)
 *     RtlDeleteTimer @ 0x180030BE0 (RtlDeleteTimer.c)
 *     RtlCreateTimer @ 0x180030E70 (RtlCreateTimer.c)
 *     RtlUpdateTimer @ 0x18007E540 (RtlUpdateTimer.c)
 *     RtlCreateTimerQueue @ 0x1800812F0 (RtlCreateTimerQueue.c)
 *     RtlDeleteTimerQueueEx @ 0x180082570 (RtlDeleteTimerQueueEx.c)
 *     RtlSetIoCompletionCallback @ 0x180088D60 (RtlSetIoCompletionCallback.c)
 * Callees:
 *     ZwSetInformationThread @ 0x18009C880 (ZwSetInformationThread.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 */

__int64 __fastcall sub_1800310E4(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    v2 = a1;
    ZwSetInformationThread(-2LL, 5LL, &v2);
    return ZwClose(v2);
  }
  return result;
}
