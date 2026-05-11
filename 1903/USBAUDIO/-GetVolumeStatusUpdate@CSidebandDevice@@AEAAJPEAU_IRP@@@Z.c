/*
 * XREFs of ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D2BC
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BB7C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000A834 (-GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetVolumeStatusUpdate(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  unsigned int *p_NamedPipeType; // rsi
  NTSTATUS VolumeImmediate; // eax
  unsigned int v11; // [rsp+28h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 16 )
  {
    v6 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
LABEL_12:
      a2->IoStatus.Status = v6;
      IofCompleteRequest(a2, 0);
      return v6;
    }
    v7 = 39;
    v11 = 16;
LABEL_4:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      a3,
      v7,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      v11,
      -1073741811);
    goto LABEL_12;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    v6 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_12;
    v7 = 40;
    v11 = *p_NamedPipeType;
    goto LABEL_4;
  }
  if ( p_NamedPipeType[1] )
    VolumeImmediate = CSidebandDevice::GetVolumeImmediate(this, a2);
  else
    VolumeImmediate = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2, 0LL, (char *)this + 80);
  v6 = VolumeImmediate;
  if ( VolumeImmediate != 259 )
    goto LABEL_12;
  return v6;
}
