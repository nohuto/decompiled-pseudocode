/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C000F350
 * Callers:
 *     RIMDirectStartStopDeviceRead @ 0x1C000F090 (RIMDirectStartStopDeviceRead.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C00DF034 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C00DFD50 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C00E01B0 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C00E0300 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C00E0610 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMDeviceIoControl @ 0x1C00E0E20 (RIMDeviceIoControl.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C00E11E0 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00E1330 (RIMDirectStartDeviceClassNotifications.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00E1420 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C00E15E0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C00E1D00 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C00E1E40 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C00E20D0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C00E2630 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C00E2840 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C00E29F0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C00E2DB0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C00E3040 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnPnpNotification @ 0x1C00E34B0 (RIMOnPnpNotification.c)
 *     RIMOnPowerNotification @ 0x1C00E3AD0 (RIMOnPowerNotification.c)
 *     RIMOnTimerNotification @ 0x1C00E3E60 (RIMOnTimerNotification.c)
 *     RIMReadInput @ 0x1C00E42E0 (RIMReadInput.c)
 *     RIMRefreshDeviceAttributes @ 0x1C00E4610 (RIMRefreshDeviceAttributes.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C00E4800 (RIMRegisterForInputWithCallbacks.c)
 *     RIMRemoveInjectionDevice @ 0x1C00E53B0 (RIMRemoveInjectionDevice.c)
 *     RIMRemoveInputOfType @ 0x1C00E55D0 (RIMRemoveInputOfType.c)
 *     RIMResetPointerDevices @ 0x1C00E58E0 (RIMResetPointerDevices.c)
 *     RIMUnregisterForInput @ 0x1C00E5A50 (RIMUnregisterForInput.c)
 *     RIMUpdateSecondaryRim @ 0x1C00FB5A4 (RIMUpdateSecondaryRim.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0122260 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0130F14 (UserDeactivateMITInputProcessing.c)
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
