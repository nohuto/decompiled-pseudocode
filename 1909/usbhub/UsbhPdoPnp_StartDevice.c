/*
 * XREFs of UsbhPdoPnp_StartDevice @ 0x1C0021190
 * Callers:
 *     <none>
 * Callees:
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000EDB8 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhDisableTimerObject @ 0x1C000F740 (UsbhDisableTimerObject.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhIncHubBusy @ 0x1C0019CD0 (UsbhIncHubBusy.c)
 *     UsbhDecHubBusy @ 0x1C001AEC0 (UsbhDecHubBusy.c)
 *     Usbh__TestPoint__Ulong @ 0x1C001D1AC (Usbh__TestPoint__Ulong.c)
 *     UsbhSetPdo_AllowIo @ 0x1C001FDB0 (UsbhSetPdo_AllowIo.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0020454 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhEtwLogDeviceDescription @ 0x1C0020660 (UsbhEtwLogDeviceDescription.c)
 *     UsbhPdoCreateSymbolicLink @ 0x1C0020F3C (UsbhPdoCreateSymbolicLink.c)
 *     UsbhPdoRegisterWmi @ 0x1C0021024 (UsbhPdoRegisterWmi.c)
 *     UsbhPdoSetDeviceData @ 0x1C00210D0 (UsbhPdoSetDeviceData.c)
 *     UsbhReadPdoRegistryKeys @ 0x1C00224E0 (UsbhReadPdoRegistryKeys.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     UsbhUpdateSqmFlags @ 0x1C0078008 (UsbhUpdateSqmFlags.c)
 */

__int64 __fastcall UsbhPdoPnp_StartDevice(PDEVICE_OBJECT DeviceObject, PIRP Irp)
{
  _DWORD *v4; // rsi
  int v5; // edx
  __int64 v6; // rcx
  _DWORD *v7; // rax
  _QWORD *v8; // r13
  signed int DeviceProperty; // ebp
  void *v10; // rcx
  __int64 v11; // rcx
  PVOID PoolWithTag; // rax
  void *v13; // rdi
  GUID *v14; // rdx
  _DWORD *v15; // rax
  __int64 v16; // r8
  __int64 v17; // rdx
  int v18; // edi
  _DWORD *v20; // rdi
  int v21; // [rsp+48h] [rbp-30h]
  ULONG ResultLength; // [rsp+88h] [rbp+10h] BYREF

  v4 = PdoExt((__int64)DeviceObject);
  UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_DISPATCH);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      WPP_GLOBAL_Control->DeviceExtension,
      v5,
      1,
      14,
      (__int64)&WPP_f2aca5edc47035375c4b9957b65d3b97_Traceguids,
      (char)DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[280] == 101 )
  {
    v18 = 0;
    goto LABEL_24;
  }
  UsbhSetPdo_AllowIo(v6, (__int64)DeviceObject);
  UsbhDisableTimerObject(*((_QWORD *)v4 + 148), (__int64)(v4 + 426));
  v7 = PdoExt((__int64)DeviceObject);
  v8 = (_QWORD *)UsbhIncHubBusy(*((_QWORD *)v4 + 148), (__int64)(v7 + 236), (__int64)DeviceObject, 1346728819, 1);
  KeWaitForSingleObject(v4 + 724, Executive, 0, 0, 0LL);
  DeviceProperty = UsbhPdoPnp_EnablePdo((__int64)DeviceObject);
  if ( PdoExt((__int64)DeviceObject)[280] == 103 || PdoExt((__int64)DeviceObject)[280] == 102 )
  {
    v20 = PdoExt((__int64)DeviceObject);
    IoSetDevicePropertyData(DeviceObject, &DEVPKEY_Device_DriverProblemDesc, 0, 0, 0, 0, 0LL);
    v20[705] = 0;
    if ( (v4[283] & 4) != 0 )
    {
      DeviceProperty = 0;
      goto LABEL_21;
    }
  }
  if ( (DeviceProperty & 0xC0000000) != 0xC0000000 && PdoExt((__int64)DeviceObject)[280] != 103 )
  {
    v10 = (void *)*((_QWORD *)v4 + 280);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0);
      *((_QWORD *)v4 + 280) = 0LL;
    }
    DeviceProperty = IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0, 0LL, &ResultLength);
    if ( DeviceProperty != -1073741789 || !ResultLength )
      goto LABEL_16;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, ResultLength, 0x42554855u);
    v13 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_21;
    memset(PoolWithTag, 0, ResultLength);
    DeviceProperty = IoGetDeviceProperty(
                       DeviceObject,
                       DevicePropertyDeviceDescription,
                       ResultLength,
                       v13,
                       &ResultLength);
    if ( DeviceProperty >= 0 )
    {
      *((_QWORD *)v4 + 280) = v13;
      v4[562] = ResultLength;
      UsbhEtwLogDeviceDescription((__int64)v4, &USBHUB_ETW_EVENT_DEVICE_START_DEVICE_DESCRIPTION);
LABEL_16:
      DeviceProperty = UsbhReadPdoRegistryKeys(v11, DeviceObject);
      if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
      {
        UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_REGISTRY_FAILURE);
      }
      else
      {
        v14 = &GUID_DEVINTERFACE_USB_HUB;
        if ( (v4[355] & 4) == 0 )
          v14 = &GUID_DEVINTERFACE_USB_DEVICE;
        DeviceProperty = UsbhPdoCreateSymbolicLink(DeviceObject, v14);
        if ( (DeviceProperty & 0xC0000000) == 0xC0000000 )
          UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, &USBHUB_ETW_EVENT_DEVICE_START_SYMBOLIC_LINK_FAILURE);
        else
          UsbhPdoRegisterWmi(DeviceObject);
      }
      goto LABEL_21;
    }
    ExFreePoolWithTag(v13, 0);
  }
LABEL_21:
  v15 = PdoExt((__int64)DeviceObject);
  v16 = ((unsigned __int8)v15[3] + 1) & 7;
  v15[3] = v16;
  v16 *= 32LL;
  *(_DWORD *)((char *)v15 + v16 + 528) = 1;
  *(_DWORD *)((char *)v15 + v16 + 532) = v15[280];
  *(_DWORD *)((char *)v15 + v16 + 536) = 101;
  v15[280] = 101;
  KeSetEvent((PRKEVENT)(v4 + 724), 0, 0);
  PdoExt((__int64)DeviceObject);
  UsbhDecHubBusy(*((_QWORD *)v4 + 148), v17, v8);
  UsbhPdoSetDeviceData(*((_QWORD *)v4 + 148), (__int64)DeviceObject, (__int64)DeviceObject);
  v18 = Usbh__TestPoint__Ulong(*((_QWORD *)v4 + 148), 2u, DeviceProperty, *((unsigned __int16 *)v4 + 714));
  if ( v18 < 0 )
  {
    LOBYTE(v21) = 0;
    UsbhException(*((_QWORD *)v4 + 148), *((unsigned __int16 *)v4 + 714), 103, 0, 0, v18, 0, usbfile_pdo_c, 1564, v21);
  }
  else if ( (v4[355] & 1) != 0 )
  {
    LOBYTE(v21) = 0;
    UsbhException(*((_QWORD *)v4 + 148), *((unsigned __int16 *)v4 + 714), 42, 0, 0, v18, 0, usbfile_pdo_c, 1548, v21);
  }
LABEL_24:
  Log(*((_QWORD *)v4 + 148), 256, 1398035004, (__int64)Irp, v18);
  UsbhEtwLogDeviceIrpEvent((__int64)v4, (__int64)Irp, (const EVENT_DESCRIPTOR *)"w");
  Irp->IoStatus.Status = v18;
  IofCompleteRequest(Irp, 0);
  UsbhUpdateSqmFlags(DeviceObject);
  return (unsigned int)v18;
}
