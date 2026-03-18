/*
 * XREFs of CheckSessionPoolAllocations @ 0x1C0136470
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015AF60 (__security_check_cookie.c)
 *     memset @ 0x1C0163640 (memset.c)
 */

__int64 CheckSessionPoolAllocations()
{
  __int64 result; // rax
  int v1; // eax
  unsigned int v2; // [rsp+50h] [rbp-59h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-51h] BYREF
  __int64 v4; // [rsp+60h] [rbp-49h] BYREF
  __int64 v5; // [rsp+68h] [rbp-41h] BYREF
  _QWORD v6[2]; // [rsp+70h] [rbp-39h] BYREF
  int v7; // [rsp+80h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-21h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+98h] [rbp-11h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-1h] BYREF
  _BYTE Data[32]; // [rsp+D8h] [rbp+2Fh] BYREF

  memset(Data, 0, sizeof(Data));
  result = Win32ExtractSessionPoolTagInfo(gSessionId, Data, 8LL, &v2, v6, &v5, &v4, 0LL, 0);
  if ( (int)result >= 0 && v4 )
  {
    v1 = v2;
    if ( v2 > 8 )
      v1 = 8;
    v2 = v1;
    RtlInitUnicodeString(
      &DestinationString,
      L"\\REGISTRY\\MACHINE\\SYSTEM\\CURRENTCONTROLSET\\CONTROL\\SESSION MANAGER\\MEMORY MANAGEMENT");
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
    {
      RtlInitUnicodeString(&ValueName, L"SESSION_HAS_VALID_POOL_ON_EXIT");
      if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 3u, Data, 4 * v2) >= 0 )
        ZwFlushKey(KeyHandle);
      ZwClose(KeyHandle);
    }
    v6[1] = Data;
    v7 = 4 * v2;
    return DbgkWerCaptureLiveKernelDump(L"win32k.sys", 171LL, gSessionId);
  }
  return result;
}
