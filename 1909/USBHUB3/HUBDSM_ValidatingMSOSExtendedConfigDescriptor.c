/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001E8B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C0038A60 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptor(__int64 a1)
{
  __int64 v1; // rbx
  unsigned int v2; // edi
  __int64 v3; // rax
  int v4; // edx
  bool v5; // cf
  __int64 v6; // rdx
  bool v7; // zf
  __int64 v8; // rcx
  void *v9; // rcx
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h]
  __int64 v13; // [rsp+40h] [rbp-30h]
  __int64 (__fastcall *v14)(_QWORD, _QWORD); // [rsp+48h] [rbp-28h]
  void *v15; // [rsp+50h] [rbp-20h]
  __int64 v16; // [rsp+58h] [rbp-18h]
  _BOOL8 v17; // [rsp+60h] [rbp-10h]

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  v16 = v1;
  v12 = 0LL;
  v17 = 0LL;
  v4 = *(_DWORD *)(v3 + 4);
  LODWORD(v11) = *(unsigned __int16 *)(v1 + 1990);
  HIDWORD(v11) = *(_DWORD *)(v1 + 172);
  *(_WORD *)((char *)&v12 + 5) = (v4 & 0x20) != 0;
  HIDWORD(v13) = 0;
  HIBYTE(v12) = (v4 & 0x2000) != 0;
  v5 = (v4 & 0x4000) != 0;
  v6 = *(unsigned int *)(v1 + 256);
  v7 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v12) = v5;
  v8 = *(_QWORD *)(v1 + 8);
  v17 = !v7;
  LODWORD(v13) = *(_DWORD *)(v8 + 220);
  v14 = HUBMISC_LogDescriptorValidationErrorForDevice;
  v15 = &HUBMISC_LogDescriptorValidationWarningForDevice;
  if ( (_DWORD)v6 == *(_DWORD *)(v1 + 1732) )
  {
    if ( (unsigned __int8)HUBDESC_ValidateMSOSExtendedConfigDescriptor(
                            *(_QWORD *)(v1 + 2104),
                            v6,
                            &v11,
                            *(_QWORD *)(v8 + 1432)) )
      return v2;
  }
  else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    WPP_RECORDER_SF_d(
      *(_QWORD *)(v8 + 1432),
      2u,
      5u,
      0x55u,
      (__int64)&WPP_1e1ac755c39d315bf1a78da78ff32487_Traceguids,
      v6,
      v11,
      v12,
      v13,
      v14,
      v15,
      v16,
      v17);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    McTemplateK0p(
      (struct _MCGEN_TRACE_CONTEXT *)v8,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  v9 = *(void **)(v1 + 2104);
  v2 = 4065;
  if ( v9 )
  {
    ExFreePoolWithTag(v9, 0x64334855u);
    *(_QWORD *)(v1 + 2104) = 0LL;
  }
  return v2;
}
