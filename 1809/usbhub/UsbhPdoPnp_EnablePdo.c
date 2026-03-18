/*
 * XREFs of UsbhPdoPnp_EnablePdo @ 0x1C001F764
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C001F1F0 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C0020410 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     Usb_Disconnected @ 0x1C00047AC (Usb_Disconnected.c)
 *     UsbhSyncResetDeviceInternal @ 0x1C000873C (UsbhSyncResetDeviceInternal.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0010320 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C0010C40 (PdoExt.c)
 *     UsbhSetPdo_AllowIo @ 0x1C001F0E0 (UsbhSetPdo_AllowIo.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003FD38 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C0053928 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoPnp_EnablePdo(__int64 a1)
{
  __int64 v2; // rbx
  struct _DEVICE_OBJECT *v3; // rbp
  unsigned int v4; // esi
  int v5; // ecx
  _DWORD *v7; // rax
  int v8; // eax
  __int64 v9; // rcx
  int v10; // [rsp+48h] [rbp-10h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL);
  v2 = *(_QWORD *)(a1 + 64);
  if ( !v2 )
    UsbhTrapFatal_Dbg(a1, 0LL);
  if ( *(_DWORD *)v2 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64));
  v3 = *(struct _DEVICE_OBJECT **)(v2 + 1184);
  v4 = 0;
  v5 = *(_DWORD *)(v2 + 1120);
  if ( (*(_DWORD *)(v2 + 1420) & 0x8000000) == 0 && v5 == 100 || (*(_DWORD *)(v2 + 1132) & 4) != 0 )
    return 0LL;
  if ( ((v5 - 100) & 0xFFFFFFFC) == 0 && v5 != 101 )
  {
    UsbhSshSetPortsBusyState(*(_QWORD *)(v2 + 1184), *(_WORD *)(v2 + 1428), 2, 0);
    v7 = PdoExt(a1);
    v8 = UsbhSyncResetDeviceInternal(v3, (__int64)(v7 + 236), a1);
    v4 = v8;
    v9 = v8 & 0xC0000000;
    if ( (_DWORD)v9 != -1073741824 || Usb_Disconnected(v8) )
    {
      *(_DWORD *)(v2 + 1420) &= ~0x8000000u;
      UsbhSetPdo_AllowIo(v9, a1);
    }
    else
    {
      LOBYTE(v10) = 0;
      UsbhException((int)v3, *(unsigned __int16 *)(v2 + 1428), 86, 0, 0, v4, -1, usbfile_pdo_c, 2072, v10);
    }
  }
  return v4;
}
