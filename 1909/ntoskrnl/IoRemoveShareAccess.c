/*
 * XREFs of IoRemoveShareAccess @ 0x1406B6E50
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccessEx @ 0x1406B6F30 (IoRemoveLinkShareAccessEx.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccessEx(FileObject, ShareAccess, 0LL, 0LL);
}
