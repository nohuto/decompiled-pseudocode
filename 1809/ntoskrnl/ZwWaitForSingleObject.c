/*
 * XREFs of ZwWaitForSingleObject @ 0x1401B81F0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400F5E00 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x14026B0A0 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x1402D0EAC (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14065CD00 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x1406A9B14 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140706088 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140713CA0 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140758F8C (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x14086581C (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140887614 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1408D6354 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1408D8C08 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408D94C0 (CMFSystemThreadRoutine.c)
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
