/*
 * XREFs of IoValidateDeviceIoControlAccess @ 0x1401418C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoValidateDeviceIoControlAccess(PIRP Irp, ULONG RequiredAccess)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r8

  if ( (RequiredAccess & 3) == 0 )
    return -1073741811;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( (unsigned __int8)(CurrentStackLocation->MajorFunction - 13) > 1u )
    return -1073741811;
  if ( Irp->RequestorMode
    && (RequiredAccess & (CurrentStackLocation->Flags & 1 | (CurrentStackLocation->Flags >> 1) & 2)) != RequiredAccess )
  {
    return -1073741790;
  }
  return 0;
}
