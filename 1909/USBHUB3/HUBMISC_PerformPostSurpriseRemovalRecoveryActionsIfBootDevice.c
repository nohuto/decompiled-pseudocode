/*
 * XREFs of HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice @ 0x1C002F820
 * Callers:
 *     HUBMISC_IsBootDeviceReady @ 0x1C002F5D4 (HUBMISC_IsBootDeviceReady.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0001B44 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0041640 (memset.c)
 */

__int64 __fastcall HUBMISC_PerformPostSurpriseRemovalRecoveryActionsIfBootDevice(__int64 a1)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall *v6)(); // [rsp+38h] [rbp-48h]
  __int64 v7; // [rsp+40h] [rbp-40h]
  _QWORD v8[7]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v9; // [rsp+90h] [rbp+10h] BYREF

  memset(v8, 0, sizeof(v8));
  v2 = *(_QWORD *)(a1 + 8);
  v5 = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  result = *(unsigned int *)(v2 + 1336);
  if ( (result & 0x10) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(v2 + 1336), 0xFFFFFFEF);
    memset(v8, 0, sizeof(v8));
    v4 = *(_QWORD *)(a1 + 16);
    LODWORD(v8[0]) = 56;
    v8[3] = 0x100000001LL;
    v8[4] = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v4);
    v7 = 1LL;
    v6 = HUBREG_EvtWorkItemPerformPostSurpriseRemovalRecoveryActions;
    v5 = 24LL;
    result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64 *, _QWORD *, __int64 *))(WdfFunctions_01015 + 3032))(
               WdfDriverGlobals,
               &v5,
               v8,
               &v9);
    if ( (int)result >= 0 )
    {
      return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 3040))(WdfDriverGlobals, v9);
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      return WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               2u,
               0x70u,
               (__int64)&WPP_699d44e6015a36edc2e41426686ae77e_Traceguids,
               result);
    }
  }
  return result;
}
