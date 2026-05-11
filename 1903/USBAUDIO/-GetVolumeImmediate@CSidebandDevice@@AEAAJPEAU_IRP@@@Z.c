/*
 * XREFs of ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000A834
 * Callers:
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D2BC (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007EB0 (WPP_RECORDER_SF_ddd.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C0008EE4 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000A5A0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetDbLevelSideband @ 0x1C0026944 (PropertyGetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetVolumeImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IRP *v2; // r14
  __int16 v3; // r10
  __int64 v5; // rax
  __int64 v6; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int v8; // ebx
  unsigned int *p_NamedPipeType; // rsi
  BOOL IsValidEndpointIndex; // eax
  int PinFromEpIndex; // eax
  unsigned __int16 v12; // r9
  unsigned int v13; // r12d
  int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // ebx
  _OWORD *UserBuffer; // rax
  unsigned int *v19; // [rsp+28h] [rbp-30h]
  unsigned int v20; // [rsp+28h] [rbp-30h]
  unsigned int v21; // [rsp+30h] [rbp-28h]
  unsigned int v22; // [rsp+38h] [rbp-20h]
  struct _KSPIN_DESCRIPTOR_EX *v23; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v27; // [rsp+B8h] [rbp+60h] BYREF

  v2 = a2;
  v3 = 0;
  v25 = -1;
  v24 = -1;
  v26 = -1;
  v5 = *((_QWORD *)this + 4);
  v23 = 0LL;
  v27 = 0;
  v6 = *(_QWORD *)(v5 + 16);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x58u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
    v3 = 0;
  }
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options == 16
    && (p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType,
        IsValidEndpointIndex = CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType),
        v3 = 0,
        IsValidEndpointIndex) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v20 = p_NamedPipeType[2];
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        9u,
        0x59u,
        (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
        v20);
    }
    PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v25, &v23);
    v8 = PinFromEpIndex;
    if ( PinFromEpIndex >= 0 )
    {
      v13 = v25;
      PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(
                         this,
                         (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                         v25,
                         &v24);
      v8 = PinFromEpIndex;
      if ( PinFromEpIndex >= 0 )
      {
        PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                           this,
                           v24,
                           v13,
                           (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                           &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1,
                           &v26);
        v3 = 0;
        v8 = PinFromEpIndex;
        if ( PinFromEpIndex >= 0 )
        {
          v16 = v26;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            v22 = v26;
            v21 = v13;
            LODWORD(v19) = v24;
            WPP_RECORDER_SF_ddd(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              (__int64)a2,
              v15,
              0x5Du,
              (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
              v19,
              v21,
              v22,
              v23);
            v3 = 0;
          }
          a2 = (struct _IRP *)(*(_QWORD *)(v6 + 200) + v16 * *(_DWORD *)(v6 + 196));
          if ( CurrentStackLocation->Parameters.Read.Length != 16 )
          {
            v8 = -1073741789;
            goto LABEL_29;
          }
          UserBuffer = v2->UserBuffer;
          *UserBuffer = *(_OWORD *)p_NamedPipeType;
          PinFromEpIndex = PropertyGetDbLevelSideband(
                             v14,
                             (_DWORD)a2,
                             (unsigned int)&v27,
                             p_NamedPipeType[2],
                             (__int64)UserBuffer + 12);
          v8 = PinFromEpIndex;
          if ( PinFromEpIndex >= 0 )
          {
            if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            {
              LODWORD(v19) = p_NamedPipeType[3];
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                (__int64)a2,
                9u,
                0x5Fu,
                (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
                v19);
              v3 = 0;
            }
            v2->IoStatus.Information = v27;
            goto LABEL_29;
          }
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v8;
          v12 = 94;
        }
        else
        {
          if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            return v8;
          v12 = 92;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return v8;
        v12 = 91;
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return v8;
      v12 = 90;
    }
    LODWORD(v19) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      v12,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v19);
    v3 = 0;
  }
  else
  {
    v8 = -1073741811;
  }
LABEL_29:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) != v3 )
  {
    LODWORD(v19) = v8;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x60u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v19);
  }
  return v8;
}
