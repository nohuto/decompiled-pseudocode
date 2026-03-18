/*
 * XREFs of PiDevCfgConfigureDeviceInterface @ 0x140866854
 * Callers:
 *     PiDevCfgConfigureDeviceInterfaceCallback @ 0x14029F2A0 (PiDevCfgConfigureDeviceInterfaceCallback.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140715760 (PiDevCfgConfigureDeviceInterfaces.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x14062535C (_CmOpenDeviceInterfaceRegKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406FD5C8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyDeviceKey @ 0x1406FD6D4 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140715C44 (PiDevCfgCopyObjectProperties.c)
 */

__int64 __fastcall PiDevCfgConfigureDeviceInterface(__int64 a1, void *a2, __int64 a3)
{
  NTSTATUS v6; // eax
  __int64 v7; // r9
  int v8; // ebx
  NTSTATUS v9; // eax
  __int64 v10; // r9
  SIZE_T NumberOfBytes; // [rsp+20h] [rbp-49h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+7h] BYREF
  HANDLE KeyHandle; // [rsp+D8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+E8h] [rbp+7Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  Handle = 0LL;
  RtlInitUnicodeString(&DestinationString, L"Device");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v6;
  if ( v6 != -1073741772 )
  {
    if ( v6 < 0 )
      goto LABEL_12;
    v8 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 0x32u, v7, 983103, 1, (__int64)&Handle, 0LL);
    if ( v8 < 0 )
      goto LABEL_12;
    v8 = PiDevCfgCopyDeviceKeys(KeyHandle, Handle, 1, a3);
    if ( v8 < 0 )
      goto LABEL_12;
    ZwClose(KeyHandle);
    KeyHandle = 0LL;
    ZwClose(Handle);
    Handle = 0LL;
  }
  RtlInitUnicodeString(&DestinationString, L"Properties");
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = &DestinationString;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = a2;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v9 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v8 = v9;
  if ( v9 == -1073741772 )
  {
    v8 = 0;
  }
  else if ( v9 >= 0 )
  {
    v8 = CmOpenDeviceInterfaceRegKey(*(__int64 *)&PiPnpRtlCtx, a1, 0x30u, v10, 983103, 0, (__int64)&Handle, 0LL);
    if ( v8 >= 0 )
    {
      v8 = PiDevCfgCopyObjectProperties(
             *(__int64 *)&PiPnpRtlCtx,
             0LL,
             0,
             (__int64)a2,
             NumberOfBytes,
             a1,
             3u,
             Handle,
             0LL,
             0LL,
             0);
      if ( v8 >= 0 )
        v8 = PiDevCfgCopyDeviceKey(KeyHandle, Handle, a1, 3u, 1, 0LL, a3);
    }
  }
LABEL_12:
  if ( KeyHandle )
    ZwClose(KeyHandle);
  if ( Handle )
    ZwClose(Handle);
  return (unsigned int)v8;
}
