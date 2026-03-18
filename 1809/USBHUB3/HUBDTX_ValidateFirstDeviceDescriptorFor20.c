/*
 * XREFs of HUBDTX_ValidateFirstDeviceDescriptorFor20 @ 0x1C0025FC0
 * Callers:
 *     HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero @ 0x1C001BE10 (HUBDSM_ValidatingDeviceDescriptorInReEnumAtZero.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBDESC_ValidateDeviceDescriptor @ 0x1C00349F4 (HUBDESC_ValidateDeviceDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBDTX_ValidateFirstDeviceDescriptorFor20(__int64 a1)
{
  unsigned int v1; // eax
  __int64 v2; // rsi
  unsigned int v4; // r14d
  struct _MCGEN_TRACE_CONTEXT *v5; // rcx
  __int64 v6; // rbx
  int v7; // ecx
  int v8; // edx
  char v9; // al
  char v10; // al
  bool v11; // cf
  __int64 v12; // rcx
  char v13; // al
  bool v14; // zf
  char v15; // al
  _QWORD v17[7]; // [rsp+30h] [rbp-40h] BYREF

  v1 = *(_DWORD *)(a1 + 256);
  v2 = a1 + 1732;
  v4 = 4077;
  if ( v1 < 8 )
  {
    *(_DWORD *)(a1 + 2432) = v1 != 0 ? 1073807365 : 1073807360;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x4Eu,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      *(_DWORD *)(a1 + 256));
    goto LABEL_13;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  memset(v17, 0, sizeof(v17));
  v7 = *(_DWORD *)(v6 + 4);
  v8 = *(_DWORD *)(a1 + 256);
  LOWORD(v17[0]) = *(_WORD *)(a1 + 1990);
  HIDWORD(v17[0]) = *(_DWORD *)(a1 + 172);
  v9 = BYTE5(v17[1]);
  if ( (v7 & 0x20) != 0 )
    v9 = 1;
  v17[5] = a1;
  BYTE5(v17[1]) = v9;
  v10 = HIBYTE(v17[1]);
  if ( (v7 & 0x2000) != 0 )
    v10 = 1;
  v11 = (v7 & 0x4000) != 0;
  v12 = *(_QWORD *)(a1 + 8);
  HIBYTE(v17[1]) = v10;
  v13 = BYTE4(v17[1]);
  if ( v11 )
    v13 = 1;
  v14 = (*(_DWORD *)(a1 + 1644) & 0x200000) == 0;
  BYTE4(v17[1]) = v13;
  v15 = v17[6];
  if ( !v14 )
    v15 = 1;
  LOBYTE(v17[6]) = v15;
  LODWORD(v17[2]) = *(_DWORD *)(v12 + 220);
  v17[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v17[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( !(unsigned __int8)HUBDESC_ValidateDeviceDescriptor(v2, v8, (unsigned int)v17, 0, *(_QWORD *)(v12 + 1432)) )
  {
    *(_DWORD *)(a1 + 2432) = 1073807365;
LABEL_13:
    v4 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p(v5, &USBHUB3_ETW_EVENT_INVALID_DEVICE_DESCRIPTOR, (const GUID *)(a1 + 1516), *(_QWORD *)(a1 + 24));
    return v4;
  }
  *(_DWORD *)(a1 + 160) = *(unsigned __int8 *)(v2 + 7);
  *(_QWORD *)(a1 + 1988) = *(_QWORD *)v2;
  if ( *(_WORD *)(v2 + 8) == 5118 && *(_WORD *)(v2 + 10) == 20992 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1644), 0x400000u);
  return v4;
}
