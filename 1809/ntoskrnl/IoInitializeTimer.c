/*
 * XREFs of IoInitializeTimer @ 0x14081D690
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertTailList @ 0x14010BFD0 (ExInterlockedInsertTailList.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __stdcall IoInitializeTimer(PDEVICE_OBJECT DeviceObject, PIO_TIMER_ROUTINE TimerRoutine, PVOID Context)
{
  PIO_TIMER Timer; // rbx
  struct _IO_TIMER *PoolWithTag; // rax

  Timer = DeviceObject->Timer;
  if ( !Timer )
  {
    PoolWithTag = (struct _IO_TIMER *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x69546F49u);
    Timer = PoolWithTag;
    if ( !PoolWithTag )
      return -1073741670;
    memset(PoolWithTag, 0, sizeof(struct _IO_TIMER));
    Timer->DeviceObject = DeviceObject;
    Timer->Type = 9;
    DeviceObject->Timer = Timer;
  }
  Timer->TimerRoutine = (void (__fastcall *)(_DEVICE_OBJECT *, void *))TimerRoutine;
  Timer->Context = Context;
  ExInterlockedInsertTailList(&IopTimerQueueHead, &Timer->TimerList, &IopTimerLock);
  return 0;
}
