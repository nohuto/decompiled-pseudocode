/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01D6F60
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C0015590 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_QWORD *)(gptiCurrent + 1448LL),
    *(_QWORD *)(gptiCurrent + 1424LL),
    *(_QWORD *)(gptiCurrent + 1440LL),
    0LL,
    1LL,
    0,
    0LL,
    0LL);
  return 1LL;
}
