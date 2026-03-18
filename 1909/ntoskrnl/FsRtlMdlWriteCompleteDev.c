/*
 * XREFs of FsRtlMdlWriteCompleteDev @ 0x1406B1460
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlWriteComplete2 @ 0x1400FE680 (CcMdlWriteComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlWriteCompleteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PMDL MdlChain,
        PDEVICE_OBJECT DeviceObject)
{
  if ( (FileObject->Flags & 0x10) != 0 )
    return 0;
  CcMdlWriteComplete2((__int64)FileObject, (__int64 *)FileOffset, MdlChain, (__int64)DeviceObject);
  return 1;
}
