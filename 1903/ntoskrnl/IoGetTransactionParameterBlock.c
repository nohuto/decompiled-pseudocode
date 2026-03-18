/*
 * XREFs of IoGetTransactionParameterBlock @ 0x1400FE540
 * Callers:
 *     IopTrackLink @ 0x1406AFA80 (IopTrackLink.c)
 * Callees:
 *     <none>
 */

PTXN_PARAMETER_BLOCK __stdcall IoGetTransactionParameterBlock(PFILE_OBJECT FileObject)
{
  PTXN_PARAMETER_BLOCK *FileObjectExtension; // rax

  FileObjectExtension = (PTXN_PARAMETER_BLOCK *)FileObject->FileObjectExtension;
  if ( !FileObjectExtension || FileObjectExtension == IopRevocationExtension )
    return 0LL;
  else
    return FileObjectExtension[1];
}
