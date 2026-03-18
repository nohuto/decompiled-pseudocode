/*
 * XREFs of HUBDSM_ValidatingMSOSDescriptor @ 0x1C001E7C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  struct _MCGEN_TRACE_CONTEXT *v2; // rcx
  unsigned int v3; // edi
  int v5; // [rsp+28h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 256) == 18 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
      WdfDriverGlobals,
      WdfDriverGlobals->Driver,
      off_1C0064130);
    if ( RtlCompareMemory((const void *)(v1 + 2082), L"MSFT100", 0xEuLL) == 14 )
    {
      v3 = 4077;
      *(_BYTE *)(v1 + 2052) = *(_BYTE *)(v1 + 2096);
      return v3;
    }
  }
  else
  {
    v2 = (struct _MCGEN_TRACE_CONTEXT *)&WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = *(_DWORD *)(v1 + 256);
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(v1 + 8) + 1432LL),
        2u,
        5u,
        0x54u,
        (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
        v5);
    }
  }
  v3 = 4065;
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 1) != 0 )
    McTemplateK0p(v2, &USBHUB3_ETW_EVENT_INVALID_MSOS_DESCRIPTOR, (const GUID *)(v1 + 1516), *(_QWORD *)(v1 + 24));
  return v3;
}
