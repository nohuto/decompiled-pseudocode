/*
 * XREFs of IoCheckShareAccess @ 0x1406EE930
 * Callers:
 *     <none>
 * Callees:
 *     IoCheckLinkShareAccess @ 0x14062CCB0 (IoCheckLinkShareAccess.c)
 */

NTSTATUS __stdcall IoCheckShareAccess(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        BOOLEAN Update)
{
  return IoCheckLinkShareAccess(DesiredAccess, DesiredShareAccess, (__int64)FileObject, ShareAccess, 0LL, Update != 0);
}
