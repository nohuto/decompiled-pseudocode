/*
 * XREFs of xxxRemoveQueueCompletion @ 0x1C000DEEC
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C000DC88 (xxxDesktopThreadWaiter.c)
 *     RawInputThread @ 0x1C0077DE0 (RawInputThread.c)
 *     xxxWaitForDITMouseInjectionFlush @ 0x1C00FEDC8 (xxxWaitForDITMouseInjectionFlush.c)
 *     ?xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z @ 0x1C010DC0C (-xxxPollAndWaitForSingleObject@@YAKPEAU_KEVENT@@PEAXK@Z.c)
 *     xxxMsgWaitForMultipleObjectsEx @ 0x1C0164824 (xxxMsgWaitForMultipleObjectsEx.c)
 *     _RemoveQueueCompletion @ 0x1C0165C10 (_RemoveQueueCompletion.c)
 * Callees:
 *     ?xxxHandleQueueCompletion@@YA?AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLETION_INFORMATION@@W4tagQUEUE_COMPLETION_DRAINER@@@Z @ 0x1C000DFC0 (-xxxHandleQueueCompletion@@YA-AW4QueueCompletionStatus@@PEAUtagTHREADINFO@@JQEAU_FILE_IO_COMPLET.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 xxxRemoveQueueCompletion()
{
  unsigned int v0; // ebx
  unsigned int v1; // eax
  int v2; // esi
  _BYTE v4[32]; // [rsp+40h] [rbp-28h] BYREF
  char v5; // [rsp+70h] [rbp+8h] BYREF
  __int64 v6; // [rsp+78h] [rbp+10h] BYREF

  memset(v4, 0, sizeof(v4));
  v0 = 0;
  v6 = 0LL;
  v1 = ZwRemoveIoCompletionEx(*(_QWORD *)(gptiCurrent + 1424LL), v4, 1LL, &v5, &v6, 0);
  v2 = xxxHandleQueueCompletion(gptiCurrent, v1, v4, 1LL);
  if ( v2 == 3 )
    ZwAssociateWaitCompletionPacket(
      *(_QWORD *)(gptiCurrent + 1448LL),
      *(_QWORD *)(gptiCurrent + 1424LL),
      *(_QWORD *)(gptiCurrent + 1440LL),
      0LL,
      1LL,
      0,
      0LL,
      0LL);
  LOBYTE(v0) = v2 == 4;
  return v0;
}
