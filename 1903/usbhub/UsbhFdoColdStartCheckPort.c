/*
 * XREFs of UsbhFdoColdStartCheckPort @ 0x1C00082C0
 * Callers:
 *     UsbhFdoSetD0Cold @ 0x1C0007970 (UsbhFdoSetD0Cold.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C0004AFC (Usb_Disconnected.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhQueryPortState @ 0x1C0017BE0 (UsbhQueryPortState.c)
 *     UsbhEtwLogHubIrpEvent @ 0x1C001C210 (UsbhEtwLogHubIrpEvent.c)
 *     UsbhTrapFatal_Dbg @ 0x1C00413A8 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhFdoColdStartCheckPort(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v5; // rdx
  signed int PortState; // eax
  __int64 v7; // r8
  unsigned int v8; // edi
  __int64 v9; // rdx
  __int64 v10; // rcx
  int v12; // r9d
  int v13; // [rsp+48h] [rbp-20h]
  int v14; // [rsp+88h] [rbp+20h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5);
  PortState = UsbhQueryPortState(a1);
  v7 = *(unsigned __int16 *)(a3 + 4);
  v8 = PortState;
  if ( (UsbhLogMask & 0x10) != 0 )
  {
    v9 = *(_QWORD *)(a1 + 64);
    if ( v9 )
    {
      v10 = *(_QWORD *)(v9 + 888)
          + 32LL * ((unsigned int)_InterlockedDecrement((volatile signed __int32 *)(v9 + 880)) & *(_DWORD *)(v9 + 884));
      *(_DWORD *)v10 = 826500195;
      *(_QWORD *)(v10 + 8) = 0LL;
      *(_QWORD *)(v10 + 16) = v7;
      *(_QWORD *)(v10 + 24) = PortState;
    }
  }
  if ( (PortState & 0xC0000000) != 0xC0000000 )
    return v8;
  Log(a1, 16, 1667515186, 0, PortState);
  if ( !Usb_Disconnected(v8) )
  {
    LOBYTE(v13) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a3 + 4), 48, v12, 0, v8, v14, usbfile_fdopwr_c, 3004, v13);
    return v8;
  }
  UsbhEtwLogHubIrpEvent(a1, 0LL, 0LL, &USBHUB_ETW_EVENT_HUB_POWER_SET_D0_COLD_HUB_DISCONNECT, 0, v8);
  return 0LL;
}
