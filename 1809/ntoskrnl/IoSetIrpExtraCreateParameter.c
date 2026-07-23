/*
 * XREFs of IoSetIrpExtraCreateParameter @ 0x14069C450
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x1406AD3E4 (IopSymlinkAllocateAndAddECP.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST *ExtraCreateParameter)
{
  NTSTATUS result; // eax

  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741585;
  if ( Irp->UserBuffer )
    return -1073741584;
  Irp->UserBuffer = ExtraCreateParameter;
  result = 0;
  ExtraCreateParameter->Flags |= 8u;
  return result;
}
