/*
 * XREFs of InitClipFormatExceptionList @ 0x1C012E2A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
int InitClipFormatExceptionList()
{
  _DWORD *v0; // rdi
  _DWORD *v1; // rsi
  int result; // eax
  NTSTATUS v3; // eax
  unsigned int v4; // eax
  __int64 v5; // rcx
  ULONG v6; // ebx
  int v7; // eax
  unsigned __int16 v8; // ax
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG Length; // [rsp+90h] [rbp+20h] BYREF
  void *KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  v0 = 0LL;
  v1 = 0LL;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System\\UIPI\\Clipboard\\ExceptionFormats");
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    v3 = ZwQueryKey(KeyHandle, KeyFullInformation, 0LL, 0, &Length);
    if ( (v3 == -1073741789 || v3 == -2147483643)
      && (v0 = (_DWORD *)Win32AllocPool(Length, 1650684757LL)) != 0LL
      && ZwQueryKey(KeyHandle, KeyFullInformation, v0, Length, &Length) >= 0
      && (v4 = v0[8]) != 0
      && (gcClipFormatExceptionList = v0[8], v4 <= 0x1FFF)
      && (gpClipFormatExceptionList = Win32AllocPool(4LL * v4, 1650684757LL)) != 0LL
      && (v5 = (unsigned int)v0[10], (unsigned int)v5 < 0xFFFFFFF0)
      && (v1 = (_DWORD *)Win32AllocPool(v5 + 16, 1650684757LL)) != 0LL )
    {
      v6 = 0;
      if ( gcClipFormatExceptionList )
      {
        while ( ZwEnumerateValueKey(KeyHandle, v6, KeyValuePartialInformation, v1, v0[10] + 16, &Length) >= 0 )
        {
          v7 = v1[1];
          if ( v7 == 4 )
          {
            *(_DWORD *)(gpClipFormatExceptionList + 4LL * v6) = v1[3];
          }
          else if ( v7 == 1 )
          {
            *((_WORD *)v1 + (unsigned int)v1[2] + 6) = 0;
            v8 = UserAddAtomEx(v1 + 3, 1LL, 2LL);
            if ( !v8 )
              break;
            *(_DWORD *)(gpClipFormatExceptionList + 4LL * v6) = v8;
          }
          if ( ++v6 >= gcClipFormatExceptionList )
            goto LABEL_15;
        }
        gcClipFormatExceptionList = v6;
      }
    }
    else
    {
      if ( gpClipFormatExceptionList )
      {
        Win32FreePool(gpClipFormatExceptionList);
        gpClipFormatExceptionList = 0LL;
      }
      gcClipFormatExceptionList = 0;
    }
LABEL_15:
    if ( v1 )
      Win32FreePool(v1);
    if ( v0 )
      Win32FreePool(v0);
    return ZwClose(KeyHandle);
  }
  return result;
}
