/*
 * XREFs of IoSetShareAccess @ 0x1406703D0
 * Callers:
 *     <none>
 * Callees:
 *     IoSetLinkShareAccess @ 0x1406703F0 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess)
{
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (_DWORD)FileObject, (_DWORD)ShareAccess, 0LL, 0);
}
