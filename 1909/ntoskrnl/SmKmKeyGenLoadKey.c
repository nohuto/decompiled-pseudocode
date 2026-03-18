/*
 * XREFs of SmKmKeyGenLoadKey @ 0x1408E97C8
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1408E9950 (SmKmKeyGenNewKey.c)
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C0E30 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 *     memset @ 0x1401D77C0 (memset.c)
 */

__int64 __fastcall SmKmKeyGenLoadKey(UNICODE_STRING *a1, __int64 a2, HANDLE *a3)
{
  NTSTATUS v6; // ebx
  __int64 v7; // rcx
  _WORD *v8; // r8
  __int16 v9; // ax
  unsigned int v10; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING ValueName; // [rsp+38h] [rbp-C8h] BYREF
  ULONG ResultLength; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD KeyValueInformation[68]; // [rsp+80h] [rbp-80h] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  memset(KeyValueInformation, 0, 0x10CuLL);
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = a1;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v6 >= 0 )
  {
    if ( *(_QWORD *)(a2 + 16) )
    {
      v7 = 0x7FFFLL;
      v8 = *(_WORD **)(a2 + 16);
      do
      {
        if ( !*v8 )
          break;
        ++v8;
        --v7;
      }
      while ( v7 );
      v9 = v7 ? 0x7FFF - v7 : 0;
      if ( v7 )
      {
        ValueName.Buffer = *(wchar_t **)(a2 + 16);
        ValueName.Length = 2 * v9;
        ValueName.MaximumLength = 2 * v9 + 2;
      }
    }
    v6 = ZwQueryValueKey(
           KeyHandle,
           &ValueName,
           KeyValuePartialInformationAlign64,
           KeyValueInformation,
           0x10Cu,
           &ResultLength);
    if ( v6 >= 0 )
    {
      if ( a3 )
      {
        if ( KeyValueInformation[0] == 3 )
        {
          v10 = *(_DWORD *)(a2 + 32);
          if ( KeyValueInformation[1] == v10 )
          {
            memmove(*(void **)(a2 + 24), &KeyValueInformation[2], v10);
            v6 = 0;
            *a3 = KeyHandle;
            return (unsigned int)v6;
          }
        }
        v6 = -1073741772;
      }
      else
      {
        v6 = 0;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v6;
}
