/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C0050410
 * Callers:
 *     RIMDeviceIoControl @ 0x1C004E580 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x1C004E8B0 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C004EA00 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMReadInput @ 0x1C004FC10 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C004FE90 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0050200 (RIMDirectStartStopDeviceRead.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00505A0 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMRemoveInputOfType @ 0x1C00525A0 (RIMRemoveInputOfType.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C007AAD0 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C007AF50 (RIMRegisterForInputWithCallbacks.c)
 *     RIMUnregisterForInput @ 0x1C0087040 (RIMUnregisterForInput.c)
 *     RIMOnPowerNotification @ 0x1C00A41C0 (RIMOnPowerNotification.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00A57F0 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C010BCDC (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C010C710 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C010CB70 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C010CCC0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C010CFE0 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C010D510 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C010D990 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C010DAE0 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C010DD80 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C010E2C0 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C010E500 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C010E6C0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C010EAC0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C010ED80 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C010EF10 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C010F3C0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C010F560 (RIMRemoveInjectionDevice.c)
 *     UserDeactivateMITInputProcessing @ 0x1C0152E34 (UserDeactivateMITInputProcessing.c)
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
