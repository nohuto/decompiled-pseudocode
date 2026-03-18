/*
 * XREFs of RawInputManagerObjectResolveHandle @ 0x1C0057A60
 * Callers:
 *     RIMDeviceIoControl @ 0x1C0055DE0 (RIMDeviceIoControl.c)
 *     RIMResetPointerDevices @ 0x1C0055FE0 (RIMResetPointerDevices.c)
 *     RIMDirectPnpRemoveDevicesOfType @ 0x1C0056150 (RIMDirectPnpRemoveDevicesOfType.c)
 *     RIMUnregisterForInput @ 0x1C00566D0 (RIMUnregisterForInput.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C0056A80 (RIMDirectStopDeviceClassNotifications.c)
 *     RIMReadInput @ 0x1C0057060 (RIMReadInput.c)
 *     RIMOnPnpNotification @ 0x1C00572F0 (RIMOnPnpNotification.c)
 *     RIMDirectStartStopDeviceRead @ 0x1C0057780 (RIMDirectStartStopDeviceRead.c)
 *     RIMRemoveInputOfType @ 0x1C0059BC0 (RIMRemoveInputOfType.c)
 *     ?CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z @ 0x1C0059D80 (-CreateHandles@CRIMBase@@IEAAJQEBW4DispatcherHandleName@1@_KP6AXPEAURIMDevChangeStruct@@@ZPEAX@Z.c)
 *     RIMRegisterForInputWithCallbacks @ 0x1C005A290 (RIMRegisterForInputWithCallbacks.c)
 *     UserDeactivateMITInputProcessing @ 0x1C009CC50 (UserDeactivateMITInputProcessing.c)
 *     RIMOnPowerNotification @ 0x1C00B0E00 (RIMOnPowerNotification.c)
 *     RIMDirectStartDeviceClassNotifications @ 0x1C00B6A00 (RIMDirectStartDeviceClassNotifications.c)
 *     ?rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z @ 0x1C01338F0 (-rimOnCheckPointerDeviceMonitors@@YAXPEAXPEAUtagMONITOR@@@Z.c)
 *     RIMAddInjectionDeviceOfType @ 0x1C0134C60 (RIMAddInjectionDeviceOfType.c)
 *     RIMAddInputOfType @ 0x1C0135110 (RIMAddInputOfType.c)
 *     RIMAddNonPnpDeviceOfType @ 0x1C01352A0 (RIMAddNonPnpDeviceOfType.c)
 *     RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle @ 0x1C0135600 (RIMAddNonPnpDeviceOfTypeUsingSuppliedFileHandle.c)
 *     RIMEnableMonitorMappingForDevice @ 0x1C0135BA0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMFreeInputBuffer @ 0x1C0136080 (RIMFreeInputBuffer.c)
 *     RIMGetDevicePreparsedData @ 0x1C0136200 (RIMGetDevicePreparsedData.c)
 *     RIMGetDeviceProperties @ 0x1C01364D0 (RIMGetDeviceProperties.c)
 *     RIMGetDownContactCount @ 0x1C0136A40 (RIMGetDownContactCount.c)
 *     RIMGetPhysicalDeviceRect @ 0x1C0136CE0 (RIMGetPhysicalDeviceRect.c)
 *     RIMGetSourceProcessId @ 0x1C0136EF0 (RIMGetSourceProcessId.c)
 *     RIMInjectInput @ 0x1C01372D0 (RIMInjectInput.c)
 *     RIMIsPrimaryPointerDeviceDown @ 0x1C01375D0 (RIMIsPrimaryPointerDeviceDown.c)
 *     RIMOnTimerNotification @ 0x1C0137790 (RIMOnTimerNotification.c)
 *     RIMRefreshDeviceAttributes @ 0x1C0137CE0 (RIMRefreshDeviceAttributes.c)
 *     RIMRemoveInjectionDevice @ 0x1C0137EB0 (RIMRemoveInjectionDevice.c)
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
