/*
 * XREFs of HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C002DD0C
 * Callers:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00042A8 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C0004908 (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004C20 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C0005580 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C00073F0 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBPSM20_CheckingIfOvercurrentBitOne @ 0x1C000EB90 (HUBPSM20_CheckingIfOvercurrentBitOne.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001A3C (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C003C980 (memset.c)
 */

void __fastcall HUBREG_UpdateSqmHubOvercurrentDetected(__int64 a1)
{
  int v2; // eax
  _QWORD v3[3]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v4[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v5; // [rsp+90h] [rbp+10h] BYREF

  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x20000000u);
    memset(v4, 0, sizeof(v4));
    v4[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v4[0]) = 56;
    v4[3] = 0x100000001LL;
    v3[1] = HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected;
    v3[2] = 1LL;
    v3[0] = 24LL;
    v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
           WdfDriverGlobals,
           v3,
           v4,
           &v5);
    if ( v2 >= 0 )
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v5);
    else
      WPP_RECORDER_SF_d(
        *(_QWORD *)(a1 + 2520),
        2u,
        3u,
        0x3Au,
        (__int64)&WPP_a5d7102001b13a39eb4d855100c5c7b8_Traceguids,
        v2);
  }
}
