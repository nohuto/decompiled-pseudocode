/*
 * XREFs of IoQueryFileInformation @ 0x1406ED840
 * Callers:
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 * Callees:
 *     IopQueryXxxInformation @ 0x14062EE34 (IopQueryXxxInformation.c)
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
