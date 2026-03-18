/*
 * XREFs of HUBHTX_CancelControlTransfer @ 0x1C0003E14
 * Callers:
 *     HUBPSM20_CancellingDisableOnHubStopSuspend @ 0x1C000FC00 (HUBPSM20_CancellingDisableOnHubStopSuspend.c)
 *     HUBPSM30_CancellingResetOnSurpriseRemove @ 0x1C000FC20 (HUBPSM30_CancellingResetOnSurpriseRemove.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001F54 (WPP_RECORDER_SF_.c)
 *     _guard_dispatch_icall_nop @ 0x1C00412F0 (_guard_dispatch_icall_nop.c)
 */

_UNKNOWN **__fastcall HUBHTX_CancelControlTransfer(__int64 a1)
{
  _UNKNOWN **result; // rax

  result = (_UNKNOWN **)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 2064))(
                          WdfDriverGlobals,
                          *(_QWORD *)(a1 + 16));
  if ( !(_BYTE)result )
  {
    result = &WPP_RECORDER_INITIALIZED;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return (_UNKNOWN **)WPP_RECORDER_SF_(
                            *(_QWORD *)(a1 + 1432),
                            2u,
                            4u,
                            0x27u,
                            (__int64)&WPP_74185d68226e30ea568d483797443b73_Traceguids);
  }
  return result;
}
