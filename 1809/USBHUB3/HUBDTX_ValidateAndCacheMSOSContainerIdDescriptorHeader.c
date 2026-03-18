/*
 * XREFs of HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader @ 0x1C0026370
 * Callers:
 *     HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor @ 0x1C001CAF0 (HUBDSM_ValidatingMSOSContainerIdHeaderDescriptor.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C0001F18 (WPP_RECORDER_SF_dD.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBMISC_LogDescriptorValidationErrorForDevice @ 0x1C002D4E0 (HUBMISC_LogDescriptorValidationErrorForDevice.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDTX_ValidateAndCacheMSOSContainerIdDescriptorHeader(__int64 a1)
{
  unsigned int v2; // r14d
  __int64 v3; // rbp
  char v4; // al
  unsigned __int16 v5; // cx
  unsigned __int16 v6; // cx
  struct _MCGEN_TRACE_CONTEXT *v7; // rcx
  __int64 v9; // [rsp+28h] [rbp-20h]
  int v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+28h] [rbp-20h]
  __int64 v12; // [rsp+30h] [rbp-18h]
  int v13; // [rsp+30h] [rbp-18h]

  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C005F130);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL);
  v4 = 1;
  if ( *(_DWORD *)(a1 + 256) != 8 )
  {
    v10 = *(_DWORD *)(a1 + 256);
    WPP_RECORDER_SF_d(v3, 2u, 5u, 0x106u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v10);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 117LL);
LABEL_10:
    WPP_RECORDER_SF_(v3, 2u, 5u, 0x10Au, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids);
    *(_DWORD *)(a1 + 2432) = 1073807381;
    v2 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0p(
        v7,
        &USBHUB3_ETW_EVENT_INVALID_MSOS_CONTAINER_ID_DESCRIPTOR_HEADER,
        (const GUID *)(a1 + 1516),
        *(_QWORD *)(a1 + 24));
    return v2;
  }
  v5 = *(_WORD *)(a1 + 1736);
  if ( v5 != 256 )
  {
    v13 = 256;
    v11 = v5;
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x107u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v11, v13);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 115LL);
    v4 = 0;
  }
  v6 = *(_WORD *)(a1 + 1738);
  if ( v6 != 6 )
  {
    LODWORD(v12) = 6;
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x108u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v9, v12);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 116LL);
    v4 = 0;
  }
  if ( *(_DWORD *)(a1 + 1732) != 24 )
  {
    LODWORD(v12) = 24;
    LODWORD(v9) = *(_DWORD *)(a1 + 1732);
    WPP_RECORDER_SF_dD(v3, 2u, 5u, 0x109u, (__int64)&WPP_78dee903e07d3ced2930c3a7d0bd69e9_Traceguids, v9, v12);
    HUBMISC_LogDescriptorValidationErrorForDevice(a1, 118LL);
    v4 = 0;
  }
  if ( !v4 )
    goto LABEL_10;
  return v2;
}
