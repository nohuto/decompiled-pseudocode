/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C006B9C0
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0069D40 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x1C0069F40 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C006A0B0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMUnregisterForInput @ 0x1C006A630 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C006A9E0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C006AFC0 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C006B250 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C006B6E0 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C006D5B0 (RIMRemoveInputOfType.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C006D770 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C006DC80 (RIMRegisterForInputWithCallbacks.c)
 *     UserDeactivateMITInputProcessing @ 0x1C009D510 (UserDeactivateMITInputProcessing.c)
 *     RIMOnPowerNotification @ 0x1C00B40C0 (RIMOnPowerNotification.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00B4270 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C0135F60 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C01372D0 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0137780 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C0137910 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0137C70 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0138210 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C01386F0 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0138870 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C0138B40 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C01390B0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0139350 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0139560 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C0139940 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C0139C40 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0139E00 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C013A350 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C013A520 (RIMRemoveInjectionDevice.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RawInputManagerObjectResolveHandle(char *a1, ACCESS_MASK a2, KPROCESSOR_MODE a3, PVOID *a4)
{
  NTSTATUS v5; // ebx
  PVOID Object; // [rsp+40h] [rbp+8h] BYREF

  if ( (unsigned __int64)(a1 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    return 3221225480LL;
  v5 = ObReferenceObjectByHandle(a1, a2, ExRawInputManagerObjectType, a3, &Object, 0LL);
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)Object + 1) == 1 )
    {
      *a4 = Object;
    }
    else
    {
      v5 = -1073741788;
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)v5;
}
