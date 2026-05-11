/*
 * XREFs of ?GetMuteImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000AD1C
 * Callers:
 *     ?GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D968 (-GetMuteStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C0008EE4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000A5A0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetBooleanSideband @ 0x1C0026490 (PropertyGetBooleanSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetMuteImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  __int64 v4; // rax
  __int64 v5; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v7; // ebx
  unsigned int *p_NamedPipeType; // r15
  int PinFromEpIndex; // eax
  unsigned __int16 v10; // r9
  int v11; // ecx
  unsigned int *v13; // [rsp+28h] [rbp-20h]
  struct _KSPIN_DESCRIPTOR_EX *v14; // [rsp+30h] [rbp-18h] BYREF
  unsigned int v15; // [rsp+90h] [rbp+48h] BYREF
  unsigned int v16; // [rsp+98h] [rbp+50h] BYREF
  unsigned int v17; // [rsp+A0h] [rbp+58h] BYREF
  unsigned int v18; // [rsp+A8h] [rbp+60h] BYREF

  v15 = -1;
  v16 = -1;
  v17 = -1;
  v4 = *((_QWORD *)this + 4);
  v14 = 0LL;
  v18 = 0;
  v5 = *(_QWORD *)(v4 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x67u,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids);
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 16 )
  {
    p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
    if ( CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
    {
      PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v15, &v14);
      v7 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                           this,
                           (struct _KSFILTER_DESCRIPTOR *)(v5 + 128),
                           v15,
                           &v16);
        v7 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                             this,
                             v16,
                             v15,
                             (struct _KSFILTER_DESCRIPTOR *)(v5 + 128),
                             &GUID_02b223c0_c557_11d0_8a2b_00a0c9255ac1,
                             &v17);
          v7 = PinFromEpIndex;
          if ( PinFromEpIndex >= 0 )
          {
            PinFromEpIndex = PropertyGetBooleanSideband(
                               v11,
                               *(_DWORD *)(v5 + 200) + v17 * *(_DWORD *)(v5 + 196),
                               (unsigned int)&v18,
                               p_NamedPipeType[2],
                               (__int64)(p_NamedPipeType + 3));
            v7 = PinFromEpIndex;
            if ( PinFromEpIndex >= 0 )
            {
              a2->IoStatus.Information = v18;
              goto LABEL_22;
            }
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v7;
            v10 = 107;
          }
          else
          {
            if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
              return v7;
            v10 = 106;
          }
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v7;
          v10 = 105;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v7;
        v10 = 104;
      }
      LODWORD(v13) = PinFromEpIndex;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        v10,
        (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
        v13,
        v14);
    }
    else
    {
      v7 = -1073741811;
    }
  }
  else
  {
    v7 = -1073741811;
  }
LABEL_22:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v13) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x6Cu,
      (__int64)&WPP_d153e64821bc3364f2117226f130d99d_Traceguids,
      v13);
  }
  return v7;
}
