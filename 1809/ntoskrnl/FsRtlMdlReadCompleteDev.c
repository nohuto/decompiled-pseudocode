/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x1400E0B20
 * Callers:
 *     <none>
 * Callees:
 *     CcMdlReadComplete2 @ 0x140662E84 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
