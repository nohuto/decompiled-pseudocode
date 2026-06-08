/*
 * XREFs of InitAcpiThrottleStates @ 0x1C0020AF4
 * Callers:
 *     ProcLibDeviceStart @ 0x1C001EF84 (ProcLibDeviceStart.c)
 * Callees:
 *     WPP_RECORDER_SF_D @ 0x1C0001C20 (WPP_RECORDER_SF_D.c)
 *     Display_PCT_PTC @ 0x1C0001F84 (Display_PCT_PTC.c)
 *     _guard_dispatch_icall_nop @ 0x1C0004C70 (_guard_dispatch_icall_nop.c)
 *     Display_TSS @ 0x1C000B304 (Display_TSS.c)
 *     InitAcpi1ThrottleStates @ 0x1C0020BC4 (InitAcpi1ThrottleStates.c)
 *     InitAcpi3ThrottleStates @ 0x1C0020E30 (InitAcpi3ThrottleStates.c)
 *     ValidateAcpiThrottleStates @ 0x1C002B144 (ValidateAcpiThrottleStates.c)
 */

__int64 __fastcall InitAcpiThrottleStates(__int64 a1)
{
  __int64 v2; // rax
  int inited; // edi
  __int64 v5; // rdx
  unsigned int v6; // [rsp+40h] [rbp+8h] BYREF

  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01015 + 2504))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208),
    0LL);
  v2 = *(_QWORD *)(a1 + 264);
  inited = -1073741823;
  if ( (v2 & 0x3000000) != 0 )
  {
    inited = InitAcpi3ThrottleStates(a1);
    if ( inited >= 0 )
      goto LABEL_8;
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFCFFFFFFuLL;
    v2 = *(_QWORD *)(a1 + 264);
  }
  if ( (v2 & 0x300000) == 0 )
    goto LABEL_7;
  inited = InitAcpi1ThrottleStates(a1);
  if ( inited < 0 )
  {
    *(_QWORD *)(a1 + 264) &= 0xFFFFFFFFFFCFFFFFuLL;
    goto LABEL_7;
  }
LABEL_8:
  v5 = *(_QWORD *)(a1 + 472);
  v6 = 0;
  inited = ValidateAcpiThrottleStates(a1 + 448, v5, &v6);
  if ( inited >= 0 )
  {
    inited = 0;
    Display_TSS(*(unsigned int **)(a1 + 472));
    Display_PCT_PTC(a1 + 448, (__int64)"_PTC");
  }
  else
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 1080), v6);
    WPP_RECORDER_SF_D(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      3u,
      3u,
      0x12u,
      (__int64)&WPP_a139920ec3ce3924d30861e7b2217bab_Traceguids,
      inited);
  }
LABEL_7:
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2512))(
    WdfDriverGlobals,
    *(_QWORD *)(a1 + 208));
  return (unsigned int)inited;
}
