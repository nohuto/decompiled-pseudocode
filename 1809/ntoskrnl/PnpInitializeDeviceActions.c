/*
 * XREFs of PnpInitializeDeviceActions @ 0x1409C8170
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     <none>
 */

__int64 PnpInitializeDeviceActions()
{
  __int64 result; // rax

  _InterlockedExchange64(&PnpDeviceActionThread, 0LL);
  PnpEnumerationInProgress = 0;
  PnpEnumerationLock.Header.WaitListHead.Blink = &PnpEnumerationLock.Header.WaitListHead;
  PnpEnumerationLock.Header.WaitListHead.Flink = &PnpEnumerationLock.Header.WaitListHead;
  qword_1404346A8 = (__int64)&PnpEnumerationRequestList;
  PnpEnumerationRequestList = (__int64)&PnpEnumerationRequestList;
  result = 0LL;
  LOWORD(PnpEnumerationLock.Header.Lock) = 0;
  PnpEnumerationLock.Header.Size = 6;
  PnpEnumerationLock.Header.SignalState = 1;
  return result;
}
