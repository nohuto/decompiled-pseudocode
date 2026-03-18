/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1400DFC10
 * Callers:
 *     MiIsRetryIoStatus @ 0x1400DFB50 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1400DFB94 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x140681CF4 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
