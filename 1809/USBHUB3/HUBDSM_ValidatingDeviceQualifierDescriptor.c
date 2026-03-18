/*
 * XREFs of HUBDSM_ValidatingDeviceQualifierDescriptor @ 0x1C001DBA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingDeviceQualifierDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  unsigned int v3; // eax
  struct _MCGEN_TRACE_CONTEXT *v4; // rcx
  unsigned int v6; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
    WdfDriverGlobals,
    WdfDriverGlobals->Driver,
    off_1C005F130);
  v3 = *(_DWORD *)(v1 + 256);
  if ( v3 >= 0xA )
  {
    _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 0x2000u);
  }
  else
  {
    *(_DWORD *)(v1 + 2432) = 1073807379;
    v6 = v3;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
      2u,
      5u,
      0x4Fu,
      (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids,
      v6);
    v2 = 4065;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
      McTemplateK0p(
        v4,
        &USBHUB3_ETW_EVENT_INVALID_DEVICE_QUALIFIER_DESCRIPTOR,
        (const GUID *)(v1 + 1516),
        *(_QWORD *)(v1 + 24));
  }
  return v2;
}
