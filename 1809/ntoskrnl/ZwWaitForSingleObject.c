/*
 * XREFs of ZwWaitForSingleObject @ 0x1401B8210
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400F5E20 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x14026B1A0 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x1402D0FAC (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14065CCE0 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x1406A9AF4 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706068 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140713C80 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140758F6C (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408657FC (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1408875F4 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1408D6334 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1408D8BE8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94A0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle, Alertable, Timeout);
}
