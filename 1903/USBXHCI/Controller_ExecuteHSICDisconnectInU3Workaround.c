/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C00606EC
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0012B90 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C00134B0 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C0002D84 (WPP_RECORDER_SF_i.c)
 *     Controller_IsSecureDevice @ 0x1C000F418 (Controller_IsSecureDevice.c)
 *     Controller_ExecuteDSM @ 0x1C00603A8 (Controller_ExecuteDSM.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C006079C (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 */

void __fastcall Controller_ExecuteHSICDisconnectInU3Workaround(__int64 *a1, char a2)
{
  if ( (a1[42] & 0x1000000000000000LL) != 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_i(a1[9], 4u, 4u, 0xF7u, (__int64)&Context.Logger + 4, *a1);
    if ( Controller_IsSecureDevice((__int64)a1) )
      Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(a1);
    else
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 6 - (a2 != 0), 0, 0LL, 0);
  }
}
