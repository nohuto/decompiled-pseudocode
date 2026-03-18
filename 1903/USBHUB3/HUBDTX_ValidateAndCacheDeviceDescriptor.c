/*
 * XREFs of HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0028314
 * Callers:
 *     HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x1C001DCC0 (HUBDSM_ValidatingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0002028 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C00383C0 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheDeviceDescriptor(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  int v7; // edx
  bool v8; // cf
  int v9; // edx
  bool v10; // zf
  _WORD v12[2]; // [rsp+40h] [rbp-40h] BYREF
  int v13; // [rsp+44h] [rbp-3Ch]
  __int64 v14; // [rsp+48h] [rbp-38h]
  int v15; // [rsp+50h] [rbp-30h]
  int v16; // [rsp+54h] [rbp-2Ch]
  __int64 (__fastcall *v17)(_QWORD, _QWORD); // [rsp+58h] [rbp-28h]
  void *v18; // [rsp+60h] [rbp-20h]
  __int64 v19; // [rsp+68h] [rbp-18h]
  _BOOL8 v20; // [rsp+70h] [rbp-10h]
  char v21; // [rsp+A0h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 256);
  v2 = a1 + 1732;
  v21 = 0;
  v4 = 4077;
  if ( v1 != 18 )
  {
    if ( v1 )
    {
      *(_DWORD *)(a1 + 2432) = 1073807365;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_dD(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x4Cu,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
          v1,
          18);
    }
    else
    {
      *(_DWORD *)(a1 + 2432) = 1073807360;
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_(
          *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
          2u,
          5u,
          0x4Du,
          (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids);
    }
LABEL_10:
    v4 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p(
        (struct _MCGEN_TRACE_CONTEXT *)a1,
        &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v4;
  }
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  v6 = *(_QWORD *)(a1 + 8);
  v14 = 0LL;
  v20 = 0LL;
  v7 = *(_DWORD *)(v5 + 4);
  v12[0] = *(_WORD *)(a1 + 1990);
  v13 = *(_DWORD *)(a1 + 172);
  v12[1] = 0;
  *(_WORD *)((char *)&v14 + 5) = (v7 & 0x20) != 0;
  v16 = 0;
  HIBYTE(v14) = (v7 & 0x2000) != 0;
  v8 = (v7 & 0x4000) != 0;
  v9 = *(_DWORD *)(a1 + 256);
  v10 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v14) = v8;
  v19 = a1;
  v20 = !v10;
  v15 = *(_DWORD *)(v6 + 220);
  v17 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v18 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(
                           v2,
                           v9,
                           (unsigned int)v12,
                           (unsigned int)&v21,
                           *(_QWORD *)(v6 + 1432)) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807365;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
        2u,
        5u,
        0x4Eu,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        *(_DWORD *)(a1 + 256));
    goto LABEL_10;
  }
  *(_OWORD *)(a1 + 1988) = *(_OWORD *)v2;
  *(_WORD *)(a1 + 2004) = *(_WORD *)(v2 + 16);
  if ( v21 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x20000u);
  return v4;
}
