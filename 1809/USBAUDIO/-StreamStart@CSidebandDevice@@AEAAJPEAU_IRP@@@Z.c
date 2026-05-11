/*
 * XREFs of ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D240
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

__int64 __fastcall CSidebandDevice::StreamStart(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  unsigned __int16 v5; // r9
  unsigned int NamedPipeType; // ebx
  int PinFromEpIndex; // eax
  __int64 v8; // rdx
  unsigned __int16 v9; // r9
  struct _KSPIN *v10; // rbx
  int v11; // eax
  NTSTATUS v12; // ecx
  unsigned int v13; // ebx
  int v15; // [rsp+28h] [rbp-28h]
  __int64 v16; // [rsp+28h] [rbp-28h]
  struct _KSPIN *v17; // [rsp+40h] [rbp-10h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v18; // [rsp+48h] [rbp-8h] BYREF
  PIRP Irp; // [rsp+88h] [rbp+38h]
  unsigned int v20; // [rsp+90h] [rbp+40h]
  unsigned int v21; // [rsp+98h] [rbp+48h] BYREF

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
      0x4Du,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 4 )
  {
    NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( !CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
    {
      v20 = -1073741811;
      v5 = 80;
      v15 = NamedPipeType;
      goto LABEL_7;
    }
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x51u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      NamedPipeType);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v21, &v18);
    v20 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v21, &v17);
      v20 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v10 = v17;
        PinFromEpIndex = PinSetDeviceState(v17, 1LL);
        v20 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          PinFromEpIndex = PinSetDeviceState(v10, 2LL);
          v20 = PinFromEpIndex;
          if ( PinFromEpIndex >= 0 )
          {
            v11 = PinSetDeviceState(v10, 3LL);
            v20 = v11;
            v12 = v11;
            if ( v11 >= 0 )
              goto LABEL_21;
            v9 = 86;
            LODWORD(v16) = v11;
            goto LABEL_19;
          }
          v9 = 85;
        }
        else
        {
          v9 = 84;
        }
      }
      else
      {
        v9 = 83;
      }
    }
    else
    {
      v9 = 82;
    }
    LODWORD(v16) = PinFromEpIndex;
LABEL_19:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      v9,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v16);
    goto LABEL_20;
  }
  v20 = -1073741811;
  v5 = 79;
  v15 = 4;
LABEL_7:
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    a3,
    v5,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    v15,
    -1073741811);
LABEL_20:
  v12 = v20;
LABEL_21:
  v13 = v12;
  Irp->IoStatus.Status = v12;
  IofCompleteRequest(Irp, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v16) = v20;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      9u,
      0x4Eu,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v16);
  }
  return v13;
}
