/*
 * XREFs of Controller_ExecuteHSICDisconnectInU3Workaround @ 0x1C0059440
 * Callers:
 *     Controller_WdfEvtDeviceD0Entry @ 0x1C0010120 (Controller_WdfEvtDeviceD0Entry.c)
 *     Controller_WdfEvtDeviceD0Exit @ 0x1C0010910 (Controller_WdfEvtDeviceD0Exit.c)
 * Callees:
 *     WPP_RECORDER_SF_i @ 0x1C00028DC (WPP_RECORDER_SF_i.c)
 *     Controller_IsSecureDevice @ 0x1C000CF68 (Controller_IsSecureDevice.c)
 *     Controller_ExecuteDSM @ 0x1C0059160 (Controller_ExecuteDSM.c)
 *     Controller_ExecuteHSICDisconnectInU3WorkaroundDirect @ 0x1C00594E0 (Controller_ExecuteHSICDisconnectInU3WorkaroundDirect.c)
 */

void __fastcall Controller_ExecuteHSICDisconnectInU3Workaround(__int64 *a1, char a2)
{
  if ( (a1[34] & 0x1000000000000000LL) != 0 )
  {
    WPP_RECORDER_SF_i(a1[9], 4u, 4u, 0xF4u, (__int64)&Context.Logger + 4, *a1);
    if ( Controller_IsSecureDevice((__int64)a1) )
      Controller_ExecuteHSICDisconnectInU3WorkaroundDirect(a1);
    else
      Controller_ExecuteDSM(a1, &GUID_DSM_ENABLE_RTD3, 6 - (a2 != 0), 0, 0LL, 0);
  }
}
