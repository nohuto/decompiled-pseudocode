/*
 * XREFs of PnpInitializeDeviceEvents @ 0x1409C8260
 * Callers:
 *     IopInitializePlugPlayServices @ 0x1409C8608 (IopInitializePlugPlayServices.c)
 * Callees:
 *     KiInitializeMutant @ 0x1400DD3F8 (KiInitializeMutant.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 PnpInitializeDeviceEvents()
{
  unsigned int v0; // ebx
  PVOID PoolWithTag; // rax
  __int64 v2; // r8
  __int64 v3; // rcx

  v0 = 0;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x88uLL, 0x4A706E50u);
  PnpDeviceEventList = (__int64)PoolWithTag;
  if ( PoolWithTag )
  {
    LOBYTE(v2) = 1;
    KiInitializeMutant((__int64)PoolWithTag + 8, 0LL, v2);
    v3 = PnpDeviceEventList;
    *(_DWORD *)(PnpDeviceEventList + 64) = 1;
    *(_QWORD *)(v3 + 72) = 0LL;
    *(_DWORD *)(v3 + 80) = 0;
    *(_WORD *)(v3 + 88) = 1;
    *(_BYTE *)(v3 + 90) = 6;
    *(_DWORD *)(v3 + 92) = 0;
    *(_QWORD *)(v3 + 104) = v3 + 96;
    *(_QWORD *)(v3 + 96) = v3 + 96;
    *(_QWORD *)(v3 + 128) = v3 + 120;
    *(_QWORD *)(v3 + 120) = v3 + 120;
    *(_DWORD *)v3 = 259;
    PnpNotificationInProgressLock.Event.Header.WaitListHead.Blink = &PnpNotificationInProgressLock.Event.Header.WaitListHead;
    PnpNotificationInProgressLock.Event.Header.WaitListHead.Flink = &PnpNotificationInProgressLock.Event.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Blink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpEventQueueEmpty.Header.WaitListHead.Flink = &PnpEventQueueEmpty.Header.WaitListHead;
    PnpNotificationInProgressLock.Count = 1;
    PnpNotificationInProgressLock.Owner = 0LL;
    PnpNotificationInProgressLock.Contention = 0;
    LOWORD(PnpNotificationInProgressLock.Event.Header.Lock) = 1;
    PnpNotificationInProgressLock.Event.Header.Size = 6;
    PnpNotificationInProgressLock.Event.Header.SignalState = 0;
    LOWORD(PnpEventQueueEmpty.Header.Lock) = 0;
    PnpEventQueueEmpty.Header.Size = 6;
    PnpEventQueueEmpty.Header.SignalState = 1;
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v0;
}
