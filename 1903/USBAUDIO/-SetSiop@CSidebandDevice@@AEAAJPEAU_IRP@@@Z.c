/*
 * XREFs of ?SetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000EDC0
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000BB7C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C000738C (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009954 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000998C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C000A37C (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00117A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::SetSiop(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  int v5; // ecx
  unsigned __int16 v6; // r9
  unsigned int *p_NamedPipeType; // rbx
  int PinFromEpIndex; // eax
  __int64 v9; // rdx
  unsigned __int16 v10; // r9
  struct _KSPIN *v11; // rdi
  __int64 v12; // rsi
  unsigned int v13; // ebx
  __int64 v15; // [rsp+28h] [rbp-28h]
  unsigned int v16; // [rsp+28h] [rbp-28h]
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
      0x76u,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options < 0x20 )
  {
    v5 = -1073741811;
    v20 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 120;
      v16 = 32;
LABEL_7:
      WPP_RECORDER_SF_dd(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        (__int64)a2,
        a3,
        v6,
        (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
        v16,
        -1073741811);
LABEL_28:
      v5 = v20;
      goto LABEL_29;
    }
    goto LABEL_29;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    v5 = -1073741811;
    v20 = -1073741811;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = 121;
      v16 = *p_NamedPipeType;
      goto LABEL_7;
    }
LABEL_29:
    v13 = v5;
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x7Au,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      *p_NamedPipeType);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v21, &v18);
  v20 = PinFromEpIndex;
  v5 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v10 = 123;
    goto LABEL_16;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v21, &v17);
  v20 = PinFromEpIndex;
  v5 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v10 = 124;
LABEL_16:
    LODWORD(v15) = PinFromEpIndex;
    goto LABEL_27;
  }
  v11 = v17;
  v12 = *(_QWORD *)(*((_QWORD *)v17->Context + 18) + 128LL);
  if ( *((_QWORD *)p_NamedPipeType + 1) != *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1
    || *((_QWORD *)p_NamedPipeType + 2) != *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4 )
  {
    v5 = -1073741637;
    v20 = -1073741637;
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v10 = 126;
    LODWORD(v15) = -1073741637;
LABEL_27:
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      9u,
      v10,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      v15);
    goto LABEL_28;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v9,
      9u,
      0x7Du,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids);
  v5 = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, unsigned int *, _QWORD))(v12 + 96))(
         p_NamedPipeType[6],
         v11,
         p_NamedPipeType + 8,
         p_NamedPipeType[7]);
  v20 = v5;
  v13 = v5;
LABEL_30:
  Irp->IoStatus.Status = v5;
  IofCompleteRequest(Irp, 0);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v15) = v20;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v20,
      9u,
      0x77u,
      (__int64)&WPP_e27fc7063e883d93106a92960f0a4700_Traceguids,
      v15);
  }
  return v13;
}
