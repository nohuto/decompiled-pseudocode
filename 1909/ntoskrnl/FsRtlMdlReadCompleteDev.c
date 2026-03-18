/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x1400FEF40
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x1406B15A4 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
