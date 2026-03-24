/*
 * XREFs of IoUpdateShareAccess @ 0x140702790
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccess @ 0x1405FA5C0 (IoUpdateLinkShareAccess.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccess((__int64)FileObject, ShareAccess, 0LL);
}
