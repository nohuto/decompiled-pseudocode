/*
 * XREFs of ZwWaitForSingleObject @ 0x1401C0CD0
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x14013E1F0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x14027E980 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x1402E9CB8 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x14062A510 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x140677A54 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14068B714 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x14073FF50 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1407810FC (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A1548 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1408C5264 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140913684 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x1409158DC (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140916210 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
