/*
 * XREFs of sub_180030D7C @ 0x180030D7C
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
 *     ZwOpenThreadToken @ 0x18009CB60 (ZwOpenThreadToken.c)
 */

__int64 __fastcall sub_180030D7C(_QWORD *a1, int a2, __int64 a3)
{
  __int64 result; // rax
  int v5; // edi
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  *a1 = 0LL;
  if ( !NtCurrentTeb()->IsImpersonating )
    return 0LL;
  LOBYTE(a3) = 1;
  result = ZwOpenThreadToken(-2LL, a2 != 0 ? 6 : 4, a3, a1);
  if ( (int)result >= 0 )
  {
    v6 = 0LL;
    v5 = ZwSetInformationThread(-2LL, 5LL, &v6);
    if ( v5 < 0 )
    {
      ZwClose(*a1);
      *a1 = 0LL;
      return (unsigned int)v5;
    }
    return 0LL;
  }
  return result;
}
