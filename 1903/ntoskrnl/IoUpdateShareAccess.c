/*
 * XREFs of IoUpdateShareAccess @ 0x14073B160
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x1406290D0 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx((__int64)FileObject, ShareAccess, 0LL, 0);
}
