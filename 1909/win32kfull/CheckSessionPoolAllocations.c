/*
 * XREFs of CheckSessionPoolAllocations @ 0x1C011B220
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0163A80 (__security_check_cookie.c)
 *     memset @ 0x1C0168440 (memset.c)
 */

__int64 CheckSessionPoolAllocations()
{
  __int64 result; // rax
  int v1; // eax
  unsigned int v2; // [rsp+50h] [rbp-59h] BYREF
  void *KeyHandle; // [rsp+58h] [rbp-51h] BYREF
  __int64 v4; // [rsp+60h] [rbp-49h] BYREF
  __int64 v5; // [rsp+68h] [rbp-41h] BYREF
  __int64 v6; // [rsp+70h] [rbp-39h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-31h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+88h] [rbp-21h] BYREF
  _BYTE *v9; // [rsp+98h] [rbp-11h]
  int v10; // [rsp+A0h] [rbp-9h]
  int v11; // [rsp+A4h] [rbp-5h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+A8h] [rbp-1h] BYREF
  _BYTE Data[32]; // [rsp+D8h] [rbp+2Fh] BYREF

  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  memset(Data, 0, sizeof(Data));
  result = Win32ExtractSessionPoolTagInfo((unsigned int)gSessionId, Data, 8LL, &v2, &v6, &v5, &v4, 0LL, 0);
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
    v11 = 0;
    v9 = Data;
    v10 = 4 * v2;
    return DbgkWerCaptureLiveKernelDump(L"win32k.sys", 171LL, (unsigned int)gSessionId);
  }
  return result;
}
