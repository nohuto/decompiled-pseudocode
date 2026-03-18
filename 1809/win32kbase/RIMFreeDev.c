/*
 * XREFs of RIMFreeDev @ 0x1C0121F30
 * Callers:
 *     rimOnPnpArrived @ 0x1C004D7FC (rimOnPnpArrived.c)
 *     RIMDeviceClassNotify @ 0x1C004EC60 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00520F8 (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C009206C (RIMDoOnPnpNotification.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C010C710 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C010CCC0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C010CFE0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C010E850 (RIMIDERemoveInjectionDevice.c)
 *     RIMRemoveInjectionDevice @ 0x1C010F560 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C010F79C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDiscoverSpecificDevice @ 0x1C01242A4 (RIMDiscoverSpecificDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C01248AC (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C00893B0 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *i; // rdi
  __int64 v6; // rax

  for ( i = (__int64 *)(a1 + 424); ; i = (__int64 *)(v6 + 40) )
  {
    v6 = *i;
    if ( !*i )
      break;
    if ( v6 == a2 )
    {
      if ( *(_QWORD *)(a2 + 248) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
      *i = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      RIMFreeSpecificDev(a1, a2, a3);
      return 0LL;
    }
  }
  return 0LL;
}
