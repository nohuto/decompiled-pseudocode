/*
 * XREFs of ZwWaitForSingleObject @ 0x1401C0150
 * Callers:
 *     PiDrvDbUnloadNodeWaitWorkerCallback @ 0x14013DCB0 (PiDrvDbUnloadNodeWaitWorkerCallback.c)
 *     CcDeletePartition @ 0x14027EC20 (CcDeletePartition.c)
 *     MiDeletePartitionResources @ 0x1402E9F58 (MiDeletePartitionResources.c)
 *     PfSnVolumeCheckSeekPenalty @ 0x140626660 (PfSnVolumeCheckSeekPenalty.c)
 *     PiDrvDbLoadNode @ 0x14067C6D4 (PiDrvDbLoadNode.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x1406981A4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     BiAcquireBcdSyncMutant @ 0x14073E050 (BiAcquireBcdSyncMutant.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x14077E6DC (FsRtlpRegisterProviderWithMUP.c)
 *     PfSnVolumeCheckIsSdBus @ 0x1408A1D08 (PfSnVolumeCheckIsSdBus.c)
 *     PspShutdownCsrProcess @ 0x1408C5984 (PspShutdownCsrProcess.c)
 *     ExpPartitionDestroy @ 0x140913C24 (ExpPartitionDestroy.c)
 *     CMFFlushHitsFile @ 0x140915E7C (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1409167B0 (CMFSystemThreadRoutine.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwWaitForSingleObject(HANDLE Handle, BOOLEAN Alertable, PLARGE_INTEGER Timeout)
{
  _disable();
  __readeflags();
  return KiServiceInternal(Handle);
}
