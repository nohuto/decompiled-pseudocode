/*
 * XREFs of UsbhPdoQueryWmiRegInfo @ 0x1C002B690
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0011270 (PdoExt.c)
 *     memmove @ 0x1C002C6C0 (memmove.c)
 *     memset @ 0x1C002CA00 (memset.c)
 *     UsbhException @ 0x1C0055A68 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoQueryWmiRegInfo(
        PDEVICE_OBJECT DeviceObject,
        _DWORD *a2,
        __int64 a3,
        _QWORD *a4,
        int a5,
        _QWORD *a6)
{
  _DWORD *v9; // rax
  _QWORD *v10; // rdx
  _DWORD *v11; // rsi
  ULONG v12; // edi
  PVOID PoolWithTag; // rax
  void *v15; // rbx
  int v16; // [rsp+48h] [rbp-20h]
  ULONG BufferLength; // [rsp+70h] [rbp+8h] BYREF

  BufferLength = 0;
  v9 = PdoExt((__int64)DeviceObject);
  v10 = a6;
  v11 = v9;
  *a2 = 32;
  *a4 = &UsbhRegistryPath;
  *v10 = DeviceObject;
  if ( (v9[355] & 0x400) != 0 )
  {
    v12 = 80;
    if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, 0x50u, (char *)v9 + 2442, &BufferLength) != -1073741789 )
      return 0LL;
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, BufferLength, 0x42554855u);
    v15 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, BufferLength);
      if ( IoGetDeviceProperty(DeviceObject, DevicePropertyDeviceDescription, BufferLength, v15, &BufferLength) >= 0 )
      {
        if ( BufferLength < 0x50 )
          v12 = BufferLength;
        memmove((char *)v11 + 2442, v15, v12);
        *((_WORD *)v11 + 1260) = 0;
      }
      ExFreePoolWithTag(v15, 0);
      return 0LL;
    }
    return 3221225626LL;
  }
  else
  {
    LOBYTE(v16) = 0;
    UsbhException(*((_QWORD *)v9 + 148), 0, 99, 0, 0, -1073741436, 0, usbfile_wmi_c, 1624, v16);
    return 3221225860LL;
  }
}
