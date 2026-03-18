/*
 * XREFs of UsbhHubStart @ 0x1C001F8E8
 * Callers:
 *     Usbh_FDO_WaitPnpStart @ 0x1C001F6A0 (Usbh_FDO_WaitPnpStart.c)
 *     Usbh_FDO_WaitPnpRestart @ 0x1C00522A0 (Usbh_FDO_WaitPnpRestart.c)
 * Callees:
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 *     UsbhEnableTimerObject @ 0x1C000D520 (UsbhEnableTimerObject.c)
 *     UsbhDisableTimerObject @ 0x1C000F740 (UsbhDisableTimerObject.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhDispatch_BusEvent @ 0x1C001B760 (UsbhDispatch_BusEvent.c)
 *     Usbh_HubRootHubInitNotification @ 0x1C001D428 (Usbh_HubRootHubInitNotification.c)
 *     UsbhFinishStart @ 0x1C001D540 (UsbhFinishStart.c)
 *     UsbhReinitialize @ 0x1C0040CC8 (UsbhReinitialize.c)
 *     WPP_RECORDER_SF_d @ 0x1C00416A0 (WPP_RECORDER_SF_d.c)
 */

__int64 __fastcall UsbhHubStart(__int64 a1, int a2)
{
  _DWORD *v4; // rsi
  int inited; // edi
  int v6; // r8d
  int v8; // edi
  _DWORD *v9; // rax
  __int64 *v10; // rbx
  int v11; // r10d

  v4 = FdoExt(*(_QWORD *)(a1 + 8));
  if ( a2 )
  {
    v8 = a2 - 1;
    if ( v8 )
    {
      if ( v8 == 1 )
      {
        Log(*(_QWORD *)(a1 + 8), 2, 1919243092, 0LL, 0LL);
        inited = UsbhReinitialize(*(_QWORD *)(a1 + 8));
        if ( inited >= 0 )
          return (unsigned int)UsbhFdoSetD0Cold(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, 0);
      }
      else
      {
        return (unsigned int)-1073741823;
      }
    }
    else
    {
      v9 = FdoExt(*(_QWORD *)(a1 + 8));
      v10 = (__int64 *)(v9 + 390);
      Log(*((_QWORD *)v9 + 196), 2, 1635341140, 0LL, (__int64)(v9 + 390));
      inited = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v10, File, 1u, 0x20u);
      if ( (inited & 0xC0000000) != 0xC0000000 )
      {
        Log(v10[1], 8, 1700023634, *((_QWORD *)v4 + 346), 0LL);
        UsbhEnableTimerObject(v10[1], *((_QWORD *)v4 + 346), 1000, 0, (__int64)v10, 0x49577473u);
        inited = Usbh_HubRootHubInitNotification(v10[1], (__int64)v10, (__int64)UsbhInitCallback);
        Log(v10[1], 8, 1919445358, inited, 0LL);
        if ( (inited & 0xC0000000) == 0xC0000000 && inited != -1073741536 )
        {
          Log(v10[1], v11, 2018790738, *((_QWORD *)v4 + 346), 0LL);
          UsbhDisableTimerObject(v10[1], *((_QWORD *)v4 + 346));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED
            && LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_d(
              WPP_GLOBAL_Control->DeviceExtension,
              0,
              1,
              14,
              (__int64)&WPP_2807e7d3015237a995719ea487101337_Traceguids,
              inited);
          }
          IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v4 + 306), v10, 0x20u);
        }
      }
    }
  }
  else
  {
    Log(*(_QWORD *)(a1 + 8), 2, 1937331028, 0LL, 0LL);
    inited = UsbhFinishStart(*(_QWORD *)(a1 + 8), a1);
    v6 = 5;
    if ( inited < 0 )
      v6 = 9;
    UsbhDispatch_BusEvent(*(struct _DEVICE_OBJECT **)(a1 + 8), a1, v6);
  }
  return (unsigned int)inited;
}
