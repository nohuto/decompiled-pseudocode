/*
 * XREFs of ?GetStreamStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EA2C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BB8C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 */

__int64 __fastcall CSidebandDevice::GetStreamStatusUpdate(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int inserted; // ebx
  unsigned __int16 v7; // r9
  unsigned int *p_NamedPipeType; // r15
  __int64 v10; // [rsp+28h] [rbp-30h]

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  inserted = 0;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 12 )
  {
    inserted = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 104;
      LODWORD(v10) = 12;
LABEL_4:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        v7,
        (__int64)&WPP_9af8842e681d335e16435351a8441770_Traceguids,
        v10,
        -1073741811);
      goto LABEL_16;
    }
    goto LABEL_16;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    inserted = -1073741811;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_16;
    v7 = 105;
    LODWORD(v10) = *p_NamedPipeType;
    goto LABEL_4;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x6Au,
      (__int64)&WPP_9af8842e681d335e16435351a8441770_Traceguids,
      *p_NamedPipeType);
  if ( p_NamedPipeType[1] )
  {
    if ( CurrentStackLocation->Parameters.Read.Length == 12 )
    {
      *((_DWORD *)a2->UserBuffer + 2) = 0;
      a2->IoStatus.Information = 12LL;
      goto LABEL_16;
    }
    inserted = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v7 = 107;
      LODWORD(v10) = 12;
      goto LABEL_4;
    }
LABEL_16:
    a2->IoStatus.Status = inserted;
    IofCompleteRequest(a2, 0);
    return inserted;
  }
  inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), a2, 0LL, (char *)this + 128);
  if ( inserted != 259 )
    goto LABEL_16;
  return inserted;
}
