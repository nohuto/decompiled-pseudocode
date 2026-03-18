/*
 * XREFs of xxxRemoveQueueCompletion @ 0x1C00BC4C0
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C00BC0B4 (xxxDesktopThreadWaiter.c)
 *     RawInputThread @ 0x1C00D2920 (RawInputThread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C011CAA8 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C012B584 (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C015C6B4 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _RemoveQueueCompletion @ 0x1C015E6B0 (_RemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C00BC580 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 */

__int64 xxxRemoveQueueCompletion()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  int v2; // esi
  _BYTE v4[32]; // [rsp+40h] [rbp-28h] BYREF
  __int64 v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  v0 = 0;
  v6 = 0LL;
  v1 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1400LL), v4, 1LL, &v5, &v6, 0);
  v2 = xxxHandleQueueCompletion(gptiCurrent, v1, v4, 1LL);
  if ( v2 == 3 )
    ZwAssociateWaitCompletionPacket(
      *(_QWORD *)(gptiCurrent + 1424LL),
      *(_QWORD *)(gptiCurrent + 1400LL),
      *(_QWORD *)(gptiCurrent + 1416LL),
      0LL,
      1LL,
      0,
      0LL,
      0LL);
  LOBYTE(v0) = v2 == 4;
  return v0;
}
