/*
 * XREFs of UsbhFinishStart @ 0x1C001CBF0
 * Callers:
 *     UsbhAsyncStartComplete @ 0x1C001CA88 (UsbhAsyncStartComplete.c)
 *     UsbhHubStart @ 0x1C001EC28 (UsbhHubStart.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     Log @ 0x1C0012D10 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017430 (UsbhQueryPortState.c)
 *     UsbhSyncPowerOnPorts @ 0x1C0019FF0 (UsbhSyncPowerOnPorts.c)
 *     UsbhGetPortData @ 0x1C001BE00 (UsbhGetPortData.c)
 *     UsbhDispatch_HardResetEvent @ 0x1C001BF30 (UsbhDispatch_HardResetEvent.c)
 *     UsbhLogStartFailure @ 0x1C003F3E8 (UsbhLogStartFailure.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_ @ 0x1C003FFA4 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhDispatch_PindicatorEvent @ 0x1C0040B48 (UsbhDispatch_PindicatorEvent.c)
 *     UsbhQueueSoftConnectChange @ 0x1C0045370 (UsbhQueueSoftConnectChange.c)
 *     UsbhDisablePort @ 0x1C00471D4 (UsbhDisablePort.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhFinishStart(__int64 a1, __int64 a2)
{
  int v4; // esi
  _DWORD *v5; // rbx
  unsigned __int16 j; // bx
  __int64 v7; // rdx
  int v8; // eax
  unsigned __int16 i; // bx
  __int64 PortData; // rbp
  _DWORD *v12; // rax
  char v13; // r10
  int v14; // [rsp+48h] [rbp-40h]
  char v15; // [rsp+A0h] [rbp+18h] BYREF
  char v16; // [rsp+A2h] [rbp+1Ah]
  int v17; // [rsp+A8h] [rbp+20h] BYREF

  Log(a1, 16, 1715622740, a1, 0LL);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      12,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids);
  v4 = UsbhSyncPowerOnPorts(a1);
  if ( (v4 & 0xC0000000) == 0xC0000000 )
  {
    UsbhLogStartFailure(a1, v4, 3, 482, (__int64)"onecore\\drivers\\wdm\\usb\\hub\\usbhub\\bus.c", "PowerOnPorts");
  }
  else
  {
    v5 = FdoExt(a1);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        13,
        (__int64)&WPP_35133b6d46fa39b50c5464f64ebf0a08_Traceguids);
    if ( *((_BYTE *)v5 + 3008) )
    {
      for ( i = 1; i <= *((unsigned __int8 *)FdoExt(a1) + 2938); ++i )
      {
        PortData = UsbhGetPortData(a1, i);
        if ( PortData )
        {
          v12 = FdoExt(a1);
          UsbhDispatch_PindicatorEvent(a1, PortData, 5LL, v12 + 346);
        }
      }
    }
    for ( j = 1; ; ++j )
    {
      if ( !a1 )
        UsbhTrapFatal_Dbg(0LL, 0LL);
      v7 = *(_QWORD *)(a1 + 64);
      if ( !v7 )
        UsbhTrapFatal_Dbg(a1, 0LL);
      if ( *(_DWORD *)v7 != 541218120 )
        UsbhTrapFatal_Dbg(a1, v7);
      if ( j > *(unsigned __int8 *)(v7 + 2938) )
        break;
      v8 = UsbhQueryPortState(a1, j, (__int64)&v15, &v17);
      v4 = v8;
      if ( (v8 & 0xC0000000) == 0xC0000000 )
      {
        Log(a1, 16, 1768843569, j + 1LL, v8);
        if ( !Usb_Disconnected(v4) )
        {
          LOBYTE(v14) = 0;
          UsbhException(a1, j, 23, 0, 0, v4, v17, usbfile_bus_c, 511, v14);
        }
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          WPP_RECORDER_SF_d(
            WPP_GLOBAL_Control->DeviceExtension,
            0,
            1,
            13,
            (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
            v4);
        break;
      }
      if ( (v15 & 1) != 0 && (v16 & 1) == 0 )
      {
        Log(a1, 16, 1768843570, j, v8);
        if ( (v13 & 2) != 0 )
        {
          if ( UsbhGetPortData(a1, j) )
            UsbhDisablePort(a1);
        }
        UsbhQueueSoftConnectChange(a1);
      }
    }
  }
  if ( v4 >= 0 )
  {
    Log(a1, 8, 1381192747, 0LL, 0LL);
    UsbhDispatch_HardResetEvent(a1, a2, 1);
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      14,
      (__int64)&WPP_059b6fb8637c348d1b3657d61bfde3a6_Traceguids,
      v4);
  Log(a1, 16, 1718514515, a1, v4);
  return (unsigned int)v4;
}
