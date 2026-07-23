/*
 * XREFs of IoRemoveShareAccess @ 0x140690A10
 * Callers:
 *     <none>
 * Callees:
 *     IoRemoveLinkShareAccess @ 0x140690A30 (IoRemoveLinkShareAccess.c)
 */

void __stdcall IoRemoveShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoRemoveLinkShareAccess(FileObject, ShareAccess, 0LL);
}
