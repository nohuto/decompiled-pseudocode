/*
 * XREFs of UsbhFdoColdStartPdo @ 0x1C000928C
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhFlushPortChange @ 0x1C0040138 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C0041B44 (WPP_RECORDER_SF_q.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0046B5C (UsbhQueueSoftConnectChange.c)
 *     UsbhWaitForBootDevice @ 0x1C004A29C (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoColdStartPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r14
  __int64 PortState; // rbx
  int v9; // edx
  int v10; // r11d
  int v12; // r9d
  int v13; // eax
  int v14; // r11d
  int v15; // [rsp+40h] [rbp-20h]
  int v16; // [rsp+48h] [rbp-18h]
  int v17; // [rsp+50h] [rbp-10h]

  FdoExt(a1);
  v7 = PdoExt(a3);
  PortState = (int)UsbhQueryPortState(a1);
  Log(a1, 16, 1667518513, *(unsigned __int16 *)(a4 + 4), PortState);
  if ( (PortState & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, v10, 1668035141, 0, PortState);
    if ( !Usb_Disconnected(PortState) )
    {
      LOBYTE(v16) = 0;
      v15 = 3079;
LABEL_8:
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 48, v12, 0, PortState, v17, usbfile_fdopwr_c, v15, v16);
      return (unsigned int)PortState;
    }
  }
  else
  {
    if ( !*(_BYTE *)(v7 + 2740) )
    {
LABEL_3:
      Log(a1, v10, 1667510577, 0, 0LL);
      Log(a1, v14, 1667518516, *(unsigned __int16 *)(a4 + 4), 0LL);
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_DISCONNECT,
        *(unsigned __int16 *)(a4 + 4),
        PortState);
      LOBYTE(v16) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 127, 0, 0, 0, 0, usbfile_fdopwr_c, 3197, v16);
      UsbhQueueSoftConnectChange(a1);
      Log(a1, 16, 1667518517, *(unsigned __int16 *)(a4 + 4), (int)PortState);
      return (unsigned int)PortState;
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_q(
          WPP_GLOBAL_Control->DeviceExtension,
          v9,
          3,
          26,
          (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
          a1);
        v10 = 16;
      }
    }
    Log(a1, v10, 1397899853, 0, a1);
    UsbhWaitForBootDevice(a1, a3, 1LL, 0xFFFFFFFFLL);
    v13 = UsbhQueryPortState(a1);
    LODWORD(PortState) = v13;
    if ( (v13 & 0xC0000000) != 0xC0000000 )
    {
      v10 = 16;
      goto LABEL_3;
    }
    Log(a1, 16, 1668035397, 0, v13);
    if ( !Usb_Disconnected(PortState) )
    {
      LOBYTE(v16) = 0;
      v15 = 3120;
      goto LABEL_8;
    }
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, 0, PortState);
  return 0LL;
}
