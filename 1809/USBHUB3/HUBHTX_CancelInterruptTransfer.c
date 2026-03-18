/*
 * XREFs of HUBHTX_CancelInterruptTransfer @ 0x1C00035F8
 * Callers:
 *     HUBHSM_CancellingInterruptTransferOnSuspend @ 0x1C00073D0 (HUBHSM_CancellingInterruptTransferOnSuspend.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001E44 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C003C610 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall HUBHTX_CancelInterruptTransfer(__int64 a1)
{
  __int64 result; // rax

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
             WdfDriverGlobals,
             *(_QWORD *)(a1 + 968));
  if ( !(_BYTE)result )
    return WPP_RECORDER_SF_(
             *(_QWORD *)(a1 + 2520),
             2u,
             3u,
             0x1Fu,
             (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
  return result;
}
