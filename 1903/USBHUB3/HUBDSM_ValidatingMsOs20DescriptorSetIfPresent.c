/*
 * XREFs of HUBDSM_ValidatingMsOs20DescriptorSetIfPresent @ 0x1C001F810
 * Callers:
 *     <none>
 * Callees:
 *     McTemplateK0p @ 0x1C0006A6C (McTemplateK0p.c)
 *     HUBDESC_ValidateMsOs20DescriptorSet @ 0x1C003A804 (HUBDESC_ValidateMsOs20DescriptorSet.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBDSM_ValidatingMsOs20DescriptorSetIfPresent(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // rdi
  int v3; // ecx
  char v4; // al
  bool v5; // zf
  char v6; // al
  int v7; // ecx
  __int64 v8; // rax
  struct _MCGEN_TRACE_CONTEXT *v9; // rcx
  char v10; // si
  __int64 result; // rax
  _QWORD v12[8]; // [rsp+20h] [rbp-40h] BYREF

  v1 = *(_QWORD *)(a1 + 960);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, WDFDRIVER__ *, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         WdfDriverGlobals->Driver,
         off_1C0064130);
  memset(v12, 0, 0x38uLL);
  LOWORD(v12[0]) = *(_WORD *)(v1 + 1990);
  HIDWORD(v12[0]) = *(_DWORD *)(v1 + 172);
  v3 = *(_DWORD *)(v2 + 4);
  if ( (v3 & 0x20) != 0 )
  {
    BYTE5(v12[1]) = 1;
    v3 = *(_DWORD *)(v2 + 4);
  }
  if ( (v3 & 0x2000) != 0 )
  {
    HIBYTE(v12[1]) = 1;
    v3 = *(_DWORD *)(v2 + 4);
  }
  v4 = BYTE4(v12[1]);
  if ( (v3 & 0x4000) != 0 )
    v4 = 1;
  v5 = (*(_DWORD *)(v1 + 1644) & 0x200000) == 0;
  BYTE4(v12[1]) = v4;
  v6 = v12[6];
  if ( !v5 )
    v6 = 1;
  LOBYTE(v12[6]) = v6;
  v7 = *(_DWORD *)(*(_QWORD *)(v1 + 8) + 220LL);
  v12[3] = HUBMISC_LogDescriptorValidationErrorForDevice;
  v12[4] = &HUBMISC_LogDescriptorValidationWarningForDevice;
  *(_DWORD *)(v1 + 2476) = *(_DWORD *)(v1 + 256);
  v8 = *(_QWORD *)(v1 + 8);
  LODWORD(v12[2]) = v7;
  v12[5] = v1;
  *(_QWORD *)(v1 + 2560) = *(_QWORD *)(v8 + 1432);
  v10 = HUBDESC_ValidateMsOs20DescriptorSet(v12, v1 + 2464);
  if ( v10 )
  {
    if ( (*(_DWORD *)(v1 + 2464) & 0x200) != 0 )
      _InterlockedOr((volatile signed __int32 *)(v1 + 1632), 4u);
  }
  else
  {
    *(_DWORD *)(v1 + 2432) = 1073807389;
    if ( (BYTE1(WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink) & 2) != 0 )
      McTemplateK0p(
        v9,
        &USBHUB3_ETW_EVENT_INVALID_MSOS20_DESCRIPTOR_SET,
        (const GUID *)(v1 + 1516),
        *(_QWORD *)(v1 + 24),
        v12[0]);
  }
  result = 4065LL;
  if ( v10 == 1 )
    return 4077LL;
  return result;
}
