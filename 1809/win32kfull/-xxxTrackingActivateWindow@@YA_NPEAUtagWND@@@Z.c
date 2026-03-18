/*
 * XREFs of ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01C31C0
 * Callers:
 *     xxxActiveWindowTracking @ 0x1C01CF6C8 (xxxActiveWindowTracking.c)
 * Callees:
 *     _anonymous_namespace_::IsForegroundWindow @ 0x1C000B6D4 (_anonymous_namespace_--IsForegroundWindow.c)
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C00AD848 (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z @ 0x1C00D5D9C (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@K@Z.c)
 *     MicrosoftTelemetryAssertTriggeredMsgKM @ 0x1C02C1D3C (MicrosoftTelemetryAssertTriggeredMsgKM.c)
 */

bool __fastcall xxxTrackingActivateWindow(struct tagWND *a1)
{
  bool result; // al

  if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredMsgKM("This method expected to be called only when active window tracking enabled");
  result = anonymous_namespace_::IsForegroundWindow((__int64)a1);
  if ( !result )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 432LL) == gpqForeground )
      return anonymous_namespace_::xxxLocalActivateWindow(
               a1,
               0,
               ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 5) & 2);
    else
      return (unsigned int)xxxSetForegroundWindow2(
                             (LARGE_INTEGER *)a1,
                             0LL,
                             ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 4) & 4 | 2u) != 0;
  }
  return result;
}
