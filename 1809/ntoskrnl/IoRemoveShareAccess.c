/*
 * XREFs of IoRemoveShareAccess @ 0x14068F870
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccess @ 0x14068F890 (IoRemoveLinkShareAccess.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccess(FileObject, ShareAccess, 0LL);
}
