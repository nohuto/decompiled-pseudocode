/*
 * XREFs of PspReadUserQuotaLimits @ 0x14065B5EC
 * Callers:
 *     PspAssignProcessQuotaBlock @ 0x14065B2F4 (PspAssignProcessQuotaBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwClose @ 0x1401B84D0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401B8530 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     ZwCreateKey @ 0x1401B8690 (ZwCreateKey.c)
 *     RtlFreeAnsiString @ 0x140624790 (RtlFreeAnsiString.c)
 *     RtlConvertSidToUnicodeString @ 0x14065B870 (RtlConvertSidToUnicodeString.c)
 *     PspSanitizeResourceLimits @ 0x14075909C (PspSanitizeResourceLimits.c)
 */

__int64 __fastcall PspReadUserQuotaLimits(PSID Sid, _DWORD *a2, _DWORD *a3)
{
  HANDLE v4; // rbx
  NTSTATUS v6; // ebx
  NTSTATUS v8; // eax
  signed __int64 v9; // rcx
  unsigned int v10; // r15d
  int v11; // r14d
  _DWORD *v12; // rdi
  int v13; // eax
  HANDLE Handle; // [rsp+40h] [rbp-59h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-51h] BYREF
  ULONG ResultLength; // [rsp+50h] [rbp-49h] BYREF
  _DWORD *v17; // [rsp+58h] [rbp-41h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp-39h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+A0h] [rbp+7h] BYREF
  int v21; // [rsp+A4h] [rbp+Bh]
  int v22; // [rsp+A8h] [rbp+Fh]
  int v23; // [rsp+ACh] [rbp+13h]

  v17 = a2;
  *a2 = 1;
  v4 = (HANDLE)PspQuotaDatabaseKey;
  Handle = (HANDLE)PspQuotaDatabaseKey;
  if ( !PspQuotaDatabaseKey )
  {
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 704;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&PspQuotaKeyNames;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v8 = ZwCreateKey(&Handle, 9u, &ObjectAttributes, 0, 0LL, 0, 0LL);
    v9 = (signed __int64)Handle;
    if ( v8 < 0 )
      v9 = 1LL;
    Handle = (HANDLE)v9;
    v4 = (HANDLE)_InterlockedCompareExchange64(&PspQuotaDatabaseKey, v9, 0LL);
    if ( v4 )
    {
      if ( Handle != (HANDLE)1 )
        ZwClose(Handle);
      Handle = v4;
    }
    else
    {
      v4 = Handle;
    }
  }
  if ( v4 == (HANDLE)1 )
    return 0;
  v6 = RtlConvertSidToUnicodeString(&UnicodeString, Sid, 1u);
  if ( v6 >= 0 )
  {
    ObjectAttributes.RootDirectory = Handle;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = &UnicodeString;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
    RtlFreeAnsiString(&UnicodeString);
    if ( v6 >= 0 )
    {
      v10 = 0;
      v11 = 0;
      v12 = a3;
      do
      {
        v6 = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&PspDefaultResourceNames[8 * v11],
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
        if ( (int)(v6 + 0x80000000) >= 0 && v6 != -1073741772 )
        {
          ZwClose(KeyHandle);
          return (unsigned int)v6;
        }
        if ( v6 != -1073741772 && v22 == 4 && v21 == 4 )
        {
          v13 = v23;
        }
        else
        {
          v13 = *(_DWORD *)((char *)v12 + (char *)PspDefaultResourceLimits - (char *)a3);
          ++v10;
        }
        *v12 = v13;
        ++v11;
        ++v12;
      }
      while ( v11 < 4 );
      ZwClose(KeyHandle);
      if ( v10 < 4 )
      {
        v6 = PspSanitizeResourceLimits(a3, 0LL);
        if ( v6 < 0 )
          return (unsigned int)v6;
        *v17 = 0;
      }
      return 0;
    }
    if ( v6 == -1073741772 )
      return 0;
  }
  return (unsigned int)v6;
}
