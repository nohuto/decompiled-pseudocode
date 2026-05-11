/*
 * XREFs of ?SetVolume@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000C31C
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     WPP_RECORDER_SF_ddd @ 0x1C0007CF0 (WPP_RECORDER_SF_ddd.c)
 *     ?GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z @ 0x1C0008BD0 (-GetNodeOfType@CSidebandDevice@@AEAAJKKPEAU_KSFILTER_DESCRIPTOR@@PEBU_GUID@@PEAK@Z.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z @ 0x1C0009FD4 (-GetBridgePinForDataPin@CSidebandDevice@@AEAAJPEAU_KSFILTER_DESCRIPTOR@@KPEAK@Z.c)
 *     PropertySetDbLevelSideband @ 0x1C0025624 (PropertySetDbLevelSideband.c)
 */

__int64 __fastcall CSidebandDevice::SetVolume(CSidebandDevice *this, PIRP Irp, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r14
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r15
  unsigned int inserted; // ebx
  unsigned __int16 v9; // r9
  __int64 v10; // rdx
  unsigned int *p_NamedPipeType; // r15
  int PinFromEpIndex; // eax
  __int64 v14; // rdx
  unsigned __int16 v15; // r9
  unsigned int v16; // r12d
  int NodeOfType; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  unsigned int v20; // ebx
  int v21; // eax
  __int64 v22; // rdx
  int v23; // [rsp+20h] [rbp-38h]
  unsigned int v24; // [rsp+28h] [rbp-30h]
  unsigned int *v25; // [rsp+28h] [rbp-30h]
  unsigned int *v26; // [rsp+28h] [rbp-30h]
  unsigned int *v27; // [rsp+28h] [rbp-30h]
  int v28; // [rsp+40h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v29; // [rsp+48h] [rbp-10h] BYREF
  unsigned int v30; // [rsp+A0h] [rbp+48h] BYREF
  unsigned int v31; // [rsp+A8h] [rbp+50h] BYREF
  unsigned int v32; // [rsp+B0h] [rbp+58h] BYREF
  unsigned int v33; // [rsp+B8h] [rbp+60h] BYREF

  v30 = -1;
  v31 = -1;
  v32 = -1;
  v5 = *((_QWORD *)this + 4);
  v29 = 0LL;
  v33 = 0;
  v28 = 0;
  v6 = *(_QWORD *)(v5 + 16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      9u,
      0x1Du,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 16 )
  {
    inserted = -1073741811;
    v9 = 30;
    v24 = 16;
LABEL_5:
    WPP_RECORDER_SF_dd(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)Irp,
      a3,
      v9,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v24,
      -1073741811);
LABEL_6:
    Irp->IoStatus.Status = inserted;
    IofCompleteRequest(Irp, 0);
    goto LABEL_7;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    inserted = -1073741811;
    v9 = 31;
    v24 = *p_NamedPipeType;
    goto LABEL_5;
  }
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)Irp,
    a3,
    0x20u,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    p_NamedPipeType[2],
    p_NamedPipeType[3]);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v30, &v29);
  inserted = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v15 = 33;
LABEL_14:
    LODWORD(v26) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v14,
      9u,
      v15,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v26);
    goto LABEL_6;
  }
  v16 = v30;
  PinFromEpIndex = CSidebandDevice::GetBridgePinForDataPin(this, (struct _KSFILTER_DESCRIPTOR *)(v6 + 128), v30, &v31);
  inserted = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v15 = 34;
    goto LABEL_14;
  }
  NodeOfType = CSidebandDevice::GetNodeOfType(
                 this,
                 v31,
                 v16,
                 (struct _KSFILTER_DESCRIPTOR *)(v6 + 128),
                 &GUID_3a5acc00_c557_11d0_8a2b_00a0c9255ac1,
                 &v32);
  inserted = NodeOfType;
  if ( NodeOfType < 0 )
  {
    LODWORD(v27) = NodeOfType;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v18,
      9u,
      0x23u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v27);
    goto LABEL_6;
  }
  v20 = v32;
  WPP_RECORDER_SF_ddd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v18,
    v19,
    0x24u,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
  v21 = PropertySetDbLevelSideband(
          *((_QWORD *)this + 4),
          *(_DWORD *)(v6 + 200) + v20 * *(_DWORD *)(v6 + 196),
          (unsigned int)&v33,
          p_NamedPipeType[2],
          v23,
          (__int64)(p_NamedPipeType + 3),
          (__int64)&v28);
  inserted = v21;
  if ( v21 >= 0 )
  {
    Irp->IoStatus.Information = v33;
  }
  else
  {
    LODWORD(v25) = v21;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v22,
      9u,
      0x25u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v25);
  }
  if ( !v28 )
    goto LABEL_6;
  inserted = IoCsqInsertIrpEx((PIO_CSQ)(*((_QWORD *)this + 5) + 160LL), Irp, 0LL, (char *)this + 64);
LABEL_7:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v25) = inserted;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v10,
      9u,
      0x26u,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v25);
  }
  return inserted;
}
