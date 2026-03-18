/*
 * XREFs of ?xxxTrackingActivateWindow@@YA_NPEAUtagWND@@@Z @ 0x1C01D6378
 * Callers:
 *     xxxActiveWindowTracking @ 0x1C01E41B4 (xxxActiveWindowTracking.c)
 * Callees:
 *     _anonymous_namespace_::xxxLocalActivateWindow @ 0x1C001C72C (_anonymous_namespace_--xxxLocalActivateWindow.c)
 *     ?xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z @ 0x1C0134444 (-xxxSetForegroundWindow2@@YAHPEAUtagWND@@PEAUtagTHREADINFO@@W4SetForegroundBehaviors@@@Z.c)
 *     _anonymous_namespace_::IsForegroundWindow @ 0x1C013A224 (_anonymous_namespace_--IsForegroundWindow.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02D4960 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

bool __fastcall xxxTrackingActivateWindow(struct tagWND *a1)
{
  bool result; // al

  if ( ((unsigned __int8)gpdwCPUserPreferencesMask & 1) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  result = anonymous_namespace_::IsForegroundWindow((__int64)a1);
  if ( !result )
  {
    if ( *(_QWORD *)(*((_QWORD *)a1 + 2) + 424LL) == gpqForeground )
      return anonymous_namespace_::xxxLocalActivateWindow(
               a1,
               0,
               ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 5) & 2);
    else
      return (unsigned int)xxxSetForegroundWindow2(
                             (__int64)a1,
                             0LL,
                             ~(unsigned __int8)((unsigned int)gpdwCPUserPreferencesMask >> 4) & 4 | 2u) != 0;
  }
  return result;
}
