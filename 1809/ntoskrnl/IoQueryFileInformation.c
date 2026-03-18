/*
 * XREFs of IoQueryFileInformation @ 0x1406CEE50
 * Callers:
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140661740 (IopQueryXxxInformation.c)
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
