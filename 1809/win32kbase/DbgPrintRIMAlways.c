/*
 * XREFs of DbgPrintRIMAlways @ 0x1C00F9910
 * Callers:
 *     RIMWatchDog @ 0x1C0032AE0 (RIMWatchDog.c)
 *     RIMOpenDev @ 0x1C0049C08 (RIMOpenDev.c)
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMStartDeviceSpecificRead @ 0x1C008DF48 (RIMStartDeviceSpecificRead.c)
 *     rimInputApc @ 0x1C008E340 (rimInputApc.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00924DC (RIMHandleTTMDeviceArrival.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C0092F04 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     RIMOnPowerNotification @ 0x1C00A41C0 (RIMOnPowerNotification.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C0120F90 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C0121120 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C0126BEC (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C0127974 (rimStackAttachAndProcessInput.c)
 * Callees:
 *     <none>
 */

ULONG DbgPrintRIMAlways(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  return vDbgPrintEx(0x70u, 0, Format, va);
}
