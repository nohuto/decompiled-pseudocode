/*
 * XREFs of RegistryReadPnPKeyValue @ 0x1C0028594
 * Callers:
 *     USBDeviceStart @ 0x1C00291B0 (USBDeviceStart.c)
 *     USBHwGetDeviceIDString @ 0x1C002B7B0 (USBHwGetDeviceIDString.c)
 * Callees:
 *     RegistryGetValue @ 0x1C0028444 (RegistryGetValue.c)
 */

__int64 __fastcall RegistryReadPnPKeyValue(struct _DEVICE_OBJECT *a1, const WCHAR *a2, __int64 a3, _QWORD *a4)
{
  int Value; // ebx
  ULONG v7; // r8d
  HANDLE Handle; // [rsp+20h] [rbp-18h] BYREF

  Handle = 0LL;
  Value = IoOpenDeviceRegistryKey(a1, 2u, 0xF003Fu, &Handle);
  if ( Value >= 0 )
  {
    Value = RegistryGetValue(Handle, a2, v7, a4);
    ZwClose(Handle);
  }
  return (unsigned int)Value;
}
