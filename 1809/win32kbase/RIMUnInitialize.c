/*
 * XREFs of RIMUnInitialize @ 0x1C0092E20
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00E3170 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092ECC (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092F04 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 *     WppCleanupKm @ 0x1C020063C (WppCleanupKm.c)
 */

__int64 RIMUnInitialize()
{
  char *v0; // rdx
  struct _LIST_ENTRY *v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8

  if ( gbRIMInitialized )
  {
    if ( ghModHidParse && *((_QWORD *)ghModHidParse + 3) )
      ZwSetSystemInformation(SystemUnloadGdiDriverInformation, (char *)ghModHidParse + 24, 8uLL);
    dumpLeaks(&gObRimList, "RIMObj leaks");
    dumpRimDevLeaksAndCleanup(v1, v0);
    dumpLeaks(&gObRimInputObserverList, "RIMInputObserver leaks");
    if ( (_UNKNOWN *)RawInputManagerObject::gHidRequestTable != &RawInputManagerObject::gHidRequestTable )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    if ( (__int64 *)qword_1C01D0C40 != &qword_1C01D0C40 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    if ( (__int64 *)qword_1C01D0C50 != &qword_1C01D0C50 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    if ( gRimLog != gBaseLog )
    {
      imp_WppRecorderLogDelete(WPP_GLOBAL_Control, gRimLog);
      gRimLog = 0LL;
    }
    WppCleanupKm();
  }
  return 0LL;
}
