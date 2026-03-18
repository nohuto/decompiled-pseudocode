/*
 * XREFs of Controller_ExecuteKBLPowerTransitionWorkaround @ 0x1C00608DC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     Register_UpdateKBLUSB2PMCTRLRegister @ 0x1C0020B10 (Register_UpdateKBLUSB2PMCTRLRegister.c)
 *     Controller_ExecuteDSM @ 0x1C00603A8 (Controller_ExecuteDSM.c)
 */

__int64 __fastcall Controller_ExecuteKBLPowerTransitionWorkaround(__int64 *a1, char a2)
{
  __int64 v4; // rcx

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_i(a1[9], 4u, 4u, 0xF8u, (__int64)&Context.Logger + 4, *a1);
  v4 = a1[11];
  if ( !a2 )
    return Register_UpdateKBLUSB2PMCTRLRegister(v4, 3u);
  Register_UpdateKBLUSB2PMCTRLRegister(v4, 0);
  return Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_KBL_WORKAROUNDS, 1, 2, 0LL, 0);
}
