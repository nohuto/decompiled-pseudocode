/*
 * XREFs of ?_EnableDisableEventsAndCollection@FxWmiIrpHandler@@CAJPEAV1@PEAU_IRP@@PEAVFxWmiProvider@@PEAVFxWmiInstance@@@Z @ 0x1C0019510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxWmiIrpHandler::_EnableDisableEventsAndCollection(
        FxWmiIrpHandler *This,
        _IRP *Irp,
        unsigned __int64 Provider,
        FxWmiInstance *Instance)
{
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 v7; // r8
  unsigned int v8; // eax
  unsigned int v9; // ebp
  int (__fastcall *v10)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8); // r9
  int Status; // edi
  unsigned __int8 v13; // r8
  unsigned __int64 v14; // rcx
  unsigned int v15; // eax

  Irp->IoStatus.Information = 0LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart < 0x30 )
  {
    Status = -1073741811;
    goto $Done_8;
  }
  if ( CurrentStackLocation->MinorFunction == 4 )
  {
    v7 = 1;
  }
  else
  {
    if ( CurrentStackLocation->MinorFunction != 5 )
    {
      if ( CurrentStackLocation->MinorFunction == 6 )
      {
        v13 = 1;
      }
      else
      {
        if ( CurrentStackLocation->MinorFunction != 7 )
        {
          Status = Irp->IoStatus.Status;
          goto $Done_8;
        }
        v13 = 0;
      }
      *(_BYTE *)(Provider + 209) = v13;
      v9 = 2;
      goto LABEL_8;
    }
    v7 = 0;
  }
  v8 = *(_DWORD *)(Provider + 196);
  *(_BYTE *)(Provider + 208) = v7;
  if ( (v8 & 4) != 0 )
    *(_QWORD *)(Provider + 184) = *(_QWORD *)&CurrentStackLocation->Parameters.CreatePipe.Parameters->CompletionMode;
  v9 = 1;
LABEL_8:
  v10 = *(int (__fastcall **)(WDFWMIPROVIDER__ *, _WDF_WMI_PROVIDER_CONTROL, unsigned __int8))(Provider + 200);
  if ( v10 )
  {
    v14 = Provider ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !*(_WORD *)(Provider + 10) )
      v14 = 0LL;
    Status = ((__int64 (__fastcall *)(unsigned __int64, _QWORD))v10)(v14, v9);
  }
  else
  {
    Status = 0;
  }
  if ( Status == 259 )
    Status = -1073741823;
  if ( Status < 0 )
  {
    if ( v9 == 1 )
    {
      v15 = *(_DWORD *)(Provider + 196);
      *(_BYTE *)(Provider + 208) = 0;
      if ( (v15 & 4) != 0 )
        *(_QWORD *)(Provider + 184) = 0LL;
    }
    else
    {
      *(_BYTE *)(Provider + 209) = 0;
    }
  }
$Done_8:
  Irp->IoStatus.Status = Status;
  IofCompleteRequest(Irp, 0);
  return (unsigned int)Status;
}
