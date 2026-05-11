/*
 * XREFs of ?GetSidetoneImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B12C
 * Callers:
 *     ?GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DB24 (-GetSidetoneStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C00090CC (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000A5A0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetBooleanSideband @ 0x1C0026470 (PropertyGetBooleanSideband.c)
 *     PropertyGetDbLevelSideband @ 0x1C0026944 (PropertyGetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetSidetoneImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v4; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v6; // ebx
  unsigned int *p_NamedPipeType; // r15
  int PinFromEpIndex; // eax
  unsigned __int16 v9; // r9
  int v10; // ecx
  _DWORD *UserBuffer; // r11
  unsigned int v12; // r10d
  __int64 v14; // [rsp+28h] [rbp-20h]
  int v15; // [rsp+28h] [rbp-20h]
  struct _KSPIN_DESCRIPTOR_EX *v16; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v17; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v18; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v19; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v20; // [rsp+A8h] [rbp+60h] BYREF

  v19 = -1;
  v20 = -1;
  v17 = -1;
  v18 = -1;
  v4 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL;
  v16 = 0LL;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x73u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 20 )
  {
    p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v19, &v16);
      v6 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)v4, v19, &v20);
        v6 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(this, v20, (struct _KSFILTER_DESCRIPTOR *)v4, &v17, &v18);
          v6 = PinFromEpIndex;
          if ( PinFromEpIndex >= 0 )
          {
            UserBuffer = a2->UserBuffer;
            v12 = 0;
            if ( p_NamedPipeType[2] != -1 )
              v12 = p_NamedPipeType[2];
            *(_OWORD *)UserBuffer = *(_OWORD *)p_NamedPipeType;
            UserBuffer[4] = p_NamedPipeType[4];
            UserBuffer[2] = v12;
            if ( v17 == -1
              || (PinFromEpIndex = PropertyGetDbLevelSideband(
                                     v10,
                                     *(_DWORD *)(v4 + 72) + v17 * *(_DWORD *)(v4 + 68),
                                     (unsigned int)&v17,
                                     v12,
                                     (__int64)(UserBuffer + 3)),
                  v6 = PinFromEpIndex,
                  PinFromEpIndex >= 0) )
            {
              if ( v18 == -1
                || (PinFromEpIndex = PropertyGetBooleanSideband(
                                       v10,
                                       *(_DWORD *)(v4 + 72) + v18 * *(_DWORD *)(v4 + 68),
                                       (unsigned int)&v17,
                                       v12,
                                       (__int64)(UserBuffer + 4)),
                    v6 = PinFromEpIndex,
                    PinFromEpIndex >= 0) )
              {
                a2->IoStatus.Information = 20LL;
                goto LABEL_29;
              }
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v6;
              v9 = 120;
            }
            else
            {
              if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                return v6;
              v9 = 119;
            }
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v6;
            v9 = 118;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v6;
          v9 = 117;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v6;
        v9 = 116;
      }
      v15 = PinFromEpIndex;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        v9,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        v15,
        v16);
    }
    else
    {
      v6 = -1073741811;
    }
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v14) = v6;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x79u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v14);
  }
  return v6;
}
