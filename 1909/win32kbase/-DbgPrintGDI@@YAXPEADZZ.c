/*
 * XREFs of ?DbgPrintGDI@@YAXPEADZZ @ 0x1C011E9D0
 * Callers:
 *     RIMWatchDog @ 0x1C0037120 (RIMWatchDog.c)
 *     RIMOpenDev @ 0x1C00531F0 (RIMOpenDev.c)
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMStartDeviceSpecificRead @ 0x1C0062114 (RIMStartDeviceSpecificRead.c)
 *     RIMHandleTTMDeviceArrival @ 0x1C00A49D8 (RIMHandleTTMDeviceArrival.c)
 *     RIMOnPowerNotification @ 0x1C00B0E00 (RIMOnPowerNotification.c)
 *     ?dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z @ 0x1C00B50C8 (-dumpRimDevLeaksAndCleanup@@YAHPEAU_LIST_ENTRY@@PEAD@Z.c)
 *     ?RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z @ 0x1C014ABC0 (-RIMOnTTMDeviceAssignedToTerminal@@YAJ_KK@Z.c)
 *     ?RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z @ 0x1C014ADA0 (-RIMOnTTMDeviceSetInputMode@@YAJ_KW4_WIN32K_INPUT_MODE@@@Z.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 *     rimInputApc @ 0x1C0150BC0 (rimInputApc.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C01513BC (rimProcessDeviceBufferAndStartRead.c)
 *     rimStackAttachAndProcessInput @ 0x1C015233C (rimStackAttachAndProcessInput.c)
 * Callees:
 *     <none>
 */

void DbgPrintGDI(PCCH Format, ...)
{
  va_list va; // [rsp+38h] [rbp+10h] BYREF

  va_start(va, Format);
  vDbgPrintEx(0x70u, 0, Format, va);
}
