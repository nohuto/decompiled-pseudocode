/*
 * XREFs of ACPIDereferenceWaitWakePowerRequest @ 0x1C0024ED0
 * Callers:
 *     ACPIDeviceCompleteRequest @ 0x1C001E634 (ACPIDeviceCompleteRequest.c)
 *     ACPIDeviceIrpWaitWakeRequestPending @ 0x1C0024D60 (ACPIDeviceIrpWaitWakeRequestPending.c)
 *     ACPIDeviceCancelWaitWakeIrpCallBack @ 0x1C004E7F0 (ACPIDeviceCancelWaitWakeIrpCallBack.c)
 * Callees:
 *     ACPIFreeWaitWakePowerRequest @ 0x1C005F440 (ACPIFreeWaitWakePowerRequest.c)
 *     ACPIWakeEmulationDisable @ 0x1C005FA10 (ACPIWakeEmulationDisable.c)
 */

void __fastcall ACPIDereferenceWaitWakePowerRequest(char *Entry)
{
  KIRQL v2; // al
  int v3; // ebx

  v2 = KeAcquireSpinLockRaiseToDpc(&AcpiPowerLock);
  v3 = --*((_DWORD *)Entry + 28);
  KeReleaseSpinLock(&AcpiPowerLock, v2);
  if ( !v3 )
  {
    ACPIWakeEmulationDisable(Entry);
    if ( KeGetCurrentIrql() <= 1u )
    {
      ACPIFreeWaitWakePowerRequest(Entry);
    }
    else
    {
      *((_QWORD *)Entry + 15) = 0LL;
      *((_QWORD *)Entry + 17) = ACPIFreeWaitWakePowerRequest;
      *((_QWORD *)Entry + 18) = Entry;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(Entry + 120), DelayedWorkQueue);
    }
  }
}
