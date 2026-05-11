/*
 * XREFs of ?StreamClose@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D6A4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C0009E00 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 */

__int64 __fastcall CSidebandDevice::StreamClose(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int16 v5; // r9
  unsigned int NamedPipeType; // ebx
  int PinFromEpIndex; // eax
  __int64 v8; // rdx
  unsigned __int16 v9; // r9
  int v11; // [rsp+28h] [rbp-28h]
  __int64 v12; // [rsp+28h] [rbp-28h]
  struct _KSPIN *v13; // [rsp+40h] [rbp-10h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v14; // [rsp+48h] [rbp-8h] BYREF
  unsigned int v16; // [rsp+90h] [rbp+40h]
  unsigned int v17; // [rsp+98h] [rbp+48h] BYREF

  v17 = -1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  v14 = 0LL;
  v13 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x61u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
  if ( CurrentStackLocation->Parameters.Create.Options != 4 )
  {
    v16 = -1073741811;
    v5 = 99;
    v11 = 4;
LABEL_5:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      a3,
      v5,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v11,
      -1073741811);
    goto LABEL_14;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
    v16 = -1073741811;
    v5 = 100;
    v11 = NamedPipeType;
    goto LABEL_5;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x65u,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    NamedPipeType);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v17, &v14);
  v16 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v9 = 102;
LABEL_12:
    LODWORD(v12) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      v9,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v12);
    goto LABEL_14;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v17, &v13);
  v16 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v9 = 103;
    goto LABEL_12;
  }
  ObfDereferenceObject(*((PVOID *)v13->Context + 6));
LABEL_14:
  a2->IoStatus.Status = v16;
  IofCompleteRequest(a2, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v12) = v16;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v16,
      9u,
      0x62u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v12);
  }
  return v16;
}
