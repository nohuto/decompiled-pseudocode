/*
 * XREFs of ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DC5C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C0009E00 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::SetSiop(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int16 v5; // r9
  unsigned int *p_NamedPipeType; // rbx
  int PinFromEpIndex; // eax
  __int64 v8; // rdx
  unsigned __int16 v9; // r9
  struct _KSPIN *v10; // rdi
  __int64 v11; // rsi
  unsigned int v12; // ecx
  unsigned int v13; // ebx
  unsigned int v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+28h] [rbp-28h]
  struct _KSPIN *v17; // [rsp+40h] [rbp-10h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v18; // [rsp+48h] [rbp-8h] BYREF
  PIRP Irp; // [rsp+98h] [rbp+48h]
  unsigned int v20; // [rsp+A0h] [rbp+50h]
  unsigned int v21; // [rsp+A8h] [rbp+58h] BYREF

  Irp = a2;
  v21 = -1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v18 = 0LL;
  v17 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x76u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x20 )
  {
    v20 = -1073741811;
    v5 = 120;
    v15 = 32;
LABEL_7:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      a3,
      v5,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v15,
      -1073741811);
    goto LABEL_17;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    v20 = -1073741811;
    v5 = 121;
    v15 = *p_NamedPipeType;
    goto LABEL_7;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x7Au,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    *p_NamedPipeType);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v21, &v18);
  v20 = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v21, &v17);
    v20 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      v10 = v17;
      v11 = *(_QWORD *)(*((_QWORD *)v17->Context + 18) + 128LL);
      if ( *((_QWORD *)p_NamedPipeType + 1) == *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1
        && *((_QWORD *)p_NamedPipeType + 2) == *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4 )
      {
        WPP_RECORDER_SF_(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          v8,
          9u,
          0x7Du,
          (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
        v12 = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, unsigned int *, _QWORD))(v11 + 96))(
                p_NamedPipeType[6],
                v10,
                p_NamedPipeType + 8,
                p_NamedPipeType[7]);
        v20 = v12;
        v13 = v12;
        goto LABEL_18;
      }
      PinFromEpIndex = -1073741637;
      v20 = -1073741637;
      v9 = 126;
    }
    else
    {
      v9 = 124;
    }
  }
  else
  {
    v9 = 123;
  }
  LODWORD(v16) = PinFromEpIndex;
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v8,
    9u,
    v9,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    v16);
LABEL_17:
  v12 = v20;
  v13 = v20;
LABEL_18:
  Irp->IoStatus.Status = v12;
  IofCompleteRequest(Irp, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v16) = v20;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      9u,
      0x77u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v16);
  }
  return v13;
}
