/*
 * XREFs of RIMFreeDev @ 0x1C014B7F4
 * Callers:
 *     rimOnPnpArrived @ 0x1C0055150 (rimOnPnpArrived.c)
 *     RIMDeviceClassNotify @ 0x1C0056C30 (RIMDeviceClassNotify.c)
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C0058E4C (rimHandleAnyPnpRemovePendingDevices.c)
 *     RIMDoOnPnpNotification @ 0x1C00A4EFC (RIMDoOnPnpNotification.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0134C60 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01352A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C01370C8 (RIMIDERemoveInjectionDevice.c)
 *     RIMRemoveInjectionDevice @ 0x1C0137EB0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C013813C (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDiscoverSpecificDevice @ 0x1C014E248 (RIMDiscoverSpecificDevice.c)
 *     RIMVirtDeviceClassNotify @ 0x1C014E8E4 (RIMVirtDeviceClassNotify.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C005B798 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01C8BF4 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
