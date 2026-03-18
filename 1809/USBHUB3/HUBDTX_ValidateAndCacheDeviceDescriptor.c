/*
 * XREFs of HUBDTX_ValidateAndCacheDeviceDescriptor @ 0x1C0025D78
 * Callers:
 *     HUBDSM_ValidatingAlternateDeviceDescriptor @ 0x1C001C1F0 (HUBDSM_ValidatingAlternateDeviceDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C00349F4 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheDeviceDescriptor(__int64 a1)
{
  int v1; // eax
  __int64 v2; // r14
  unsigned int v4; // esi
  __int64 v5; // rcx
  struct _MCGEN_TRACE_CONTEXT *v6; // rcx
  __int64 v7; // rbx
  int v8; // ecx
  int v9; // edx
  char v10; // al
  char v11; // al
  bool v12; // cf
  __int64 v13; // rcx
  char v14; // al
  bool v15; // zf
  char v16; // al
  _QWORD v18[7]; // [rsp+40h] [rbp-40h] BYREF
  char v19; // [rsp+A0h] [rbp+20h] BYREF

  v1 = *(_DWORD *)(a1 + 256);
  v2 = a1 + 1732;
  v19 = 0;
  v4 = 4077;
  if ( v1 != 18 )
  {
    v5 = *(_QWORD *)(a1 + 8);
    if ( v1 )
    {
      *(_DWORD *)(a1 + 2432) = 1073807365;
      WPP_RECORDER_SF_dD(
        *(_QWORD *)(v5 + 1432),
        2u,
        5u,
        0x4Bu,
        (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
        v1,
        18);
    }
    else
    {
      *(_DWORD *)(a1 + 2432) = 1073807360;
      WPP_RECORDER_SF_(*(_QWORD *)(v5 + 1432), 2u, 5u, 0x4Cu, (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids);
    }
LABEL_15:
    v4 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p(v6, &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR, (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
    return v4;
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  memset(v18, 0, sizeof(v18));
  v8 = *(_DWORD *)(v7 + 4);
  v9 = *(_DWORD *)(a1 + 256);
  LOWORD(v18[0]) = *(_WORD *)(a1 + 1990);
  HIDWORD(v18[0]) = *(_DWORD *)(a1 + 172);
  v10 = BYTE5(v18[1]);
  if ( (v8 & 0x20) != 0 )
    v10 = 1;
  v18[5] = a1;
  BYTE5(v18[1]) = v10;
  v11 = HIBYTE(v18[1]);
  if ( (v8 & 0x2000) != 0 )
    v11 = 1;
  v12 = (v8 & 0x4000) != 0;
  v13 = *(_QWORD *)(a1 + 8);
  HIBYTE(v18[1]) = v11;
  v14 = BYTE4(v18[1]);
  if ( v12 )
    v14 = 1;
  v15 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v18[1]) = v14;
  v16 = v18[6];
  if ( !v15 )
    v16 = 1;
  LOBYTE(v18[6]) = v16;
  LODWORD(v18[2]) = *(_DWORD *)(v13 + 220);
  v18[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v18[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(
                           v2,
                           v9,
                           (unsigned int)v18,
                           (unsigned int)&v19,
                           *(_QWORD *)(v13 + 1432)) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807365;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Du,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      *(_DWORD *)(a1 + 256));
    goto LABEL_15;
  }
  v15 = v19 == 0;
  *(_OWORD *)(a1 + 1988) = *(_OWORD *)v2;
  *(_WORD *)(a1 + 2004) = *(_WORD *)(v2 + 16);
  if ( !v15 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1632), 0x20000u);
  return v4;
}
