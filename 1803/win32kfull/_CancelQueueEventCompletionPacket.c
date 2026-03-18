/*
 * XREFs of _CancelQueueEventCompletionPacket @ 0x1C01A2280
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C003B2C0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 CancelQueueEventCompletionPacket()
{
  __int64 v0; // rdx

  if ( (unsigned int)ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1432LL), 0LL) == 259 )
  {
    LOBYTE(v0) = 1;
    ZwCancelWaitCompletionPacket(*(_QWORD *)(gptiCurrent + 1432LL), v0);
    KeSetEvent(*(PRKEVENT *)(gptiCurrent + 720LL), 1, 0);
  }
  return 1LL;
}
