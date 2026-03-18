/*
 * XREFs of HUBREG_UpdateSqmHubOvercurrentDetected @ 0x1C003085C
 * Callers:
 *     HUBHTX_Get20PortChangeEvent @ 0x1C00045C4 (HUBHTX_Get20PortChangeEvent.c)
 *     HUBHTX_GetPortLostChangeEvent @ 0x1C0004CC8 (HUBHTX_GetPortLostChangeEvent.c)
 *     HUBHTX_Get30PortChangeEvent @ 0x1C0004FE0 (HUBHTX_Get30PortChangeEvent.c)
 *     HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset @ 0x1C0005A94 (HUBHTX_GetErrorResponseEventForInvalidPortStatusInPendingReset.c)
 *     HUBHSM_CheckIfThereIsAValidHubChange @ 0x1C0007CF0 (HUBHSM_CheckIfThereIsAValidHubChange.c)
 *     HUBPSM20_CheckingIfOvercurrentBitOne @ 0x1C000FCA0 (HUBPSM20_CheckingIfOvercurrentBitOne.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBREG_UpdateSqmHubOvercurrentDetected(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v4)(); // [rsp+38h] [rbp-48h]
  __int64 v5; // [rsp+40h] [rbp-40h]
  _QWORD v6[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v7; // [rsp+90h] [rbp+10h] BYREF

  memset(v6, 0, sizeof(v6));
  result = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  if ( (*(_DWORD *)(a1 + 40) & 0x20000000) == 0 )
  {
    _InterlockedOr((volatile signed __int32 *)(a1 + 40), 0x20000000u);
    memset(v6, 0, sizeof(v6));
    v6[4] = *(_QWORD *)(a1 + 16);
    LODWORD(v6[0]) = 56;
    v6[3] = 0x100000001LL;
    v4 = HUBREG_EvtWorkItemUpdateSqmHubOvercurrentDetected;
    v5 = 1LL;
    v3 = 24LL;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
               WdfDriverGlobals,
               &v3,
               v6,
               &v7);
    if ( (int)result >= 0 )
    {
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v7);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(a1 + 2520),
               2u,
               3u,
               0x3Au,
               (__int64)&WPP_c20ed9a0a0fe3a4cd923be00534b700c_Traceguids,
               result);
    }
  }
  return result;
}
