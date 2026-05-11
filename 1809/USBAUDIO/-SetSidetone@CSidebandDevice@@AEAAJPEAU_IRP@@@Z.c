/*
 * XREFs of ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000CDE8
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C0008D84 (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009FD4 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertySetBooleanSideband @ 0x1C0025178 (PropertySetBooleanSideband.c)
 *     PropertySetDbLevelSideband @ 0x1C0025624 (PropertySetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetSidetone(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  __int64 v5; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int inserted; // ebx
  __int64 v8; // rdx
  unsigned int *p_NamedPipeType; // r15
  __int64 v11; // rdx
  __int64 v12; // r8
  int PinFromEpIndex; // eax
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  int v16; // eax
  __int64 v17; // rdx
  unsigned __int16 v18; // r9
  int v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  unsigned int v21; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v22; // [rsp+44h] [rbp-14h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v23; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v25; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v26; // [rsp+B0h] [rbp+58h] BYREF
  int v27; // [rsp+B8h] [rbp+60h] BYREF

  v21 = -1;
  v22 = -1;
  v24 = -1;
  v25 = -1;
  v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL;
  v23 = 0LL;
  v26 = 0;
  v27 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      9u,
      0x3Du,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 20 )
  {
    inserted = -1073741811;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      a3,
      0x3Eu,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      20,
      -1073741811);
    goto LABEL_6;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    inserted = -1073741811;
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      v12,
      0x3Fu,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      *p_NamedPipeType,
      -1073741811);
LABEL_6:
    Irp->IoStatus.Status = inserted;
    IofCompleteRequest(Irp, 0);
    goto LABEL_7;
  }
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v11,
    v12,
    0x40u,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    p_NamedPipeType[3],
    p_NamedPipeType[4]);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v21, &v23);
  inserted = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v15 = 65;
LABEL_14:
    LODWORD(v20) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      v15,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v20);
    goto LABEL_6;
  }
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)v5, v21, &v22);
  inserted = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v15 = 66;
    goto LABEL_14;
  }
  PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(this, v22, (struct _KSFILTER_DESCRIPTOR *)v5, &v24, &v25);
  inserted = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v15 = 67;
    goto LABEL_14;
  }
  if ( v24 != -1 )
  {
    v16 = PropertySetDbLevelSideband(
            *((_QWORD *)this + 4),
            *(_DWORD *)(v5 + 72) + v24 * *(_DWORD *)(v5 + 68),
            (unsigned int)&v26,
            0,
            v19,
            (__int64)(p_NamedPipeType + 3),
            (__int64)&v27);
    inserted = v16;
    if ( v16 < 0 )
    {
      v18 = 68;
LABEL_22:
      LODWORD(v20) = v16;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v17,
        9u,
        v18,
        (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
        v20);
      goto LABEL_27;
    }
  }
  if ( v25 != -1 )
  {
    v16 = PropertySetBooleanSideband(
            *((_QWORD *)this + 4),
            *(_DWORD *)(v5 + 72) + v25 * *(_DWORD *)(v5 + 68),
            (unsigned int)&v26,
            0,
            v19,
            (__int64)(p_NamedPipeType + 4),
            (__int64)&v27);
    inserted = v16;
    if ( v16 < 0 )
    {
      v18 = 69;
      goto LABEL_22;
    }
  }
  Irp->IoStatus.Information = v26;
LABEL_27:
  if ( !v27 )
    goto LABEL_6;
  inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), Irp, 0LL, (char *)this + 64);
LABEL_7:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v20) = inserted;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      0x46u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v20);
  }
  return inserted;
}
