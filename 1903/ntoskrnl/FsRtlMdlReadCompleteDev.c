/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x1400FCDB0
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x1406AF674 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
