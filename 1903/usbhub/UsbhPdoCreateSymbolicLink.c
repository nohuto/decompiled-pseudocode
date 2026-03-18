/*
 * XREFs of UsbhPdoCreateSymbolicLink @ 0x1C0020F3C
 * Callers:
 *     UsbhPdoPnp_StartDevice @ 0x1C0021190 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     Log @ 0x1C0013360 (Log.c)
 *     UsbhSetPdoRegistryParameter @ 0x1C0029C90 (UsbhSetPdoRegistryParameter.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoCreateSymbolicLink(PDEVICE_OBJECT DeviceObject, const GUID *InterfaceClassGuid)
{
  _DWORD *v4; // rdi
  struct _UNICODE_STRING *v5; // rsi
  NTSTATUS v6; // ebx
  int v7; // eax
  void *v9; // rcx
  int v10; // [rsp+48h] [rbp-10h]

  v4 = PdoExt((__int64)DeviceObject);
  v5 = (struct _UNICODE_STRING *)(v4 + 300);
  v6 = IoRegisterDeviceInterface(DeviceObject, InterfaceClassGuid, 0LL, (PUNICODE_STRING)v4 + 75);
  if ( v6 < 0 )
    goto LABEL_12;
  v6 = IoSetDeviceInterfaceState(v5, 1u);
  if ( v6 >= 0 )
  {
    v4[355] |= 0x10u;
    v6 = UsbhSetPdoRegistryParameter(
           DeviceObject,
           L"SymbolicName",
           1u,
           *((PVOID *)v4 + 151),
           *((unsigned __int16 *)v4 + 600));
  }
  v7 = v4[355];
  if ( v6 < 0 )
  {
    if ( (v7 & 0x10) != 0 )
    {
      v4[355] = v7 & 0xFFFFFFEF;
      IoSetDeviceInterfaceState(v5, 0);
      v7 = v4[355];
    }
    v9 = (void *)*((_QWORD *)v4 + 151);
    v4[355] = v7 & 0xFFFFFFF7;
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *((_QWORD *)v4 + 151) = 0LL;
    }
  }
  else
  {
    v4[355] = v7 | 8;
  }
  if ( v6 < 0 )
  {
LABEL_12:
    LOBYTE(v10) = 0;
    UsbhException(*((_QWORD *)v4 + 148), *((unsigned __int16 *)v4 + 714), 101, 0, 0, v6, -1, usbfile_pdo_c, 359, v10);
  }
  Log(*((_QWORD *)v4 + 148), 256, 1937337676, v6, (__int64)DeviceObject);
  return (unsigned int)v6;
}
