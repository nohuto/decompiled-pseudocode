/*
 * XREFs of Usbh_BS_BusPause @ 0x1C001B284
 * Callers:
 *     UsbhDispatch_BusEvent @ 0x1C001B060 (UsbhDispatch_BusEvent.c)
 * Callees:
 *     FdoExt @ 0x1C00122E0 (FdoExt.c)
 *     UsbhReleaseBusStateLock @ 0x1C001B3A0 (UsbhReleaseBusStateLock.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040078 (WPP_RECORDER_SF_d.c)
 *     UsbhBusDisconnect_Action @ 0x1C00427C8 (UsbhBusDisconnect_Action.c)
 *     UsbhBusPnpStop_Action @ 0x1C0042850 (UsbhBusPnpStop_Action.c)
 *     Usbh_BusRemove_PdoEvent @ 0x1C0048FC4 (Usbh_BusRemove_PdoEvent.c)
 */

__int64 __fastcall Usbh_BS_BusPause(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rbx
  _DWORD *v6; // rdx
  unsigned int v7; // edi
  __int64 v8; // rdx
  __int64 v9; // rcx
  int v10; // ebx
  int v11; // ebx
  int v12; // ebx
  int v13; // ebx
  int v14; // ebx
  int v16; // ebx
  int v17; // ebx
  int v18; // ebx

  v3 = a3;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v6 = *(_DWORD **)(a1 + 64);
  if ( !v6 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v6 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v6);
  FdoExt(*(_QWORD *)(a2 + 8));
  v7 = *(_DWORD *)(a2 + 80);
  if ( (UsbhLogMask & 0x800) != 0 )
  {
    v8 = *(_QWORD *)(a1 + 64);
    if ( v8 )
    {
      v9 = *(_QWORD *)(v8 + 888)
         + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v8 + 880)) & *(_DWORD *)(v8 + 884));
      *(_DWORD *)v9 = 1397781346;
      *(_QWORD *)(v9 + 8) = 0LL;
      *(_QWORD *)(v9 + 16) = a2;
      *(_QWORD *)(v9 + 24) = v3;
    }
  }
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_d(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      1,
      13,
      (__int64)&WPP_b5d997cdd6ae31bcea5c4187fdaede3e_Traceguids,
      v3);
  v10 = v3 - 3;
  if ( !v10 )
  {
    UsbhBusPnpStop_Action(a1, a2);
    goto LABEL_28;
  }
  v11 = v10 - 2;
  if ( v11 )
  {
    v12 = v11 - 1;
    if ( !v12 )
    {
      v7 = 5;
      return UsbhReleaseBusStateLock(a1, a2, v7);
    }
    v13 = v12 - 1;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( !v14 )
        goto LABEL_14;
      v16 = v14 - 1;
      if ( !v16 )
        return UsbhReleaseBusStateLock(a1, a2, v7);
      v17 = v16 - 1;
      if ( v17 )
      {
        v18 = v17 - 1;
        if ( v18 )
        {
          if ( v18 != 1 )
            return UsbhReleaseBusStateLock(a1, a2, v7);
          Usbh_BusRemove_PdoEvent(*(_QWORD *)(a2 + 8), a2);
LABEL_28:
          v7 = 2;
          return UsbhReleaseBusStateLock(a1, a2, v7);
        }
        UsbhBusDisconnect_Action(a1, a2);
      }
    }
    v7 = 4;
    return UsbhReleaseBusStateLock(a1, a2, v7);
  }
LABEL_14:
  v7 = 3;
  return UsbhReleaseBusStateLock(a1, a2, v7);
}
