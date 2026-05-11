/*
 * XREFs of ?StreamStart@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000E188
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BB7C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000A37C (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     PinSetDeviceState @ 0x1C00225A0 (PinSetDeviceState.c)
 */

__int64 __fastcall CSidebandDevice::StreamStart(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v5; // ecx
  unsigned __int16 v6; // r9
  unsigned int NamedPipeType; // ebx
  int PinFromEpIndex; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  struct _KSPIN *v11; // rbx
  int v12; // eax
  unsigned int v13; // ebx
  __int64 v15; // [rsp+28h] [rbp-28h]
  int v16; // [rsp+28h] [rbp-28h]
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
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x4Du,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 4 )
  {
    v5 = -1073741811;
    v20 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 79;
      v16 = 4;
LABEL_7:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        v6,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        v16,
        -1073741811);
LABEL_30:
      v5 = v20;
      goto LABEL_31;
    }
    goto LABEL_31;
  }
  NamedPipeType = CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( CSidebandDevice::IsValidEndpointIndex(this, NamedPipeType) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x51u,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        NamedPipeType);
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, NamedPipeType, &v21, &v18);
    v20 = PinFromEpIndex;
    v5 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v21, &v17);
      v20 = PinFromEpIndex;
      v5 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        v11 = v17;
        PinFromEpIndex = PinSetDeviceState(v17, 1LL);
        v20 = PinFromEpIndex;
        v5 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          PinFromEpIndex = PinSetDeviceState(v11, 2LL);
          v20 = PinFromEpIndex;
          v5 = PinFromEpIndex;
          if ( PinFromEpIndex >= 0 )
          {
            v12 = PinSetDeviceState(v11, 3LL);
            v20 = v12;
            v5 = v12;
            if ( v12 >= 0 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              goto LABEL_31;
            v10 = 86;
            LODWORD(v15) = v12;
LABEL_29:
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              v9,
              9u,
              v10,
              (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
              v15);
            goto LABEL_30;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_31;
          v10 = 85;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            goto LABEL_31;
          v10 = 84;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_31;
        v10 = 83;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_31;
      v10 = 82;
    }
    LODWORD(v15) = PinFromEpIndex;
    goto LABEL_29;
  }
  v5 = -1073741811;
  v20 = -1073741811;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v6 = 80;
    v16 = NamedPipeType;
    goto LABEL_7;
  }
LABEL_31:
  v13 = v5;
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v15) = v20;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      9u,
      0x4Eu,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      v15);
  }
  return v13;
}
