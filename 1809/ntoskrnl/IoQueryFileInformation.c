/*
 * XREFs of IoQueryFileInformation @ 0x1406CEE30
 * Callers:
 *     IopParseDevice @ 0x14063CCE0 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x140661720 (IopQueryXxxInformation.c)
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
