/*
 * XREFs of IoBuildSynchronousFsdRequest @ 0x140662F30
 * Callers:
 *     IoShutdownSystem @ 0x140577C68 (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x140577E88 (IopShutdownBaseFileSystems.c)
 *     IopCreateArcNamesCd @ 0x1409D6910 (IopCreateArcNamesCd.c)
 * Callees:
 *     IopBuildSynchronousFsdRequest @ 0x140662ED0 (IopBuildSynchronousFsdRequest.c)
 */

PIRP __stdcall IoBuildSynchronousFsdRequest(
        ULONG MajorFunction,
        PDEVICE_OBJECT DeviceObject,
        PVOID Buffer,
        ULONG Length,
        PLARGE_INTEGER StartingOffset,
        PKEVENT Event,
        PIO_STATUS_BLOCK IoStatusBlock)
{
  __int64 retaddr; // [rsp+48h] [rbp+0h]

  return (PIRP)IopBuildSynchronousFsdRequest(
                 MajorFunction,
                 (__int64)DeviceObject,
                 Buffer,
                 Length,
                 StartingOffset,
                 (__int64)Event,
                 (__int64)IoStatusBlock,
                 retaddr);
}
