/*
 * XREFs of UsbhFdoColdStartPdo @ 0x1C0008D5C
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007460 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001B740 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhFlushPortChange @ 0x1C003EB68 (UsbhFlushPortChange.c)
 *     WPP_RECORDER_SF_q @ 0x1C004051C (WPP_RECORDER_SF_q.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0045370 (UsbhQueueSoftConnectChange.c)
 *     UsbhWaitForBootDevice @ 0x1C0048918 (UsbhWaitForBootDevice.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoColdStartPdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 PortState; // rdi
  int v10; // edx
  int v11; // r11d
  unsigned __int16 v12; // ax
  int v13; // r11d
  __int64 v14; // rax
  bool v16; // al
  int v17; // r9d
  __int64 v18; // rcx
  int v19; // r8d
  int v20; // eax
  bool v21; // al
  __int64 v22; // r15
  int v23; // eax
  int v24; // ecx
  bool v25; // zf
  bool v26; // al
  int v27; // [rsp+40h] [rbp-20h]
  int v28; // [rsp+48h] [rbp-18h]
  int v29[4]; // [rsp+50h] [rbp-10h] BYREF
  unsigned __int16 v30; // [rsp+B8h] [rbp+58h]
  unsigned __int16 v31; // [rsp+BAh] [rbp+5Ah]

  v7 = FdoExt(a1);
  v8 = PdoExt(a3);
  PortState = (int)UsbhQueryPortState(a1);
  Log(a1, 16, 1667518513, *(unsigned __int16 *)(a4 + 4), PortState);
  if ( (PortState & 0xC0000000) == 0xC0000000 )
  {
    Log(a1, v11, 1668035141, 0, PortState);
    v16 = Usb_Disconnected(PortState);
    v18 = a1;
    if ( v16 )
      goto LABEL_12;
    LOBYTE(v28) = 0;
    v27 = 3079;
    goto LABEL_13;
  }
  if ( !*(_BYTE *)(v8 + 2740) )
  {
LABEL_3:
    v12 = v30;
    goto LABEL_4;
  }
  v12 = v30;
  if ( (v30 & 1) == 0 )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_q(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        3,
        26,
        (__int64)&WPP_d7f5712d72fd3bbd6a7d18dfcf7fb5d1_Traceguids,
        a1);
      v11 = 16;
    }
    Log(a1, v11, 1397899853, 0, a1);
    UsbhWaitForBootDevice(a1, a3, 1LL, 0xFFFFFFFFLL);
    v20 = UsbhQueryPortState(a1);
    LODWORD(PortState) = v20;
    if ( (v20 & 0xC0000000) != 0xC0000000 )
    {
      v11 = 16;
      goto LABEL_3;
    }
    Log(a1, 16, 1668035397, 0, v20);
    v21 = Usb_Disconnected(PortState);
    v18 = a1;
    if ( v21 )
      goto LABEL_12;
    LOBYTE(v28) = 0;
    v27 = 3120;
LABEL_13:
    v19 = 48;
LABEL_27:
    UsbhException(v18, *(unsigned __int16 *)(a4 + 4), v19, v17, 0, PortState, v29[0], usbfile_fdopwr_c, v27, v28);
    return (unsigned int)PortState;
  }
LABEL_4:
  Log(a1, v11, 1667510577, v12, v31);
  if ( (v30 & 1) == 0 )
  {
    Log(a1, v13, 1667518516, *(unsigned __int16 *)(a4 + 4), 0LL);
    if ( (v31 & 1) == 0 )
    {
      UsbhEtwLogHubIrpEvent(
        a1,
        0LL,
        0LL,
        &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_DISCONNECT,
        *(unsigned __int16 *)(a4 + 4),
        PortState);
      LOBYTE(v28) = 0;
      UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 127, 0, 0, 0, 0, usbfile_fdopwr_c, 3197, v28);
      UsbhQueueSoftConnectChange(a1);
      Log(a1, 16, 1667518517, *(unsigned __int16 *)(a4 + 4), (int)PortState);
      return (unsigned int)PortState;
    }
    goto LABEL_8;
  }
  if ( (v31 & 1) == 0 )
  {
    if ( (*(_DWORD *)(v8 + 1420) & 0x8000000) != 0 )
      return (unsigned int)PortState;
    Log(a1, v13, 1667518515, *(unsigned __int16 *)(a4 + 4), 0LL);
    v14 = PdoExt(a3);
    *(_DWORD *)(v14 + 1420) |= 0x4000u;
LABEL_8:
    LODWORD(PortState) = 0;
    return (unsigned int)PortState;
  }
  Log(a1, v13, 1667518514, *(unsigned __int16 *)(a4 + 4), 0LL);
  v22 = PdoExt(a3);
  v23 = UsbhFlushPortChange(a1, *(unsigned __int16 *)(a4 + 4), v29);
  LODWORD(PortState) = v23;
  if ( v23 >= 0 )
  {
    v24 = *(_DWORD *)(v22 + 1420);
    if ( (v24 & 0x8000000) == 0 )
    {
      v25 = *(_DWORD *)(v22 + 2384) == 1;
      *(_DWORD *)(v22 + 1420) = v24 | 0x4000;
      if ( v25 )
      {
        UsbhEtwLogHubIrpEvent(
          a1,
          0LL,
          0LL,
          &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_PORT_LOST_POWER,
          *(unsigned __int16 *)(a4 + 4),
          v23);
        LOBYTE(v28) = 0;
        UsbhException(a1, *(unsigned __int16 *)(a4 + 4), 114, 0, 0, PortState, v29[0], usbfile_fdopwr_c, 3156, v28);
        *(_DWORD *)(v22 + 2384) = *(_DWORD *)(v7 + 4216);
      }
      return (unsigned int)PortState;
    }
  }
  v26 = Usb_Disconnected(v23);
  v18 = a1;
  if ( !v26 )
  {
    v17 = 0;
    LOBYTE(v28) = 0;
    v27 = 3172;
    v19 = 52;
    goto LABEL_27;
  }
LABEL_12:
  UsbhEtwLogHubIrpEvent(v18, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, 0, PortState);
  return 0LL;
}
