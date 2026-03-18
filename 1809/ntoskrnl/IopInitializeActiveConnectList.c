/*
 * XREFs of IopInitializeActiveConnectList @ 0x1409DF434
 * Callers:
 *     IoInitSystemPreDrivers @ 0x1409B1F54 (IoInitSystemPreDrivers.c)
 * Callees:
 *     <none>
 */

LIST_ENTRY *IopInitializeActiveConnectList()
{
  LIST_ENTRY *result; // rax

  LOWORD(ActiveConnectListLock.Header.Lock) = 1;
  qword_1404355E8 = (__int64)&ActiveConnectList;
  ActiveConnectList = (__int64)&ActiveConnectList;
  result = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Blink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.WaitListHead.Flink = &ActiveConnectListLock.Header.WaitListHead;
  ActiveConnectListLock.Header.Size = 6;
  ActiveConnectListLock.Header.SignalState = 1;
  return result;
}
