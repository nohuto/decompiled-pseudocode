/*
 * XREFs of ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D8D8
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BB7C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000AD1C (-GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetMuteStatusUpdate(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  unsigned int *p_NamedPipeType; // rsi
  NTSTATUS MuteImmediate; // eax
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
    v7 = 54;
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
    v7 = 55;
    v11 = *p_NamedPipeType;
    goto LABEL_4;
  }
  if ( p_NamedPipeType[1] )
    MuteImmediate = CSidebandDevice::GetMuteImmediate(this, a2);
  else
    MuteImmediate = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2, 0LL, (char *)this + 96);
  v6 = MuteImmediate;
  if ( MuteImmediate != 259 )
    goto LABEL_12;
  return v6;
}
