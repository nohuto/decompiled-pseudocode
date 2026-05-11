/*
 * XREFs of ?StreamOpen@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D0DC
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z @ 0x1C0009AA0 (-CreateKsPin@CSidebandDevice@@AEAAJKPEATKSDATAFORMAT@@PEAPEAU_KSPIN@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::StreamOpen(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int16 v5; // r9
  unsigned int *p_NamedPipeType; // rbx
  int v7; // eax
  NTSTATUS v8; // ecx
  unsigned int v9; // ebx
  __int64 v11; // [rsp+28h] [rbp-18h]
  unsigned int v12; // [rsp+28h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-10h]
  PIRP Irp; // [rsp+78h] [rbp+38h]
  unsigned int v15; // [rsp+80h] [rbp+40h]
  struct _KSPIN *v16; // [rsp+88h] [rbp+48h] BYREF

  Irp = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v16 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x47u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 24 )
  {
    p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
    {
      v12 = *p_NamedPipeType;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x4Bu,
        (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
        v12);
      v7 = CSidebandDevice::CreateKsPin(this, *p_NamedPipeType, *((union KSDATAFORMAT **)p_NamedPipeType + 1), &v16);
      v15 = v7;
      v8 = v7;
      if ( v7 >= 0 )
        goto LABEL_11;
      v5 = 76;
      v13 = v7;
    }
    else
    {
      v15 = -1073741811;
      v5 = 74;
      v13 = -1073741811;
    }
    LODWORD(v11) = *p_NamedPipeType;
  }
  else
  {
    v15 = -1073741811;
    v13 = -1073741811;
    v5 = 73;
    LODWORD(v11) = 24;
  }
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    a3,
    v5,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    v11,
    v13);
  v8 = v15;
LABEL_11:
  v9 = v8;
  Irp->IoStatus.Status = v8;
  IofCompleteRequest(Irp, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v11) = v15;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v15,
      9u,
      0x48u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v11);
  }
  return v9;
}
