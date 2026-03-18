/*
 * XREFs of RIMFreeDev @ 0x1C00F78F4
 * Callers:
 *     RIMAddInjectionDeviceOfType @ 0x1C00DFD50 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C00E0300 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C00E0610 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMIDERemoveInjectionDevice @ 0x1C00E2B70 (RIMIDERemoveInjectionDevice.c)
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     RIMRemoveInjectionDevice @ 0x1C00E53B0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveMouseOrKeyboardInjectionDevice @ 0x1C00E5724 (RIMRemoveMouseOrKeyboardInjectionDevice.c)
 *     RIMDiscoverSpecificDevice @ 0x1C00F9FF8 (RIMDiscoverSpecificDevice.c)
 *     RIMDeviceClassNotify @ 0x1C00FA2A0 (RIMDeviceClassNotify.c)
 *     RIMDoOnPnpNotification @ 0x1C00FAC6C (RIMDoOnPnpNotification.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x1C00FCB10 (rimHandleAnyPnpRemovePendingDevices.c)
 *     rimOnPnpArrived @ 0x1C00FCE28 (rimOnPnpArrived.c)
 * Callees:
 *     RIMFreeSpecificDev @ 0x1C00F7964 (RIMFreeSpecificDev.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMFreeDev(__int64 a1, __int64 a2)
{
  __int64 *i; // rdi
  __int64 v5; // rax

  for ( i = (__int64 *)(a1 + 408); ; i = (__int64 *)(v5 + 40) )
  {
    v5 = *i;
    if ( !*i )
      break;
    if ( v5 == a2 )
    {
      if ( *(_QWORD *)(a2 + 248) )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2);
      *i = *(_QWORD *)(a2 + 40);
      *(_QWORD *)(a2 + 40) = 0LL;
      RIMFreeSpecificDev(a1, a2);
      return 0LL;
    }
  }
  return 0LL;
}
