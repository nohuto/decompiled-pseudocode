/*
 * XREFs of IoGetOplockKeyContext @ 0x1402833D0
 * Callers:
 *     <none>
 * Callees:
 *     IopGetFileObjectExtension @ 0x1400B78B0 (IopGetFileObjectExtension.c)
 */

POPLOCK_KEY_ECP_CONTEXT __stdcall IoGetOplockKeyContext(PFILE_OBJECT FileObject)
{
  __int64 FileObjectExtension; // rax
  _OPLOCK_KEY_ECP_CONTEXT *v2; // r9

  FileObjectExtension = IopGetFileObjectExtension((__int64)FileObject, 6, 0LL);
  if ( FileObjectExtension && (*(_BYTE *)(FileObjectExtension + 2) & 2) != 0 )
    return (POPLOCK_KEY_ECP_CONTEXT)(FileObjectExtension + 20);
  return v2;
}
