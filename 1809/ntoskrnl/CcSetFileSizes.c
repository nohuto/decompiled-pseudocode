/*
 * XREFs of CcSetFileSizes @ 0x14013B510
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x14007CFC0 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
