/*
 * XREFs of ACPIInitShutdownNotification @ 0x1C0090A8C
 * Callers:
 *     ACPIRootIrpStartDevice @ 0x1C00BB190 (ACPIRootIrpStartDevice.c)
 * Callees:
 *     OSReadRegValue @ 0x1C0090BC8 (OSReadRegValue.c)
 */

PVOID ACPIInitShutdownNotification()
{
  PVOID result; // rax

  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0xD0uLL, 0x44706341u);
  AcpiShutdownNotification = result;
  if ( result )
  {
    KeInitializeGuardedMutex(&AcpiShutdownInProgressWorkerLock);
    result = (PVOID)OSReadRegValue("NotifyOsShutdownEnabled");
    AcpiNotifyOsShutdownEnabled = 0;
  }
  return result;
}
