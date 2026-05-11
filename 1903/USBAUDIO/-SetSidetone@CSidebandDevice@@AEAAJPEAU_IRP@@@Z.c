/*
 * XREFs of ?SetSidetone@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000DC34
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BB7C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 *     ?GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z @ 0x1C00090CC (-GetSidetoneNodes@CSidebandDevice@@AEAAJKPEAU_KSFILTER_DESCRIPTOR@@PEAK1@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C000A5A0 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertySetBooleanSideband @ 0x1C00262D4 (PropertySetBooleanSideband.c)
 *     PropertySetDbLevelSideband @ 0x1C0026764 (PropertySetDbLevelSideband.c)
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
  __int64 v19; // [rsp+28h] [rbp-30h]
  unsigned int v20; // [rsp+40h] [rbp-18h] BYREF
  unsigned int v21; // [rsp+44h] [rbp-14h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v22; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v24; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v25; // [rsp+B0h] [rbp+58h] BYREF
  int v26; // [rsp+B8h] [rbp+60h] BYREF

  v20 = -1;
  v21 = -1;
  v23 = -1;
  v24 = -1;
  v5 = *(_QWORD *)(*((_QWORD *)this + 4) + 16LL) + 128LL;
  v22 = 0LL;
  v25 = 0;
  v26 = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      9u,
      0x3Du,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 20 )
  {
    inserted = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        a3,
        0x3Eu,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        20,
        -1073741811);
    goto LABEL_7;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    inserted = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v11,
        v12,
        0x3Fu,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        *p_NamedPipeType,
        -1073741811);
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v11,
      v12,
      0x40u,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      p_NamedPipeType[3],
      p_NamedPipeType[4]);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v20, &v22);
  inserted = PinFromEpIndex;
  if ( PinFromEpIndex >= 0 )
  {
    PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)v5, v20, &v21);
    inserted = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v15 = 66;
      goto LABEL_20;
    }
    PinFromEpIndex = CSidebandDevice::GetSidetoneNodes(this, v21, (struct _KSFILTER_DESCRIPTOR *)v5, &v23, &v24);
    inserted = PinFromEpIndex;
    if ( PinFromEpIndex < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_7;
      v15 = 67;
      goto LABEL_20;
    }
    if ( v23 != -1 )
    {
      v16 = PropertySetDbLevelSideband(
              *((_QWORD *)this + 4),
              *(_DWORD *)(v5 + 72) + v23 * *(_DWORD *)(v5 + 68),
              (unsigned int)&v25,
              0,
              (__int64)(p_NamedPipeType + 3),
              (__int64)&v26);
      inserted = v16;
      if ( v16 < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          goto LABEL_38;
        v18 = 68;
        goto LABEL_32;
      }
    }
    if ( v24 == -1
      || (v16 = PropertySetBooleanSideband(
                  *((_QWORD *)this + 4),
                  *(_DWORD *)(v5 + 72) + v24 * *(_DWORD *)(v5 + 68),
                  (unsigned int)&v25,
                  0,
                  (__int64)(p_NamedPipeType + 4),
                  (__int64)&v26),
          inserted = v16,
          v16 >= 0) )
    {
      Irp->IoStatus.Information = v25;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = 69;
LABEL_32:
      LODWORD(v19) = v16;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        v17,
        9u,
        v18,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        v19);
    }
LABEL_38:
    if ( v26 )
    {
      inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), Irp, 0LL, (char *)this + 64);
      goto LABEL_8;
    }
    goto LABEL_7;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v15 = 65;
LABEL_20:
    LODWORD(v19) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      v15,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      v19);
  }
LABEL_7:
  Irp->IoStatus.Status = inserted;
  IofCompleteRequest(Irp, 0);
LABEL_8:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v19) = inserted;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      0x46u,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      v19);
  }
  return inserted;
}
