/*
 * XREFs of IopPowerDispatch @ 0x140157ED0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400C1000 (IofCompleteRequest.c)
 *     PoSetPowerState @ 0x14016B610 (PoSetPowerState.c)
 */

__int64 __fastcall IopPowerDispatch(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r9
  unsigned int Status; // ebx
  ULONG Options; // ecx
  _DWORD *SecurityContext; // rcx
  int v9; // eax

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Status = 0;
  if ( CurrentStackLocation->MinorFunction )
  {
    switch ( CurrentStackLocation->MinorFunction )
    {
      case 1u:
        SecurityContext = CurrentStackLocation->Parameters.Create.SecurityContext;
        v9 = PoPowerSequence;
        *SecurityContext = PoPowerSequence;
        SecurityContext[1] = v9;
        SecurityContext[2] = v9;
        goto LABEL_6;
      case 2u:
        Options = CurrentStackLocation->Parameters.Create.Options;
        if ( !Options )
          goto LABEL_5;
        if ( Options == 1 )
        {
          PoSetPowerState(DeviceObject, DevicePowerState, CurrentStackLocation->Parameters.Power.State);
          goto LABEL_6;
        }
        break;
      case 3u:
        goto LABEL_6;
    }
  }
  Status = -1073741637;
LABEL_5:
  if ( Status == -1073741637 )
  {
    Status = Irp->IoStatus.Status;
    goto LABEL_7;
  }
LABEL_6:
  Irp->IoStatus.Status = Status;
LABEL_7:
  IofCompleteRequest(Irp, 0);
  return Status;
}
