/*
 * XREFs of ?StreamSuspend@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D458
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C0009E00 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     PinSetDeviceState @ 0x1C00213F0 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamSuspend(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int16 v5; // r9
  unsigned int NamedPipeType; // ebx
  int PinFromEpIndex; // eax
  __int64 v8; // rdx
  unsigned __int16 v9; // r9
  struct _KSPIN *v10; // rbx
  int v11; // eax
  __int64 v12; // rdx
  int v13; // eax
  __int64 v14; // rdx
  NTSTATUS v15; // ecx
  unsigned int v16; // ebx
  int v18; // [rsp+28h] [rbp-28h]
  __int64 v19; // [rsp+28h] [rbp-28h]
  struct _KSPIN *v20; // [rsp+40h] [rbp-10h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v21; // [rsp+48h] [rbp-8h] BYREF
  PIRP Irp; // [rsp+88h] [rbp+38h]
  unsigned int v23; // [rsp+90h] [rbp+40h]
  unsigned int v24; // [rsp+98h] [rbp+48h] BYREF

  Irp = a2;
  v24 = -1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v21 = 0LL;
  v20 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x57u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 4 )
  {
    v23 = -1073741811;
    v5 = 89;
    v18 = 4;
LABEL_5:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      a3,
      v5,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v18,
      -1073741811);
LABEL_19:
    v15 = v23;
    goto LABEL_20;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
    v23 = -1073741811;
    v5 = 90;
    v18 = NamedPipeType;
    goto LABEL_5;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x5Bu,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    NamedPipeType);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v24, &v21);
  v23 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v9 = 92;
LABEL_18:
    LODWORD(v19) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      v9,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v19);
    goto LABEL_19;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v24, &v20);
  v23 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v9 = 93;
    goto LABEL_18;
  }
  v10 = v20;
  v11 = PinSetDeviceState(v20, 2LL);
  if ( v11 < 0 )
  {
    LODWORD(v19) = v11;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v12,
      9u,
      0x5Eu,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v19);
  }
  v13 = PinSetDeviceState(v10, 1LL);
  if ( v13 < 0 )
  {
    LODWORD(v19) = v13;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      0x5Fu,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v19);
  }
  PinFromEpIndex = PinSetDeviceState(v10, 0LL);
  v23 = PinFromEpIndex;
  v15 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v9 = 96;
    goto LABEL_18;
  }
LABEL_20:
  v16 = v15;
  Irp->IoStatus.Status = v15;
  IofCompleteRequest(Irp, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = v23;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v23,
      9u,
      0x58u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v19);
  }
  return v16;
}
