/*
 * XREFs of HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader @ 0x1C002669C
 * Callers:
 *     HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader @ 0x1C001CD90 (HUBDSM_ValidatingMSOSExtendedConfigDescriptorHeader.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002D4E0 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheMSOSExtendedConfigDescriptorHeader(__int64 a1)
{
  unsigned int v2; // r15d
  char v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdx
  unsigned __int16 v6; // ax
  unsigned __int16 v7; // ax
  struct _MCGEN_TRACE_CONTEXT *v8; // rcx
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-20h]
  __int64 v13; // [rsp+30h] [rbp-18h]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C005F130);
  v3 = 1;
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
  if ( *(_DWORD *)(a1 + 256) != 16 )
  {
    v14 = 16;
    v11 = *(_DWORD *)(a1 + 256);
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x113u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v11, v14);
    v5 = 122LL;
LABEL_3:
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, v5);
LABEL_13:
    WPP_RECORDER_SF_(v4, 2u, 5u, 0x118u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    *(_DWORD *)(a1 + 2432) = 1073807382;
    v2 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p(
        v8,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR_HEADER,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v2;
  }
  v6 = *(_WORD *)(a1 + 1736);
  if ( v6 != 256 )
  {
    v15 = 256;
    v12 = v6;
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x114u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v12, v15);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 120LL);
    v3 = 0;
  }
  v7 = *(_WORD *)(a1 + 1738);
  if ( v7 != 4 )
  {
    LODWORD(v13) = 4;
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x115u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v10, v13);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 125LL);
    v3 = 0;
  }
  if ( *(_BYTE *)(a1 + 1740) != 1 )
  {
    WPP_RECORDER_SF_(v4, 2u, 5u, 0x116u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    v5 = 121LL;
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 1732) != 40 )
  {
    v3 = 0;
    LODWORD(v13) = 40;
    LODWORD(v10) = *(_DWORD *)(a1 + 1732);
    WPP_RECORDER_SF_dD(v4, 2u, 5u, 0x117u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v10, v13);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 127LL);
  }
  if ( !v3 )
    goto LABEL_13;
  return v2;
}
