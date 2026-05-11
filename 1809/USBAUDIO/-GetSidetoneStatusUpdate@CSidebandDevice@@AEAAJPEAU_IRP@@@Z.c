/*
 * XREFs of ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CCFC
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000A994 (-GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneStatusUpdate(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int v6; // ebx
  unsigned __int16 v7; // r9
  unsigned int *p_NamedPipeType; // rsi
  NTSTATUS SidetoneImmediate; // eax
  unsigned int v11; // [rsp+28h] [rbp-20h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 20 )
  {
    v6 = -1073741811;
    v7 = 59;
    v11 = 20;
LABEL_3:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      a3,
      v7,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v11,
      -1073741811);
LABEL_10:
    a2->IoStatus.Status = v6;
    IofCompleteRequest(a2, 0);
    return v6;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    v6 = -1073741811;
    v7 = 60;
    v11 = *p_NamedPipeType;
    goto LABEL_3;
  }
  if ( p_NamedPipeType[1] )
    SidetoneImmediate = CSidebandDevice::GetSidetoneImmediate(this, a2);
  else
    SidetoneImmediate = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2, 0LL, (char *)this + 112);
  v6 = SidetoneImmediate;
  if ( SidetoneImmediate != 259 )
    goto LABEL_10;
  return v6;
}
