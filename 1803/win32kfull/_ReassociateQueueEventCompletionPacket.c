/*
 * XREFs of _ReassociateQueueEventCompletionPacket @ 0x1C01A2310
 * Callers:
 *     NtUserMsgWaitForMultipleObjectsEx @ 0x1C003B2C0 (NtUserMsgWaitForMultipleObjectsEx.c)
 * Callees:
 *     <none>
 */

__int64 ReassociateQueueEventCompletionPacket()
{
  ZwAssociateWaitCompletionPacket(
    *(_QWORD *)(gptiCurrent + 1432LL),
    *(_QWORD *)(gptiCurrent + 1408LL),
    *(_QWORD *)(gptiCurrent + 1424LL),
    0LL,
    1LL,
    0,
    0LL,
    0LL);
  return 1LL;
}
