/*
 * XREFs of IoUpdateShareAccess @ 0x14073D0C0
 * Callers:
 *     <none>
 * Callees:
 *     IoUpdateLinkShareAccessEx @ 0x14062CF20 (IoUpdateLinkShareAccessEx.c)
 */

void __stdcall IoUpdateShareAccess(PFILE_OBJECT FileObject, PSHARE_ACCESS ShareAccess)
{
  IoUpdateLinkShareAccessEx((__int64)FileObject, ShareAccess, 0LL, 0);
}
