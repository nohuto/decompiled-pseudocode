/*
 * XREFs of UsbhSyncResetDeviceInternal @ 0x1C000873C
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 *     UsbhPdoPnp_EnablePdo @ 0x1C001F764 (UsbhPdoPnp_EnablePdo.c)
 *     UsbhPdoPnp_QueryInterface @ 0x1C00261A0 (UsbhPdoPnp_QueryInterface.c)
 *     UsbhFdoResetPdoPort @ 0x1C0042140 (UsbhFdoResetPdoPort.c)
 *     UsbhPortResumeTimeout @ 0x1C0047F10 (UsbhPortResumeTimeout.c)
 *     UsbhFdoSetD0Warm @ 0x1C004A2EC (UsbhFdoSetD0Warm.c)
 *     UsbhPdoWaitForD3Reconnect @ 0x1C004AA00 (UsbhPdoWaitForD3Reconnect.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     Usbh_HubRestoreDevice @ 0x1C0008AD4 (Usbh_HubRestoreDevice.c)
 *     UsbhPCE_QueueDriverReset @ 0x1C0008B58 (UsbhPCE_QueueDriverReset.c)
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0008C18 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhReleaseEnumBusLockEx @ 0x1C000E368 (UsbhReleaseEnumBusLockEx.c)
 *     UsbhRefPdoDeviceHandle @ 0x1C000E5D0 (UsbhRefPdoDeviceHandle.c)
 *     UsbhEtwLogDeviceIrpEvent @ 0x1C000E914 (UsbhEtwLogDeviceIrpEvent.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C000F944 (UsbhLinkPdoDeviceHandle.c)
 *     Usbh_SSH_Event @ 0x1C000FEE0 (Usbh_SSH_Event.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhQueueWorkItemEx @ 0x1C00111F0 (UsbhQueueWorkItemEx.c)
 *     UsbhAcquireEnumBusLock @ 0x1C0011500 (UsbhAcquireEnumBusLock.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C0019870 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     UsbhDerefPdoDeviceHandle @ 0x1C001C330 (UsbhDerefPdoDeviceHandle.c)
 *     UsbhGetSerialNumber @ 0x1C00207C4 (UsbhGetSerialNumber.c)
 *     UsbhFreeID @ 0x1C0020F94 (UsbhFreeID.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_dq @ 0x1C004044C (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qd @ 0x1C00407E0 (WPP_RECORDER_SF_qd.c)
 *     UsbhWaitForBootDevice @ 0x1C0048918 (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhSyncResetDeviceInternal(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3)
{
  char v4; // r12
  __int64 v6; // rbp
  int v7; // r8d
  __int64 v8; // rbx
  KSPIN_LOCK *v9; // rbx
  KIRQL v10; // si
  __int64 v11; // r15
  int v12; // r9d
  int v13; // edx
  __int64 PortData; // rax
  int v15; // edx
  int v16; // r8d
  __int64 v17; // rsi
  __int64 v18; // rbx
  KIRQL v19; // al
  int v20; // edx
  int v22; // edx
  int v23; // r8d
  __int64 v24; // r9
  int v25; // edx
  int v26; // [rsp+48h] [rbp-70h]
  PKSPIN_LOCK SpinLock; // [rsp+50h] [rbp-68h]
  SIZE_T Length[2]; // [rsp+58h] [rbp-60h] BYREF
  struct _KEVENT Event; // [rsp+68h] [rbp-50h] BYREF

  v4 = 0;
  v6 = PdoExt(a3);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      71,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_dq(
      WPP_GLOBAL_Control->DeviceExtension,
      (unsigned int)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      v7,
      72,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      *(_WORD *)(v6 + 1428),
      a3);
  v8 = FdoExt(DeviceObject);
  UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_START, 0LL);
  v9 = (KSPIN_LOCK *)(v8 + 5168);
  SpinLock = v9;
  v10 = KeAcquireSpinLockRaiseToDpc(v9);
  KeInitializeEvent(&Event, NotificationEvent, 0);
  if ( *(_QWORD *)(v6 + 864) )
  {
    Log((_DWORD)DeviceObject, 4, 1380214068, 0, *(_QWORD *)(v6 + 864));
    KeReleaseSpinLock(v9, v10);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, 2147483665LL);
    return 2147483665LL;
  }
  else
  {
    *(_DWORD *)(v6 + 872) = -1;
    *(_QWORD *)(v6 + 864) = &Event;
    *(_QWORD *)(v6 + 880) = KeGetCurrentThread();
    KeReleaseSpinLock(v9, v10);
    v11 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212443759LL);
    UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740898LL, 0LL);
    Log((_DWORD)DeviceObject, 4, 1869374568, 0, v11);
    Usbh_SSH_Event(DeviceObject, (unsigned int)(v12 + 6), a2);
    v13 = *(unsigned __int16 *)(v6 + 1428);
    *(_DWORD *)(v6 + 1420) &= ~0x8000u;
    UsbhPCE_QueueDriverReset((_DWORD)DeviceObject, v13, 0x20000, a2, a3);
    Log((_DWORD)DeviceObject, 4, 1380218740, 0, 0LL);
    PortData = UsbhGetPortData(DeviceObject, *(unsigned __int16 *)(v6 + 1428));
    UsbhWaitEventWithTimeoutEx(DeviceObject, &Event, 0LL, 1380210548LL, 11, PortData);
    v17 = *(int *)(v6 + 872);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_qd(
        WPP_GLOBAL_Control->DeviceExtension,
        v15,
        v16,
        73,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        a3,
        *(_DWORD *)(v6 + 872));
    if ( (v17 & 0xC0000000) == 0xC0000000 )
    {
      Log((_DWORD)DeviceObject, 4, 1380214124, 0, v17);
      UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740856LL, 1LL);
      if ( v11 )
      {
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
      }
      if ( !Usb_Disconnected(v17) )
      {
        LOBYTE(v26) = 0;
        UsbhException((int)DeviceObject, *(unsigned __int16 *)(v6 + 1428), 67, 0, 0, v17, -1, usbfile_bus_c, 6797, v26);
      }
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_qd(
          WPP_GLOBAL_Control->DeviceExtension,
          v22,
          v23,
          74,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          a3,
          v17);
    }
    else
    {
      UsbhAcquireEnumBusLock(DeviceObject, a2, *(unsigned __int16 *)(v6 + 1428));
      v18 = UsbhRefPdoDeviceHandle(DeviceObject, a3, a3, 1212446574LL);
      if ( v18 )
      {
        if ( v11 )
        {
          UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
          Log((_DWORD)DeviceObject, 4, 1381192786, v11, v18);
          v17 = (int)Usbh_HubRestoreDevice(DeviceObject, a3, v11, v18);
          if ( *(_BYTE *)(v6 + 2740) )
          {
            if ( (int)v17 >= 0 && (*(_DWORD *)(v6 + 1420) & 0x204) == 0x200 )
            {
              Length[0] = 0LL;
              Length[1] = 0LL;
              UsbhGetSerialNumber((_DWORD)DeviceObject);
              if ( *(_DWORD *)(v6 + 2132) )
                v4 = 1;
              UsbhFreeID(Length);
            }
            if ( (_DWORD)v17 == -1073741823 )
              v4 = 1;
          }
          Log((_DWORD)DeviceObject, 4, 1380217445, 0, v17);
          UsbhDerefPdoDeviceHandle(DeviceObject, v18, a3, 1212446574LL);
          if ( (v17 & 0xC0000000) == 0xC0000000 )
          {
            LOBYTE(v26) = 0;
            UsbhException(
              (int)DeviceObject,
              *(unsigned __int16 *)(v6 + 1428),
              66,
              0,
              0,
              v17,
              -1,
              usbfile_bus_c,
              6876,
              v26);
            LOBYTE(v24) = 1;
            UsbhUnlinkPdoDeviceHandle(DeviceObject, a3, 2017740899LL, v24);
            UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
          }
        }
        else
        {
          Log((_DWORD)DeviceObject, 4, 1380216684, 0, v17);
          LODWORD(v17) = 0;
          UsbhDerefPdoDeviceHandle(DeviceObject, v18, a3, 1212446574LL);
        }
      }
      else
      {
        Log((_DWORD)DeviceObject, 4, 1380200497, 0, v11);
        UsbhLinkPdoDeviceHandle(DeviceObject, a3, v11);
        UsbhDerefPdoDeviceHandle(DeviceObject, v11, a3, 1212443759LL);
        LODWORD(v17) = -1073741823;
      }
      if ( (int)v17 >= 0 )
      {
        if ( *(_BYTE *)(v6 + 2740) )
        {
          if ( !v4 )
          {
            if ( byte_1C006E688 )
            {
              if ( (*(_DWORD *)(v6 + 1420) & 4) == 0 )
              {
                WmiFireEvent(DeviceObject, &GUID_USB_WMI_SURPRISE_REMOVAL_NOTIFICATION, 0, 0, 0LL);
                LODWORD(v17) = UsbhQueueWorkItemEx(
                                 (_DWORD)DeviceObject,
                                 1,
                                 (unsigned int)UsbhUpdateRegSurpriseRemovalCount,
                                 (unsigned int)&byte_1C006E688,
                                 *(unsigned __int16 *)(v6 + 1428),
                                 2001555795,
                                 0LL);
                if ( (v17 & 0xC0000000) == 0xC0000000 )
                {
                  byte_1C006E688 = 0;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                    WPP_RECORDER_SF_d(
                      WPP_GLOBAL_Control->DeviceExtension,
                      0,
                      1,
                      75,
                      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
                      v17);
                }
              }
            }
          }
        }
      }
      UsbhReleaseEnumBusLockEx(DeviceObject, a2, *(unsigned __int16 *)(v6 + 1428));
      v9 = SpinLock;
    }
    v19 = KeAcquireSpinLockRaiseToDpc(v9);
    *(_QWORD *)(v6 + 864) = 0LL;
    KeReleaseSpinLock(v9, v19);
    if ( v4 )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v20,
          3,
          76,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          (char)DeviceObject);
      Log((_DWORD)DeviceObject, 4, 1397905220, v17, (__int64)DeviceObject);
      UsbhWaitForBootDevice(DeviceObject, a3, 0xFFFFFFFFLL, 1LL);
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          3,
          77,
          (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
          (char)DeviceObject);
    }
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        78,
        (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
        v17);
    UsbhEtwLogDeviceIrpEvent(v6, 0LL, &USBHUB_ETW_EVENT_DEVICE_SYNC_RESET_DEVICE_INTERNAL_COMPLETE, (unsigned int)v17);
    return (unsigned int)v17;
  }
}
