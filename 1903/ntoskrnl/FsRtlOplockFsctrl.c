/*
 * XREFs of FsRtlOplockFsctrl @ 0x1406D6F70
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x1405E4C80 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrl(POPLOCK Oplock, PIRP Irp, ULONG OpenCount)
{
  return FsRtlpOplockFsctrlInternal((__int64 *)Oplock, Irp, OpenCount, 0, 0x7000u);
}
