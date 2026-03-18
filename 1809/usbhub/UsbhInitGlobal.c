/*
 * XREFs of UsbhInitGlobal @ 0x1C0029294
 * Callers:
 *     DriverEntry @ 0x1C0028F14 (DriverEntry.c)
 * Callees:
 *     memset @ 0x1C002B800 (memset.c)
 */

__int64 UsbhInitGlobal()
{
  __int64 result; // rax

  memset(&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels, 0, 0x1B8uLL);
  KeInitializeSpinLock((PKSPIN_LOCK)&WPP_MAIN_CB.Queue.Wcb.NumberOfChannels);
  KeInitializeSpinLock(&SpinLock);
  KeInitializeEvent((PRKEVENT)&WPP_MAIN_CB.Queue.Wcb.DeviceRoutine, SynchronizationEvent, 1u);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  WPP_MAIN_CB.Dpc.DeferredContext = (void *)0x378425548LL;
  dword_1C006E5D8 = 1734964085;
  LODWORD(WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink) = 1734964085;
  WPP_MAIN_CB.DeviceLock.Header.LockNV = 1734964085;
  WPP_MAIN_CB.ActiveThreadCount = 1734964085;
  *(_DWORD *)(&WPP_MAIN_CB.Spare1 + 1) = 1734964085;
  LODWORD(WPP_MAIN_CB.Reserved) = 1734964085;
  *((_DWORD *)&WPP_MAIN_CB.Reserved + 3) = 1734964085;
  dword_1C006E5E0 = 1734964085;
  qword_1C006E620 = (__int64)&qword_1C006E618;
  qword_1C006E618 = (__int64)&qword_1C006E618;
  WPP_MAIN_CB.Queue.Wcb.CurrentIrp = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  WPP_MAIN_CB.Queue.Wcb.DeviceObject = &WPP_MAIN_CB.Queue.Wcb.DeviceObject;
  qword_1C006E668 = (__int64)&qword_1C006E660;
  qword_1C006E660 = (__int64)&qword_1C006E660;
  result = 2LL;
  *(&WPP_MAIN_CB.AlignmentRequirement + 1) = 2;
  WPP_MAIN_CB.Dpc.TargetInfoAsUlong = 2;
  WPP_MAIN_CB.Dpc.SystemArgument2 = &WPP_MAIN_CB.Queue.Wcb.NumberOfChannels;
  WPP_MAIN_CB.Dpc.SystemArgument1 = 0LL;
  WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc = (_KDPC *)0x8000001F4LL;
  WPP_MAIN_CB.DeviceQueue.DeviceListHead.Flink = (_LIST_ENTRY *)32;
  LODWORD(WPP_MAIN_CB.DeviceQueue.DeviceListHead.Blink) = 1;
  LODWORD(WPP_MAIN_CB.DeviceQueue.Lock) = 0;
  *(unsigned __int64 *)((char *)&WPP_MAIN_CB.DeviceQueue.Lock + 4) = 10LL;
  HIDWORD(WPP_MAIN_CB.Dpc.DpcListEntry.Next) = 300;
  dword_1C006E628 = 3;
  *((_DWORD *)&WPP_MAIN_CB.DeviceQueue.1 + 1) = 2000;
  dword_1C006E638 = 1;
  dword_1C006E690 = 25;
  return result;
}
