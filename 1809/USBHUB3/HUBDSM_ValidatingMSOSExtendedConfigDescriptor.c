/*
 * XREFs of HUBDSM_ValidatingMSOSExtendedConfigDescriptor @ 0x1C001CBF0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     McTemplateK0p @ 0x1C0006450 (McTemplateK0p.c)
 *     HUBDESC_ValidateMSOSExtendedConfigDescriptor @ 0x1C0034E38 (HUBDESC_ValidateMSOSExtendedConfigDescriptor.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

__int64 __fastcall HUBDSM_ValidatingMSOSExtendedConfigDescriptor(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v2; // esi
  __int64 v3; // rbx
  int v4; // ecx
  char v5; // al
  char v6; // al
  bool v7; // cf
  __int64 v8; // rcx
  char v9; // al
  bool v10; // zf
  char v11; // al
  __int64 v12; // rdx
  __int64 v13; // rax
  struct _MCGEN_TRACE_CONTEXT *v14; // rcx
  void *v15; // rcx
  _QWORD v17[8]; // [rsp+30h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = 4077;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C005F130);
  memset(v17, 0, 0x38uLL);
  v4 = *(_DWORD *)(v3 + 4);
  LOWORD(v17[0]) = *(_WORD *)(v1 + 1990);
  HIDWORD(v17[0]) = *(_DWORD *)(v1 + 172);
  v5 = BYTE5(v17[1]);
  if ( (v4 & 0x20) != 0 )
    v5 = 1;
  v17[5] = v1;
  BYTE5(v17[1]) = v5;
  v6 = HIBYTE(v17[1]);
  if ( (v4 & 0x2000) != 0 )
    v6 = 1;
  v7 = (v4 & 0x4000) != 0;
  v8 = *(_QWORD *)(v1 + 8);
  HIBYTE(v17[1]) = v6;
  v9 = BYTE4(v17[1]);
  if ( v7 )
    v9 = 1;
  v10 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v17[1]) = v9;
  v11 = v17[6];
  if ( !v10 )
    v11 = 1;
  v12 = *(unsigned int *)(v1 + 256);
  LOBYTE(v17[6]) = v11;
  LODWORD(v17[2]) = *(_DWORD *)(v8 + 220);
  v17[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v17[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  v13 = *(_QWORD *)(v8 + 1432);
  if ( (_DWORD)v12 == *(_DWORD *)(v1 + 1732) )
  {
    if ( (unsigned __int8)HUBDESC_ValidateMSOSExtendedConfigDescriptor(*(_QWORD *)(v1 + 2104), v12, v17, v13) )
      return v2;
  }
  else
  {
    WPP_RECORDER_SF_d(v13, 2u, 5u, 0x54u, (__int64)&WPP_35e4ed8c00623fb360e5c36623b584c5_Traceguids, v12, v17[0]);
  }
  if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
    McTemplateK0p(
      v14,
      &USBHUB3_ETW_EVENT_INVALID_MSOS_EXTENDED_CONFIGURATION_DESCRIPTOR,
      (const GUID *)(v1 + 1516),
      *(_QWORD *)(v1 + 24));
  v15 = *(void **)(v1 + 2104);
  v2 = 4065;
  if ( v15 )
  {
    ExFreePoolWithTag(v15, 0x64334855u);
    *(_QWORD *)(v1 + 2104) = 0LL;
  }
  return v2;
}
