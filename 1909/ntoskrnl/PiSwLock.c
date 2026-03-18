/*
 * XREFs of PiSwLock @ 0x140721510
 * Callers:
 *     PiSwIrpStartCreateWorker @ 0x140720DAC (PiSwIrpStartCreateWorker.c)
 *     PiSwPdoPnPDispatch @ 0x140721150 (PiSwPdoPnPDispatch.c)
 *     PiSwCompleteCreate @ 0x1407222B8 (PiSwCompleteCreate.c)
 *     PiSwIrpPropertySet @ 0x140744064 (PiSwIrpPropertySet.c)
 *     PiSwIrpCleanup @ 0x14074DE7C (PiSwIrpCleanup.c)
 *     PiSwIrpInterfaceSetState @ 0x14077A2D0 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14077A424 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpInterfacePropertySet @ 0x14077A8C4 (PiSwIrpInterfacePropertySet.c)
 *     PiSwDeviceFree @ 0x140782D8C (PiSwDeviceFree.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003C090 (ExAcquireResourceExclusiveLite.c)
 */

BOOLEAN PiSwLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
}
