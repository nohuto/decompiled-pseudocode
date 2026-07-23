/*
 * XREFs of IoQueryFileInformation @ 0x1406D00D0
 * Callers:
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x1406628E0 (IopQueryXxxInformation.c)
 */

NTSTATUS __stdcall IoQueryFileInformation(
        PFILE_OBJECT FileObject,
        FILE_INFORMATION_CLASS FileInformationClass,
        ULONG Length,
        PVOID FileInformation,
        PULONG ReturnedLength)
{
  return IopQueryXxxInformation(
           FileObject,
           FileInformationClass,
           Length,
           0,
           (struct _IRP *)FileInformation,
           ReturnedLength,
           1);
}
