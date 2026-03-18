/*
 * XREFs of ?ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01567CC
 * Callers:
 *     ?ivOnChildNotification@CHidInput@@MEAAJPEAX@Z @ 0x1C014D8A0 (-ivOnChildNotification@CHidInput@@MEAAJPEAX@Z.c)
 *     ?ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z @ 0x1C01564F0 (-ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01539B8 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0153A10 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01541CC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C015455C (-IVMeasureRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 *     ?IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z @ 0x1C0154878 (-IVSerializeRimDevForIVPnpCreatePacket@@YAJPEAURIMDEV@@AEAUCIVSerializer@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivRootPnpCreated(CBaseInput *this, struct RawInputManagerDeviceObject *a2)
{
  unsigned __int64 v5; // rsi
  int Packet; // eax
  int v7; // ebx
  unsigned __int16 v8; // r9
  struct _ETHREAD *CurrentThread; // r9
  _DWORD *v10; // rcx
  struct _ETHREAD *v11; // r9
  __int64 v12; // [rsp+28h] [rbp-58h]
  _DWORD *v13; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v14; // [rsp+48h] [rbp-38h]
  _DWORD v15[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0xFu,
      (__int64)&WPP_5f1f141a5d793244d005fa8a820fc444_Traceguids);
  if ( (*((_DWORD *)a2 + 72) & 0x80u) == 0 )
    return 0LL;
  v5 = ((unsigned __int64)a2 + 88) & -(__int64)(a2 != 0LL);
  WPP_RECORDER_SF_S(
    *((_QWORD *)this + 131),
    4u,
    0x11u,
    0x10u,
    (__int64)&WPP_5f1f141a5d793244d005fa8a820fc444_Traceguids,
    *(const struct _MCGEN_TRACE_CONTEXT **)(v5 + 0xD8));
  CIVSerializer::CIVSerializer((CIVSerializer *)&v13, 0x838uLL);
  if ( !v13 )
  {
    v7 = -1073741801;
    v8 = 20;
    goto LABEL_24;
  }
  Packet = IVMeasureRimDevForIVPnpCreatePacket((struct RIMDEV *)v5, (struct CIVSerializer *)&v13);
  v7 = Packet;
  if ( Packet < 0 )
  {
    v8 = 19;
    goto LABEL_9;
  }
  Packet = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v13);
  v7 = Packet;
  if ( Packet >= 0 )
  {
    Packet = IVSerializeRimDevForIVPnpCreatePacket((struct RIMDEV *)v5, (struct CIVSerializer *)&v13);
    v7 = Packet;
    if ( Packet < 0 )
    {
      v8 = 18;
      goto LABEL_9;
    }
    v15[0] = v14;
    v15[1] = 1;
    v16 = 3LL;
    CurrentThread = KeGetCurrentThread();
    if ( gpfnIVSend )
      v7 = gpfnIVSend(v15, 0x10u, CurrentThread, CurrentThread, this, (int (*)(void *, void *))CBaseInput::_ivCallback);
    else
      v7 = -1073741637;
    if ( v7 >= 0 )
    {
      v10 = v13;
      *v13 = v14;
      v10[1] = 1;
      *((_QWORD *)v10 + 1) = 4LL;
      v10[4] = 1;
      v11 = KeGetCurrentThread();
      if ( gpfnIVSend )
        v7 = gpfnIVSend(v13, v14, v11, v11, this, (int (*)(void *, void *))CBaseInput::_ivCallback);
      else
        v7 = -1073741637;
      if ( v7 >= 0 )
        goto LABEL_26;
      v8 = 22;
    }
    else
    {
      v8 = 21;
    }
LABEL_24:
    LODWORD(v12) = v7;
    goto LABEL_25;
  }
  v8 = 17;
LABEL_9:
  LODWORD(v12) = Packet;
LABEL_25:
  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 131),
    2u,
    0x11u,
    v8,
    (__int64)&WPP_5f1f141a5d793244d005fa8a820fc444_Traceguids,
    v12);
LABEL_26:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x17u,
      (__int64)&WPP_5f1f141a5d793244d005fa8a820fc444_Traceguids);
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v13);
  return (unsigned int)v7;
}
