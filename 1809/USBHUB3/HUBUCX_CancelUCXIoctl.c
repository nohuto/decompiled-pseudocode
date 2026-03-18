/*
 * XREFs of HUBUCX_CancelUCXIoctl @ 0x1C0020BE0
 * Callers:
 *     HUBDSM_CancellingAcquiringAddress0OnDetachInEnum @ 0x1C001B8A0 (HUBDSM_CancellingAcquiringAddress0OnDetachInEnum.c)
 *     HUBDSM_WaitingForUCXIoctlOnStopSuspend @ 0x1C001BA50 (HUBDSM_WaitingForUCXIoctlOnStopSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBUCX_CancelUCXIoctl(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 416));
  if ( !(_BYTE)result )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
             2u,
             5u,
             0x14u,
             (__int64)&WPP_df5029fda23434fb8c7e6119726b3851_Traceguids);
  return result;
}
