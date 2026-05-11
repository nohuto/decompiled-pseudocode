/*
 * XREFs of ?GetSiop@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000D9C4
 * Callers:
 *     ?SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z @ 0x1C000B27C (-SidebandApi@CSidebandDevice@@AEAAJPEAU_IRP@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001008 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00010CC (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dd @ 0x1C00072AC (WPP_RECORDER_SF_dd.c)
 *     ?IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z @ 0x1C0009524 (-IsValidEndpointIndex@CSidebandDevice@@AEAAHK@Z.c)
 *     ?GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z @ 0x1C000955C (-GetPinFromEpIndex@CSidebandDevice@@AEAAJKPEAKPEAPEAU_KSPIN_DESCRIPTOR_EX@@@Z.c)
 *     ?GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z @ 0x1C0009E00 (-GetPinFromPinsInUseList@CSidebandDevice@@AEAAJKPEAPEAU_KSPIN@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSidebandDevice::GetSiop(CSidebandDevice *this, struct _IRP *a2, __int64 a3)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdi
  unsigned __int16 v5; // r9
  unsigned int *p_NamedPipeType; // rbx
  int PinFromEpIndex; // eax
  __int64 v8; // rdx
  unsigned __int16 v9; // r9
  struct _KSPIN *v10; // rsi
  _QWORD *Context; // rcx
  __int64 v12; // r14
  ULONG v13; // eax
  int v14; // ecx
  unsigned int v15; // ebx
  __int64 v17; // [rsp+28h] [rbp-38h]
  unsigned int v18; // [rsp+40h] [rbp-20h] BYREF
  struct _KSPIN *v19; // [rsp+48h] [rbp-18h] BYREF
  struct _KSPIN_DESCRIPTOR_EX *v20; // [rsp+50h] [rbp-10h] BYREF
  PIRP Irp; // [rsp+A8h] [rbp+48h]
  unsigned int v22; // [rsp+B0h] [rbp+50h]
  ULONG Length; // [rsp+B8h] [rbp+58h] BYREF

  Irp = a2;
  v18 = -1;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Length = 0;
  v20 = 0LL;
  v19 = 0LL;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      (__int64)a2,
      9u,
      0x6Cu,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
    a2 = Irp;
  }
  a2->IoStatus.Information = 0LL;
  if ( CurrentStackLocation->Parameters.Create.Options != 32 )
  {
    v22 = -1073741811;
    v5 = 110;
    LODWORD(v17) = 32;
    goto LABEL_7;
  }
  p_NamedPipeType = &CurrentStackLocation->Parameters.CreatePipe.Parameters->NamedPipeType;
  if ( !CSidebandDevice::IsValidEndpointIndex(this, *p_NamedPipeType) )
  {
    v22 = -1073741811;
    v5 = 111;
    LODWORD(v17) = *p_NamedPipeType;
    goto LABEL_7;
  }
  WPP_RECORDER_SF_d(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    9u,
    0x70u,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    *p_NamedPipeType);
  PinFromEpIndex = CSidebandDevice::GetPinFromEpIndex(this, *p_NamedPipeType, &v18, &v20);
  v22 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v9 = 113;
LABEL_20:
    LODWORD(v17) = PinFromEpIndex;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v8,
      9u,
      v9,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v17);
    goto LABEL_21;
  }
  PinFromEpIndex = CSidebandDevice::GetPinFromPinsInUseList(this, v18, &v19);
  v22 = PinFromEpIndex;
  if ( PinFromEpIndex < 0 )
  {
    v9 = 114;
    goto LABEL_20;
  }
  v10 = v19;
  Context = v19->Context;
  Length = CurrentStackLocation->Parameters.Read.Length;
  v12 = *(_QWORD *)(Context[18] + 128LL);
  if ( *((_QWORD *)p_NamedPipeType + 1) != *(_QWORD *)&SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data1
    || *((_QWORD *)p_NamedPipeType + 2) != *(_QWORD *)SIDEBANDAUDIO_PARAMS_SET_USBAUDIO.Data4 )
  {
    PinFromEpIndex = -1073741637;
    v22 = -1073741637;
    v9 = 116;
    goto LABEL_20;
  }
  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    v8,
    9u,
    0x73u,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids);
  v22 = (*(__int64 (__fastcall **)(_QWORD, struct _KSPIN *, PVOID, ULONG *))(v12 + 88))(
          p_NamedPipeType[6],
          v10,
          Irp->UserBuffer,
          &Length);
  v13 = CurrentStackLocation->Parameters.Read.Length;
  if ( !v13 )
  {
    Irp->IoStatus.Information = Length;
    v14 = -1073741789;
    v22 = -1073741789;
    goto LABEL_22;
  }
  if ( v13 == Length )
  {
    Irp->IoStatus.Information = Length;
    goto LABEL_21;
  }
  v22 = -1073741811;
  v5 = 117;
  LODWORD(v17) = Length;
LABEL_7:
  WPP_RECORDER_SF_dd(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    (__int64)a2,
    a3,
    v5,
    (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
    v17,
    -1073741811);
LABEL_21:
  v14 = v22;
LABEL_22:
  v15 = v14;
  Irp->IoStatus.Status = v14;
  IofCompleteRequest(Irp, 0);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    LODWORD(v17) = v22;
    WPP_RECORDER_SF_d(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      v22,
      9u,
      0x6Du,
      (__int64)&WPP_8ef3a3bc2721386c1de048e42eaea6b5_Traceguids,
      v17);
  }
  return v15;
}
