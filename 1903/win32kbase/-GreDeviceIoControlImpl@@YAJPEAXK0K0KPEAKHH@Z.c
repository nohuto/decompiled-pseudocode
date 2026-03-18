/*
 * XREFs of ?GreDeviceIoControlImpl@@YAJPEAXK0K0KPEAKHH@Z @ 0x1C004D920
 * Callers:
 *     bSetDeviceSessionUsage @ 0x1C004AA40 (bSetDeviceSessionUsage.c)
 *     ?DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z @ 0x1C004ABB4 (-DrvUpdatePDevForWDDMDevice@@YAXVPDEVOBJ@@@Z.c)
 *     ?DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z @ 0x1C004C5E4 (-DrvGetDeviceConfigurationInformation@@YAXPEAUtagGRAPHICS_DEVICE@@PEAXH@Z.c)
 *     UpdateMonitorDevices @ 0x1C004D700 (UpdateMonitorDevices.c)
 *     DrvUpdateGraphicsDeviceList @ 0x1C004F0F0 (DrvUpdateGraphicsDeviceList.c)
 *     xxxRemoteConnect @ 0x1C0076D40 (xxxRemoteConnect.c)
 *     ?GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z @ 0x1C009A72C (-GetMonitorBrightnessCaps@@YAXPEAU_DISPLAYCONFIG_GET_MONITOR_INTERNAL_INFO@@@Z.c)
 *     DrvSetMonitorsDimState @ 0x1C00A2198 (DrvSetMonitorsDimState.c)
 *     GreGdoDeviceIoControlEx @ 0x1C00BA670 (GreGdoDeviceIoControlEx.c)
 *     ?DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00BA88C (-DrvUpdateRemoteAdapterInfo@@YAJPEAUtagGRAPHICS_DEVICE@@@Z.c)
 *     DrvSetMonitorBrightness @ 0x1C00BEE70 (DrvSetMonitorBrightness.c)
 *     DrvSetVideoParameters @ 0x1C012E690 (DrvSetVideoParameters.c)
 *     EngDeviceIoControl @ 0x1C0130B10 (EngDeviceIoControl.c)
 * Callees:
 *     UserRemoteConnectedSessionUsingXddm @ 0x1C004DAA0 (UserRemoteConnectedSessionUsingXddm.c)
 */

__int64 __fastcall GreDeviceIoControlImpl(
        PDEVICE_OBJECT DeviceObject,
        ULONG IoControlCode,
        PVOID InputBuffer,
        ULONG InputBufferLength,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        unsigned int *a7,
        BOOLEAN InternalDeviceIoControl,
        int a9)
{
  unsigned int Status; // ebx
  PIRP v14; // rdi
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-48h] BYREF
  struct _KEVENT Object; // [rsp+60h] [rbp-38h] BYREF

  IoStatusBlock.Pointer = 0LL;
  IoStatusBlock.Information = 0LL;
  Status = -1073741822;
  if ( !DeviceObject )
    return 3221225480LL;
  if ( InputBufferLength >= 0x2710000
    || OutputBufferLength >= 0x2710000
    || InputBufferLength + OutputBufferLength >= 0x2710000 )
  {
    return 3221225485LL;
  }
  KeInitializeEvent(&Object, SynchronizationEvent, 0);
  v14 = IoBuildDeviceIoControlRequest(
          IoControlCode,
          DeviceObject,
          InputBuffer,
          InputBufferLength,
          OutputBuffer,
          OutputBufferLength,
          InternalDeviceIoControl,
          &Object,
          &IoStatusBlock);
  if ( v14 )
  {
    if ( a9 && (unsigned int)UserRemoteConnectedSessionUsingXddm() )
      v14->Tail.Overlay.CurrentStackLocation[-1].FileObject = FileObject;
    Status = IofCallDriver(DeviceObject, v14);
    if ( Status == 259 )
    {
      while ( KeWaitForSingleObject(&Object, UserRequest, 0, 1u, 0LL) == 257 )
        ;
      Status = IoStatusBlock.Status;
    }
    *a7 = IoStatusBlock.Information;
  }
  return Status;
}
