/*
 * XREFs of FsRtlOplockFsctrlEx @ 0x1406D8CB0
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlpOplockFsctrlInternal @ 0x1405E4C80 (FsRtlpOplockFsctrlInternal.c)
 */

NTSTATUS __stdcall FsRtlOplockFsctrlEx(POPLOCK Oplock, PIRP Irp, ULONG OpenCount, ULONG Flags)
{
  return FsRtlpOplockFsctrlInternal((__int64 *)Oplock, Irp, OpenCount, Flags, 0x7000u);
}
