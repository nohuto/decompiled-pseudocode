/*
 * XREFs of RIMUnInitialize @ 0x1C00B4FE0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C00B2090 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 * Callees:
 *     ?dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B5084 (-dumpLeaks@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B50C8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
    if ( (__int64 *)qword_1C02157A0 != &qword_1C02157A0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
    if ( (__int64 *)qword_1C02157B0 != &qword_1C02157B0 )
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v3, v2, v4);
  }
  return 0LL;
}
