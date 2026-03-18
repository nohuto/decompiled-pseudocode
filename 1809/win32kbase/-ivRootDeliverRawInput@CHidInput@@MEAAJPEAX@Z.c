/*
 * XREFs of ?ivRootDeliverRawInput@CHidInput@@MEAAJPEAX@Z @ 0x1C014D9C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01539B8 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0153A10 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01541CC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154654 (-IVMeasureRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154A0C (-IVSerializeRimDevForIVRawInputPacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall CHidInput::ivRootDeliverRawInput(CHidInput *this, void *a2)
{
  unsigned __int64 v4; // rsi
  PDEVICE_OBJECT v5; // rcx
  unsigned __int16 v6; // r9
  int v8; // eax
  int v9; // ebx
  unsigned __int16 v10; // r9
  struct _ETHREAD *CurrentThread; // r9
  _DWORD *v12; // rcx
  struct _ETHREAD *v13; // r9
  __int64 v14; // [rsp+28h] [rbp-58h]
  _DWORD *v15; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v16; // [rsp+48h] [rbp-38h]
  _DWORD v17[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v18; // [rsp+70h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x1Cu,
      (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
  v4 = ((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL);
  if ( (*(_DWORD *)(v4 + 0xC8) & 0x80u) == 0 )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 29;
LABEL_9:
      WPP_RECORDER_SF_(
        (__int64)v5->DeviceExtension,
        5u,
        0x11u,
        v6,
        (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
      return 0LL;
    }
    return 0LL;
  }
  if ( !*((_BYTE *)this + 1072) )
  {
    v5 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      v6 = 30;
      goto LABEL_9;
    }
    return 0LL;
  }
  WPP_RECORDER_SF_S(
    *((_QWORD *)this + 131),
    4u,
    0x11u,
    0x1Fu,
    (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
    *(const struct _MCGEN_TRACE_CONTEXT **)((((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL)) + 0xD8));
  CIVSerializer::CIVSerializer((CIVSerializer *)&v15, 0x30uLL);
  if ( !v15 )
  {
    v9 = -1073741801;
    v10 = 35;
    goto LABEL_30;
  }
  v8 = IVMeasureRimDevForIVRawInputPacket((struct RIMDEV *)v4, (struct CIVSerializer *)&v15);
  v9 = v8;
  if ( v8 < 0 )
  {
    v10 = 34;
    goto LABEL_15;
  }
  v8 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v15);
  v9 = v8;
  if ( v8 >= 0 )
  {
    v8 = IVSerializeRimDevForIVRawInputPacket((struct RIMDEV *)v4, (struct CIVSerializer *)&v15);
    v9 = v8;
    if ( v8 < 0 )
    {
      v10 = 33;
      goto LABEL_15;
    }
    v17[0] = v16;
    v17[1] = 1;
    v18 = 5LL;
    CurrentThread = KeGetCurrentThread();
    if ( gpfnIVSend )
      v9 = gpfnIVSend(v17, 0x10u, CurrentThread, CurrentThread, this, (int (*)(void *, void *))CBaseInput::_ivCallback);
    else
      v9 = -1073741637;
    if ( v9 >= 0 )
    {
      v12 = v15;
      *v15 = v16;
      v12[1] = 1;
      *((_QWORD *)v12 + 1) = 6LL;
      v13 = KeGetCurrentThread();
      if ( gpfnIVSend )
        v9 = gpfnIVSend(v15, v16, v13, v13, this, (int (*)(void *, void *))CBaseInput::_ivCallback);
      else
        v9 = -1073741637;
      if ( v9 >= 0 )
        goto LABEL_32;
      v10 = 37;
    }
    else
    {
      v10 = 36;
    }
LABEL_30:
    LODWORD(v14) = v9;
    goto LABEL_31;
  }
  v10 = 32;
LABEL_15:
  LODWORD(v14) = v8;
LABEL_31:
  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 131),
    2u,
    0x11u,
    v10,
    (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids,
    v14);
LABEL_32:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x26u,
      (__int64)&WPP_ae04157dca4e331334d9b5583d915129_Traceguids);
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v15);
  return (unsigned int)v9;
}
