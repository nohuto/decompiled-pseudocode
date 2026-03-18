/*
 * XREFs of AcpiPccPlatformNotification @ 0x1C0058068
 * Callers:
 *     ACPIPccProcessSci @ 0x1C00578CC (ACPIPccProcessSci.c)
 * Callees:
 *     <none>
 */

void __fastcall AcpiPccPlatformNotification(char *Context)
{
  KSPIN_LOCK *v1; // rdi
  KIRQL v3; // si
  struct _IO_WORKITEM *WorkItem; // rax

  v1 = (KSPIN_LOCK *)(Context + 520);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)Context + 65);
  _InterlockedAnd16(*((volatile signed __int16 **)Context + 6), 0xFFF7u);
  if ( *((_QWORD *)Context + 18) )
  {
    WorkItem = IoAllocateWorkItem(*((PDEVICE_OBJECT *)Context + 20));
    if ( WorkItem )
      IoQueueWorkItemEx(WorkItem, AcpiPccPlatformNotificationWorker, DelayedWorkQueue, Context);
  }
  KeReleaseSpinLock(v1, v3);
}
