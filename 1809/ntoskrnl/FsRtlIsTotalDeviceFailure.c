/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x140022ED0
 * Callers:
 *     MiIsRetryIoStatus @ 0x140022E18 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x140022E5C (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x1405A3E64 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
