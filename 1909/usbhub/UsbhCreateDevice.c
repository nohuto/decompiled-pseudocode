/*
 * XREFs of UsbhCreateDevice @ 0x1C000E4F8
 * Callers:
 *     UsbhReset1Complete @ 0x1C000FD00 (UsbhReset1Complete.c)
 * Callees:
 *     Usbh_HubDerefDeviceHandle @ 0x1C000D4C4 (Usbh_HubDerefDeviceHandle.c)
 *     UsbhLinkPdoDeviceHandle @ 0x1C000FFDC (UsbhLinkPdoDeviceHandle.c)
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     FdoExt @ 0x1C0012920 (FdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhGetDeviceHandle @ 0x1C0026188 (UsbhGetDeviceHandle.c)
 *     __security_check_cookie @ 0x1C002C5B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C002C6B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhGetTtDeviceHandle @ 0x1C00491B0 (UsbhGetTtDeviceHandle.c)
 *     Usbh_HubRemoveUsbDevice @ 0x1C004AE4C (Usbh_HubRemoveUsbDevice.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C005F2C4 (UsbhEtwLogHubEventWithExtraData.c)
 */

__int64 __fastcall UsbhCreateDevice(__int64 a1, __int64 a2, unsigned __int16 a3, unsigned __int16 a4)
{
  __int64 v4; // rdi
  __int64 v7; // rsi
  int v8; // r14d
  __int64 v9; // rdi
  __int64 v10; // r13
  unsigned __int64 v11; // r12
  __int64 v12; // r10
  _DWORD *v13; // r9
  _DWORD *v14; // r8
  unsigned int i; // edx
  int v16; // eax
  int v17; // edi
  unsigned __int16 v19; // ax
  unsigned int TtDeviceHandle; // r14d
  int v21; // [rsp+20h] [rbp-B9h]
  int v22; // [rsp+48h] [rbp-91h]
  _WORD v23[2]; // [rsp+50h] [rbp-89h] BYREF
  unsigned __int16 v24; // [rsp+54h] [rbp-85h]
  __int64 DeviceHandle; // [rsp+58h] [rbp-81h] BYREF
  unsigned __int64 v26; // [rsp+60h] [rbp-79h] BYREF
  __int64 v27; // [rsp+68h] [rbp-71h]
  __int64 v28; // [rsp+70h] [rbp-69h]
  int v29[24]; // [rsp+80h] [rbp-59h] BYREF

  v4 = a3;
  v27 = a2;
  v7 = a4;
  v24 = a3;
  memset(v29, 0, 0x54uLL);
  v28 = v4;
  DeviceHandle = 0LL;
  v23[0] = 0;
  v8 = v4;
  Log(a1, 4, 1668441412, v4, v7);
  v9 = FdoExt(a1);
  v10 = PdoExt(a2);
  v11 = 0xFEFEFEFEFEFEFEFEuLL;
  v26 = 0xFEFEFEFEFEFEFEFEuLL;
  if ( (v8 & 0x400) != 0 )
    goto LABEL_2;
  if ( (*(_DWORD *)(v9 + 2560) & 0x40) != 0 )
  {
    Log(a1, 4, 1668441137, v8, (unsigned int)v7);
    DeviceHandle = UsbhGetDeviceHandle(a1, a1);
    v23[0] = v7;
    Log(a1, 4, 1668441138, DeviceHandle, (unsigned int)v7);
    v12 = DeviceHandle;
    if ( !DeviceHandle )
    {
      LOBYTE(v22) = 0;
      v17 = -1073741823;
      UsbhException(a1, (unsigned __int16)v7, 5, 0, 0, -1073741823, -1, usbfile_bus_c, 6285, v22);
      return (unsigned int)v17;
    }
LABEL_3:
    if ( *(_QWORD *)(v9 + 4256) )
    {
      v29[0] = 1;
      if ( *(_WORD *)(v9 + 4226) < 7u )
      {
        LOWORD(v21) = v7;
        v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64, _QWORD, int, int *, _WORD))(v9 + 4256))(
                *(_QWORD *)(v9 + 4232),
                &v26,
                v12,
                v24,
                v21,
                v29,
                v23[0]);
      }
      else
      {
        v13 = (_DWORD *)(v10 + 2688);
        *(_DWORD *)(v10 + 2692) = *(unsigned __int16 *)(v9 + 5208);
        v14 = (_DWORD *)(v10 + 2696);
        *(_QWORD *)(v10 + 2696) = 0LL;
        *(_QWORD *)(v10 + 2704) = 0LL;
        *(_DWORD *)(v10 + 2712) = 0;
        if ( *(_WORD *)(v9 + 5208) )
        {
          for ( i = 1; i < 5; ++i )
          {
            v19 = *(_WORD *)(v9 + 2LL * (i - 1) + 5210);
            if ( !v19 )
              break;
            *v14++ = v19;
          }
        }
        else
        {
          i = 0;
        }
        *v13 = i + 1;
        v13[i + 1] = (unsigned __int16)v7;
        v16 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, __int64, _QWORD, __int64, int *, _WORD, __int64, __int64))(v9 + 4488))(
                *(_QWORD *)(v9 + 4232),
                &v26,
                DeviceHandle,
                v24,
                v10 + 2688,
                v29,
                v23[0],
                v27,
                v10 + 2672);
      }
      v17 = v16;
      if ( DeviceHandle )
        Usbh_HubDerefDeviceHandle(a1, DeviceHandle, a1, 0x48447472u);
      if ( (v17 & 0xC0000000) == 0xC0000000 )
      {
        if ( v29[1] == 5 )
          *(_DWORD *)(v10 + 2820) = v29[2] != 0 ? 1073807365 : 1073807360;
        Log(a1, 4, 1667524129, v8, (unsigned int)v7);
        LOBYTE(v22) = 0;
        UsbhException(a1, (unsigned __int16)v7, 4, (int)v29, 84, v17, -1, usbfile_bus_c, 6405, v22);
        UsbhEtwLogHubEventWithExtraData(
          a1,
          &USBHUB_ETW_EVENT_HUB_ENUM_CREATE_DEVICE_FAILURE,
          (unsigned __int16)v7,
          v29,
          84);
        v26 = 0xFEFEFEFEFEFEFEFEuLL;
      }
      else
      {
        v11 = v26;
      }
      if ( v17 >= 0 )
      {
        v17 = UsbhLinkPdoDeviceHandle(a1, v27, v11);
        if ( (v17 & 0xC0000000) == 0xC0000000 )
        {
          Log(a1, 4, 1819175713, v26, (unsigned int)v7);
          Usbh_HubRemoveUsbDevice(a1, v26);
        }
      }
    }
    else
    {
      v17 = -1073741822;
      if ( v12 )
        Usbh_HubDerefDeviceHandle(a1, v12, a1, 0x48447472u);
    }
    return (unsigned int)v17;
  }
  Log(a1, 4, 1668441139, v8, (unsigned int)v7);
  TtDeviceHandle = UsbhGetTtDeviceHandle(a1, &DeviceHandle, a1, v23);
  Log(a1, 4, 1668441140, DeviceHandle, v23[0]);
  if ( (TtDeviceHandle & 0xC0000000) != 0xC0000000 )
  {
    v8 = v28;
LABEL_2:
    v12 = DeviceHandle;
    goto LABEL_3;
  }
  LOBYTE(v22) = 0;
  UsbhException(a1, (unsigned __int16)v7, 104, 0, 0, TtDeviceHandle, -1, usbfile_bus_c, 6304, v22);
  return TtDeviceHandle;
}
