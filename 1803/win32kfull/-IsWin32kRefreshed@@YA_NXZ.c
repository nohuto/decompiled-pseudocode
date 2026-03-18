/*
 * XREFs of ?IsWin32kRefreshed@@YA_NXZ @ 0x1C01D3748
 * Callers:
 *     InitializeWin32PoolTracking @ 0x1C01126C0 (InitializeWin32PoolTracking.c)
 * Callees:
 *     Win32FileInfo @ 0x1C00BF334 (Win32FileInfo.c)
 *     __security_check_cookie @ 0x1C0139660 (__security_check_cookie.c)
 */

char IsWin32kRefreshed(void)
{
  char v0; // di
  WCHAR *PoolWithTag; // rbx
  ULONG v2; // ecx
  __int64 v3; // rax
  ULONG Length; // [rsp+38h] [rbp-69h] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-61h] BYREF
  struct _UNICODE_STRING String; // [rsp+48h] [rbp-59h] BYREF
  ULONGLONG Value; // [rsp+58h] [rbp-49h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+60h] [rbp-41h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-31h] BYREF
  UNICODE_STRING String1; // [rsp+80h] [rbp-21h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp-11h] BYREF
  _WORD Data[20]; // [rsp+C0h] [rbp+1Fh] BYREF

  KeyHandle = 0LL;
  v0 = 1;
  if ( Win32FileInfo(L"\\systemroot\\system32\\win32k.sys", &Value, 0LL) )
  {
    String.Buffer = Data;
    *(_DWORD *)&String.Length = 2228224;
    if ( RtlInt64ToUnicodeString(Value, 0x10u, &String) >= 0 )
    {
      RtlInitUnicodeString(
        &DestinationString,
        L"\\REGISTRY\\MACHINE\\SOFTWARE\\MICROSOFT\\WINDOWS NT\\CURRENTVERSION\\WINDOWS");
      ObjectAttributes.Length = 48;
      ObjectAttributes.ObjectName = &DestinationString;
      ObjectAttributes.RootDirectory = 0LL;
      ObjectAttributes.Attributes = 576;
      *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
      if ( ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes) >= 0 )
      {
        RtlInitUnicodeString(&ValueName, L"Win32kLastWriteTime");
        Length = 46;
        PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPoolSession, 0x2EuLL, 0x746C7355u);
        if ( PoolWithTag )
        {
          if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, PoolWithTag, Length, &Length) < 0 )
            goto LABEL_12;
          v2 = Length;
          if ( *((_DWORD *)PoolWithTag + 2) >> 1 < Length )
            v2 = *((_DWORD *)PoolWithTag + 2) >> 1;
          Length = v2;
          if ( v2 <= 1
            || !PoolWithTag[6]
            || (PoolWithTag[v2 + 5] = 0,
                RtlInitUnicodeString(&String1, PoolWithTag + 6),
                RtlCompareUnicodeString(&String1, &String, 0)) )
          {
LABEL_12:
            v3 = -1LL;
            do
              ++v3;
            while ( Data[v3] );
            if ( ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, Data, 2 * v3 + 2) >= 0 )
              ZwFlushKey(KeyHandle);
          }
          else
          {
            v0 = 0;
          }
          ExFreePoolWithTag(PoolWithTag, 0);
        }
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0;
}
