/*
 * XREFs of ?CompleteWmiQueryAllDataRequest@FxWmiIrpHandler@@AEAAXPEAU_IRP@@JK@Z @ 0x1C0040FC4
 * Callers:
 *     ?CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z @ 0x1C00410A8 (-CompleteWmiRequest@FxWmiIrpHandler@@AEAAJPEAU_IRP@@JK@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxWmiIrpHandler::CompleteWmiQueryAllDataRequest(
        FxWmiIrpHandler *this,
        _IRP *Irp,
        int Status,
        unsigned int BufferUsed)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // r11
  int v5; // ebx
  _NAMED_PIPE_CREATE_PARAMETERS *Parameters; // r10
  unsigned int v7; // ecx

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5 = Status;
  Parameters = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  v7 = BufferUsed + Parameters[1].CompletionMode;
  if ( Status < 0 )
    goto LABEL_6;
  Status = -1073741789;
  if ( v7 <= CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
    Status = v5;
  if ( Status < 0 )
  {
LABEL_6:
    if ( Status == -1073741789 )
    {
      Parameters[1].CompletionMode = v7;
      Parameters->NamedPipeType = 56;
      v7 = 56;
      Parameters[1].ReadMode = 32;
      Status = 0;
    }
    else
    {
      v7 = 0;
    }
  }
  else
  {
    *(_QWORD *)&Parameters->InboundQuota = MEMORY[0xFFFFF78000000014];
    Parameters->NamedPipeType = v7;
  }
  Irp->IoStatus.Information = v7;
  Irp->IoStatus.Status = Status;
}
