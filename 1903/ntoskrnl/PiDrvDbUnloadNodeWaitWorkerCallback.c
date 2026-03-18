/*
 * XREFs of PiDrvDbUnloadNodeWaitWorkerCallback @ 0x14013DCB0
 * Callers:
 *     <none>
 * Callees:
 *     ExReleaseResourceLite @ 0x14003BBD0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003C350 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     PnpDiagnosticTraceObjectWithStatus @ 0x14013DD54 (PnpDiagnosticTraceObjectWithStatus.c)
 *     ZwWaitForSingleObject @ 0x1401C0150 (ZwWaitForSingleObject.c)
 */

_QWORD *__fastcall PiDrvDbUnloadNodeWaitWorkerCallback(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdx

  ZwWaitForSingleObject(*(HANDLE *)(a1 + 472), 0, 0LL);
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 88), 1u);
  if ( !*(_BYTE *)(a1 + 489) )
  {
    *(_BYTE *)(a1 + 489) = 1;
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseUnload_Stop);
    PnpDiagnosticTraceObjectWithStatus(&KMPnPEvt_DriverDatabaseLoaded_Stop);
  }
  ExReleaseResourceLite((PERESOURCE)(a1 + 88));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
