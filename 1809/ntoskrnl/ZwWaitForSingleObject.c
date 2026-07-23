/*
 * XREFs of ZwWaitForSingleObject @ 0x1401B8370
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x1400F5EA0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x14026B390 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x1402D119C (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14065DEA0 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x1406AAD94 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140707308 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x140714F20 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14075A15C (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x140866A5C (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x140888854 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x1408D75F4 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1408D9EA8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1408DA760 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
