/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01C3C10
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C0025360 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_QWORD *)(gptiCurrent + 1424LL),
    *(_QWORD *)(gptiCurrent + 1400LL),
    *(_QWORD *)(gptiCurrent + 1416LL),
    0LL,
    1LL,
    0,
    0LL,
    0LL);
  return 1LL;
}
