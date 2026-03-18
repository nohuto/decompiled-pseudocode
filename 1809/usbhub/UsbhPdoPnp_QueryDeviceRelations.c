/*
 * XREFs of UsbhPdoPnp_QueryDeviceRelations @ 0x1C001C730
 * Callers:
 *     <none>
 * Callees:
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 */

__int64 __fastcall UsbhPdoPnp_QueryDeviceRelations(_QWORD *Object, PIRP Irp)
{
  _DWORD *v4; // rdx
  unsigned int Status; // esi
  _QWORD *PoolWithTag; // r14

  if ( !Object )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v4 = (_DWORD *)Object[8];
  if ( !v4 )
    UsbhTrapFatal_Dbg(Object, 0LL);
  if ( *v4 != 1329877064 )
    UsbhTrapFatal_Dbg(Object, v4);
  Status = Irp->IoStatus.Status;
  if ( Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length == 4 )
  {
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x10uLL, 0x42554855u);
    if ( PoolWithTag )
    {
      ObfReferenceObject(Object);
      *(_DWORD *)PoolWithTag = 1;
      Status = 0;
      PoolWithTag[1] = Object;
    }
    else
    {
      Status = -1073741670;
    }
    Irp->IoStatus.Information = (unsigned __int64)PoolWithTag;
  }
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return Status;
}
