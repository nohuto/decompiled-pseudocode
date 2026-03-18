/*
 * XREFs of FsRtlIsTotalDeviceFailure @ 0x1400BFA90
 * Callers:
 *     MiIsRetryIoStatus @ 0x1400BF9D0 (MiIsRetryIoStatus.c)
 *     MmIsWriteErrorFatal @ 0x1400BFA14 (MmIsWriteErrorFatal.c)
 *     IopMountVolume @ 0x1406A0254 (IopMountVolume.c)
 * Callees:
 *     <none>
 */

BOOLEAN __stdcall FsRtlIsTotalDeviceFailure(NTSTATUS Status)
{
  return Status < 0 && Status != -1073741761 && Status != -1073741668 && Status != -1073740688;
}
