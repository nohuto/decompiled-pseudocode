/*
 * XREFs of IoSetShareAccessEx @ 0x140706D80
 * Callers:
 *     <none>
 * Callees:
 *     IoSetLinkShareAccess @ 0x1406907B0 (IoSetLinkShareAccess.c)
 */

void __stdcall IoSetShareAccessEx(
        ACCESS_MASK DesiredAccess,
        ULONG DesiredShareAccess,
        PFILE_OBJECT FileObject,
        PSHARE_ACCESS ShareAccess,
        PBOOLEAN WritePermission)
{
  int v5; // eax

  if ( !WritePermission || *WritePermission )
    v5 = 0;
  else
    v5 = 0x80000000;
  IoSetLinkShareAccess(DesiredAccess, DesiredShareAccess, (__int64)FileObject, (__int64)ShareAccess, 0LL, v5);
}
