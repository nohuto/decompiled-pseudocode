/*
 * XREFs of IoBuildAsynchronousFsdRequest @ 0x140127C40
 * Callers:
 *     FsRtlPrepareMdlWriteEx @ 0x1406ECE60 (FsRtlPrepareMdlWriteEx.c)
 *     FsRtlMdlReadEx @ 0x1406ECF80 (FsRtlMdlReadEx.c)
 *     ?Read@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14072F0B0 (-Read@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 *     ?Write@NT_DISK@@UEAAJ_KKPEAE@Z @ 0x14084FE80 (-Write@NT_DISK@@UEAAJ_KKPEAE@Z.c)
 * Callees:
 *     IopBuildAsynchronousFsdRequest @ 0x140127C80 (IopBuildAsynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildAsynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  void *retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildAsynchronousFsdRequest(
                 MajorFunction,
                 DeviceObject,
                 Buffer,
                 Length,
                 StartingOffset,
                 IoStatusBlock,
                 retaddr);
}
