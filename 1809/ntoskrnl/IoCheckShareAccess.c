/*
 * XREFs of IoCheckShareAccess @ 0x1406CEC20
 * Callers:
 *     <none>
 * Callees:
 *     IoCheckLinkShareAccess @ 0x1405FADE0 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return IoCheckLinkShareAccess(
           DesiredAccess,
           DesiredShareAccess,
           (__int64)FileObject,
           &ShareAccess->OpenCount,
           0LL,
           Update != 0);
}
