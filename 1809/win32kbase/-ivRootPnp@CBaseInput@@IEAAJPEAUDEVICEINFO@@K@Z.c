/*
 * XREFs of ?ivRootPnp@CBaseInput@@IEAAJPEAUDEVICEINFO@@K@Z @ 0x1C01564F0
 * Callers:
 *     ?ivOnChildNotification@CHidInput@@MEAAJPEAX@Z @ 0x1C014D8A0 (-ivOnChildNotification@CHidInput@@MEAAJPEAX@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0031118 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C005098C (WPP_RECORDER_SF_S.c)
 *     __security_check_cookie @ 0x1C00A63D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AF730 (_guard_dispatch_icall_nop.c)
 *     ??0CIVSerializer@@QEAA@_K@Z @ 0x1C01539B8 (--0CIVSerializer@@QEAA@_K@Z.c)
 *     ??1CIVSerializer@@QEAA@XZ @ 0x1C0153A10 (--1CIVSerializer@@QEAA@XZ.c)
 *     ?ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ @ 0x1C01541CC (-ExtendByMeasuredExtra@CIVSerializer@@QEAAJXZ.c)
 *     ?Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z @ 0x1C0155974 (-Serialize@CIVSerializer@@QEAAJAEAU_UNICODE_STRING@@0_N@Z.c)
 *     ?ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z @ 0x1C01567CC (-ivRootPnpCreated@CBaseInput@@IEAAJPEAURawInputManagerDeviceObject@@@Z.c)
 */

__int64 __fastcall CBaseInput::ivRootPnp(CBaseInput *this, struct DEVICEINFO *a2, int a3)
{
  int v7; // eax
  struct RawInputManagerDeviceObject *v8; // rdx
  struct _UNICODE_STRING *v9; // r14
  int v10; // eax
  int v11; // ebx
  unsigned __int16 v12; // r9
  char *v13; // rdx
  struct _ETHREAD *CurrentThread; // r9
  char *v15; // rcx
  struct _ETHREAD *v16; // r9
  __int64 v17; // [rsp+28h] [rbp-58h]
  char *v18; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v19; // [rsp+48h] [rbp-38h]
  _DWORD v20[2]; // [rsp+68h] [rbp-18h] BYREF
  __int64 v21; // [rsp+70h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x18u,
      (__int64)&WPP_5f1f141a5d793244d005fa8a820fc444_Traceguids);
  WPP_RECORDER_SF_S(
    *((_QWORD *)this + 131),
    4u,
    0x11u,
    0x19u,
    (__int64)&WPP_5f1f141a5d793244d005fa8a820fc444_Traceguids,
    *((const struct _MCGEN_TRACE_CONTEXT **)a2 + 27));
  if ( (*((_DWORD *)a2 + 50) & 0x80u) == 0 )
    return 0LL;
  if ( a3 == 2 )
  {
    v7 = *((_DWORD *)a2 + 46);
    if ( (v7 & 0x20000000) != 0 )
    {
      v8 = (struct RawInputManagerDeviceObject *)*((_QWORD *)a2 + 4);
      *((_DWORD *)a2 + 46) = v7 & 0xDFFFFFFF;
      CBaseInput::ivRootPnpCreated(this, v8);
    }
  }
  CIVSerializer::CIVSerializer((CIVSerializer *)&v18, 0x28uLL);
  if ( !v18 )
  {
    v11 = -1073741801;
    v12 = 29;
    LODWORD(v17) = -1073741801;
    goto LABEL_13;
  }
  v9 = (struct _UNICODE_STRING *)((char *)a2 + 208);
  v10 = CIVSerializer::Serialize(
          (CIVSerializer *)&v18,
          (struct _UNICODE_STRING *)(v18 + 24),
          (struct _UNICODE_STRING *)a2 + 13,
          1);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 28;
    goto LABEL_12;
  }
  v10 = CIVSerializer::ExtendByMeasuredExtra((CIVSerializer *)&v18);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 26;
LABEL_12:
    LODWORD(v17) = v10;
    goto LABEL_13;
  }
  v13 = v18;
  *((_DWORD *)v18 + 1) = 1;
  *((_QWORD *)v13 + 1) = 2LL;
  *((_DWORD *)v13 + 4) = a3;
  v10 = CIVSerializer::Serialize((CIVSerializer *)&v18, (struct _UNICODE_STRING *)(v13 + 24), v9, 0);
  v11 = v10;
  if ( v10 < 0 )
  {
    v12 = 27;
    goto LABEL_12;
  }
  v20[0] = v19;
  v20[1] = 1;
  v21 = 1LL;
  CurrentThread = KeGetCurrentThread();
  if ( gpfnIVSend )
    v11 = gpfnIVSend(v20, 0x10u, CurrentThread, CurrentThread, this, (int (*)(void *, void *))CBaseInput::_ivCallback);
  else
    v11 = -1073741637;
  if ( v11 >= 0 )
  {
    v15 = v18;
    *(_DWORD *)v18 = v19;
    *((_DWORD *)v15 + 1) = 1;
    *((_QWORD *)v15 + 1) = 2LL;
    *((_DWORD *)v15 + 4) = a3;
    v16 = KeGetCurrentThread();
    if ( gpfnIVSend )
      v11 = gpfnIVSend(v18, v19, v16, v16, this, (int (*)(void *, void *))CBaseInput::_ivCallback);
    else
      v11 = -1073741637;
    if ( v11 >= 0 )
      goto LABEL_29;
    v12 = 31;
  }
  else
  {
    v12 = 30;
  }
  LODWORD(v17) = v11;
LABEL_13:
  WPP_RECORDER_SF_d(
    *((_QWORD *)this + 131),
    2u,
    0x11u,
    v12,
    (__int64)&WPP_5f1f141a5d793244d005fa8a820fc444_Traceguids,
    v17);
LABEL_29:
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      0x11u,
      0x20u,
      (__int64)&WPP_5f1f141a5d793244d005fa8a820fc444_Traceguids);
  CIVSerializer::~CIVSerializer((CIVSerializer *)&v18);
  return (unsigned int)v11;
}
