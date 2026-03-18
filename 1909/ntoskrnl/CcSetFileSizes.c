/*
 * XREFs of CcSetFileSizes @ 0x14013CF70
 * Callers:
 *     <none>
 * Callees:
 *     CcSetFileSizesEx @ 0x14007D570 (CcSetFileSizesEx.c)
 */

void __stdcall CcSetFileSizes(PFILE_OBJECT FileObject, PCC_FILE_SIZES FileSizes)
{
  CcSetFileSizesEx(FileObject, FileSizes);
}
