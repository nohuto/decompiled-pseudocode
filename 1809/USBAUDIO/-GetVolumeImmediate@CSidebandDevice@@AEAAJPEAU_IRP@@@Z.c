/*
 * XREFs of ?GetVolumeImmediate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000A248
 * Callers:
 *     ?GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C61C (-GetVolumeStatusUpdate@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007CF0 (WPP_RECORDER_SF_ddd.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C0008BD0 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009FD4 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertyGetDbLevelSideband @ 0x1C002581C (PropertyGetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::GetVolumeImmediate(CSidebandDevice *this, struct _IRP *a2)
{
  struct _IRP *v2; // rsi
  __int64 v4; // rax
  __int64 v5; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r13
  unsigned int v7; // ebx
  unsigned int *p_NamedPipeType; // r14
  int PinFromEpIndex; // eax
  __int64 v10; // rdx
  unsigned __int16 v11; // r9
  unsigned int v12; // r12d
  __int64 v13; // r8
  unsigned int v14; // ebx
  int v15; // ecx
  _OWORD *UserBuffer; // rax
  unsigned int *v18; // [rsp+28h] [rbp-30h]
  unsigned int v19; // [rsp+28h] [rbp-30h]
  unsigned int v20; // [rsp+30h] [rbp-28h]
  unsigned int v21; // [rsp+38h] [rbp-20h]
  struct _KSPIN_DESCRIPTOR_EX *v22; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v26; // [rsp+B8h] [rbp+60h] BYREF

  v2 = a2;
  v24 = -1;
  v23 = -1;
  v25 = -1;
  v4 = *((_QWORD *)this + 4);
  v22 = 0LL;
  v26 = 0;
  v5 = *(_QWORD *)(v4 + 16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x58u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids);
  CurrentStackLocation = v2->Tail.Overlay.CurrentStackLocation;
  v2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 16
    || (p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType,
        !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType)) )
  {
    v7 = -1073741811;
    goto LABEL_18;
  }
  v19 = p_NamedPipeType[2];
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x59u,
    (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
    v19);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v24, &v22);
  v7 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v11 = 90;
LABEL_8:
    LODWORD(v18) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      v11,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v18);
    goto LABEL_18;
  }
  v12 = v24;
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v5 + 128), v24, &v23);
  v7 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v11 = 91;
    goto LABEL_8;
  }
  PinFromEpIndex = CSidebandDevice::GetNodeOfType(
                     this,
                     v23,
                     v12,
                     (struct _KSFILTER_DESCRIPTOR *)(v5 + 128),
                     &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1,
                     &v25);
  v7 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v11 = 92;
    goto LABEL_8;
  }
  v14 = v25;
  v21 = v25;
  v20 = v12;
  LODWORD(v18) = v23;
  WPP_RECORDER_SF_ddd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v10,
    v13,
    0x5Du,
    (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
    v18,
    v20,
    v21,
    v22);
  a2 = (struct _IRP *)(*(_QWORD *)(v5 + 200) + v14 * *(_DWORD *)(v5 + 196));
  if ( CurrentStackLocation->Parameters.Read.Length == 16 )
  {
    UserBuffer = v2->UserBuffer;
    *UserBuffer = *(_OWORD *)p_NamedPipeType;
    PinFromEpIndex = PropertyGetDbLevelSideband(
                       v15,
                       (_DWORD)a2,
                       (unsigned int)&v26,
                       p_NamedPipeType[2],
                       (__int64)UserBuffer + 12);
    v7 = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      v11 = 94;
      goto LABEL_8;
    }
    LODWORD(v18) = p_NamedPipeType[3];
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0x5Fu,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v18);
    v2->IoStatus.Information = v26;
  }
  else
  {
    v7 = -1073741789;
  }
LABEL_18:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v18) = v7;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x60u,
      (__int64)&WPP_9cb122de025331014e173ee6737c9890_Traceguids,
      v18);
  }
  return v7;
}
