/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x1C0008C2C
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C0020454 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C0027180 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhFdoResetPdoPort @ 0x1C0043790 (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x1C0049850 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C004BCBC (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004C370 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     UsbhQueueWorkItemEx @ 0x1C0004640 (UsbhQueueWorkItemEx.c)
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     Usbh_HubRestoreDevice @ 0x1C0008FF4 (Usbh_HubRestoreDevice.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0009078 (UsbhPCE_QueueDriverReset.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0009148 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C000EA60 (UsbhRefPdoDeviceHandle.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000EDB8 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C000FFDC (UsbhLinkPdoDeviceHandle.c)
 *     Usbh_SSH_Event @ 0x1C0010580 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0011AF8 (UsbhAcquireEnumBusLock.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C001A060 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C001ADB4 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhGetPortData @ 0x1C001C8F0 (UsbhGetPortData.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001CE30 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhFreeID @ 0x1C001DC1C (UsbhFreeID.c)
 *     UsbhGetSerialNumber @ 0x1C0021554 (UsbhGetSerialNumber.c)
 *     WPP_RECORDER_SF_ @ 0x1C00415CC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C0041A74 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C0041E08 (WPP_RECORDER_SF_qd.c)
 *     UsbhWaitForBootDevice @ 0x1C004A29C (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  char v4; // r13
  int v6; // r8d
  __int64 v7; // r14
  __int64 v8; // rbx
  KSPIN_LOCK *v9; // rbx
  KIRQL v10; // si
  __int64 v11; // r12
  int v12; // edx
  __int64 PortData; // rax
  int v14; // edx
  int v15; // r8d
  __int64 v16; // rsi
  __int64 v17; // r10
  KIRQL v18; // al
  int v19; // edx
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r10
  int v24; // edx
  int v25; // [rsp+48h] [rbp-38h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-28h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-18h] BYREF
  __int64 v29; // [rsp+D8h] [rbp+58h]

  memset(&Event, 0, sizeof(Event));
  v4 = 0;
  v7 = PdoExt(a3);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        71,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_dq(
        WPP_GLOBAL_Control->DeviceExtension,
        (unsigned int)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        v6,
        72,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        *(_WORD *)(v7 + 1428),
        a3);
  }
  v8 = FdoExt(DeviceObject);
  UsbhEtwLogDeviceIrpEvent(v7, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0LL);
  v9 = (KSPIN_LOCK *)(v8 + 5168);
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( !*(_QWORD *)(v7 + 864) )
  {
    *(_DWORD *)(v7 + 872) = -1;
    *(_QWORD *)(v7 + 864) = &Event;
    *(_QWORD *)(v7 + 880) = KeGetCurrentThread();
    KeReleaseSpinLock(v9, v10);
    v11 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212443759LL);
    UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740898LL, 0LL);
    Log((_DWORD)DeviceObject, 4, 1869374568, 0, v11);
    Usbh_SSH_Event(DeviceObject, 6LL, a2);
    v12 = *(unsigned __int16 *)(v7 + 1428);
    *(_DWORD *)(v7 + 1420) &= ~0x8000u;
    UsbhPCE_QueueDriverReset((_DWORD)DeviceObject, v12, 0x20000, a2, a3);
    Log((_DWORD)DeviceObject, 4, 1380218740, 0, 0LL);
    PortData = UsbhGetPortData(DeviceObject, *(unsigned __int16 *)(v7 + 1428));
    UsbhWaitEventWithTimeoutEx(DeviceObject, &Event, 0LL, 1380210548LL, 11, PortData);
    v16 = *(int *)(v7 + 872);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v14,
        v15,
        73,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        a3,
        *(_DWORD *)(v7 + 872));
    if ( (v16 & 0xC0000000) == 0xC0000000 )
    {
      Log((_DWORD)DeviceObject, 4, 1380214124, 0, v16);
      UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740856LL, 1LL);
      if ( v11 )
      {
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
      }
      if ( !Usb_Disconnected(v16) )
      {
        LOBYTE(v25) = v21;
        UsbhException(
          (int)DeviceObject,
          *(unsigned __int16 *)(v7 + 1428),
          67,
          0,
          v21,
          v16,
          -1,
          usbfile_bus_c,
          6797,
          v25);
        v21 = 0;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
        && LOWORD(WPP_GLOBAL_Control->DeviceType) != (_WORD)v21 )
      {
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          v21,
          v22,
          74,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          a3,
          v16);
      }
    }
    else
    {
      UsbhAcquireEnumBusLock(DeviceObject, a2, *(unsigned __int16 *)(v7 + 1428));
      v29 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212446574LL);
      if ( v29 )
      {
        if ( v11 )
        {
          UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
          Log((_DWORD)DeviceObject, 4, 1381192786, v11, v29);
          v16 = (int)Usbh_HubRestoreDevice(DeviceObject, a3, v11, v17);
          if ( *(_BYTE *)(v7 + 2740) )
          {
            if ( (int)v16 >= 0 && (*(_DWORD *)(v7 + 1420) & 0x204) == 0x200 )
            {
              Length[0] = 0LL;
              Length[1] = 0LL;
              UsbhGetSerialNumber((_DWORD)DeviceObject);
              if ( *(_DWORD *)(v7 + 2132) )
                v4 = 1;
              UsbhFreeID(Length);
            }
            if ( (_DWORD)v16 == -1073741823 )
              v4 = 1;
          }
          Log((_DWORD)DeviceObject, 4, 1380217445, 0, v16);
          UsbhDerefPdoDeviceHandle(DeviceObject, v29, a3, 1212446574LL);
          if ( (v16 & 0xC0000000) == 0xC0000000 )
          {
            LOBYTE(v25) = 0;
            UsbhException(
              (int)DeviceObject,
              *(unsigned __int16 *)(v7 + 1428),
              66,
              0,
              0,
              v16,
              -1,
              usbfile_bus_c,
              6876,
              v25);
            UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740899LL, 1LL);
            UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
          }
        }
        else
        {
          Log((_DWORD)DeviceObject, 4, 1380216684, 0, v16);
          LODWORD(v16) = 0;
          UsbhDerefPdoDeviceHandle(DeviceObject, v23, a3, 1212446574LL);
        }
      }
      else
      {
        Log((_DWORD)DeviceObject, 4, 1380200497, 0, v11);
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
        LODWORD(v16) = -1073741823;
      }
      if ( (int)v16 >= 0 )
      {
        if ( *(_BYTE *)(v7 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_1C006F688 )
            {
              if ( (*(_DWORD *)(v7 + 1420) & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v16) = UsbhQueueWorkItemEx(
                                 (__int64)DeviceObject,
                                 1u,
                                 (int)UsbhUpdateRegSurpriseRemovalCount,
                                 (__int64)&byte_1C006F688,
                                 *(unsigned __int16 *)(v7 + 1428),
                                 2001555795,
                                 0LL);
                if ( (v16 & 0xC0000000) == 0xC0000000 )
                {
                  byte_1C006F688 = 0;
                  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
                  {
                    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                      WPP_RECORDER_SF_d(
                        WPP_GLOBAL_Control->DeviceExtension,
                        0,
                        1,
                        75,
                        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
                        v16);
                  }
                }
              }
            }
          }
        }
      }
      UsbhReleaseEnumBusLockEx(DeviceObject, a2, *(unsigned __int16 *)(v7 + 1428));
    }
    v18 = KeAcquireSpinLockRaiseToDpc(v9);
    *(_QWORD *)(v7 + 864) = 0LL;
    KeReleaseSpinLock(v9, v18);
    if ( v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v19,
          3,
          76,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          (char)DeviceObject);
      Log((_DWORD)DeviceObject, 4, 1397905220, v16, (__int64)DeviceObject);
      UsbhWaitForBootDevice(DeviceObject, a3, 0xFFFFFFFFLL, 1LL);
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_24;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v24,
          3,
          77,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          (char)DeviceObject);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_d(
          WPP_GLOBAL_Control->DeviceExtension,
          0,
          1,
          78,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          v16);
    }
LABEL_24:
    UsbhEtwLogDeviceIrpEvent(v7, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, (unsigned int)v16);
    return (unsigned int)v16;
  }
  Log((_DWORD)DeviceObject, 4, 1380214068, 0, *(_QWORD *)(v7 + 864));
  KeReleaseSpinLock(v9, v10);
  UsbhEtwLogDeviceIrpEvent(v7, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, 2147483665LL);
  return 2147483665LL;
}
