/*
 * XREFs of MiRegQueryDWORD @ 0x1405B0C14
 * Callers:
 *     MiValidateExistingImage @ 0x14066EF50 (MiValidateExistingImage.c)
 *     MiValidateSectionSigningPolicy @ 0x14066F2D8 (MiValidateSectionSigningPolicy.c)
 *     MiCreateNewSection @ 0x140689A04 (MiCreateNewSection.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwOpenKey @ 0x1401C0310 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C03B0 (ZwQueryValueKey.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 */

__int64 __fastcall MiRegQueryDWORD(__int64 a1, __int64 a2, _DWORD *a3)
{
  __int64 v4; // rcx
  const wchar_t *v5; // rax
  NTSTATUS v6; // ebx
  __int16 v7; // ax
  __int64 v8; // rcx
  const wchar_t *v9; // rax
  __int16 v10; // di
  ULONG ResultLength; // [rsp+38h] [rbp-39h] BYREF
  HANDLE KeyHandle; // [rsp+40h] [rbp-31h] BYREF
  UNICODE_STRING ValueName; // [rsp+48h] [rbp-29h] BYREF
  __int64 v15; // [rsp+58h] [rbp-19h] BYREF
  const wchar_t *v16; // [rsp+60h] [rbp-11h]
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-9h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+98h] [rbp+27h] BYREF
  int v19; // [rsp+9Ch] [rbp+2Bh]
  unsigned int v20; // [rsp+A0h] [rbp+2Fh]
  int v21; // [rsp+A4h] [rbp+33h]

  memset(&ObjectAttributes, 0, sizeof(ObjectAttributes));
  KeyHandle = 0LL;
  *(_QWORD *)&ValueName.Length = 0LL;
  ValueName.Buffer = 0LL;
  v4 = 0x7FFFLL;
  v15 = 0LL;
  v16 = 0LL;
  v5 = L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Control\\CI";
  ResultLength = 0;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  v6 = v4 == 0 ? 0xC000000D : 0;
  if ( v4 )
    v7 = 0x7FFF - v4;
  else
    v7 = 0;
  if ( v4 )
  {
    v16 = L"\\Registry\\MACHINE\\System\\CurrentControlSet\\Control\\CI";
    LOWORD(v15) = 2 * v7;
    WORD1(v15) = 2 * v7 + 2;
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&v15;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v6 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
    if ( v6 >= 0 )
    {
      *(_QWORD *)&ValueName.Length = 0LL;
      v8 = 0x7FFFLL;
      ValueName.Buffer = 0LL;
      v9 = L"Disable26178932";
      do
      {
        if ( !*v9 )
          break;
        ++v9;
        --v8;
      }
      while ( v8 );
      v6 = v8 == 0 ? 0xC000000D : 0;
      v10 = v8 ? 0x7FFF - v8 : 0;
      if ( v8 )
      {
        ValueName.Buffer = L"Disable26178932";
        ValueName.Length = 2 * v10;
        ValueName.MaximumLength = 2 * v10 + 2;
        v6 = ZwQueryValueKey(
               KeyHandle,
               &ValueName,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
        if ( v6 >= 0 )
        {
          if ( v19 == 4 && v20 >= 4 )
            *a3 = v21;
          else
            v6 = -1073741811;
        }
      }
    }
    if ( KeyHandle )
      ZwClose(KeyHandle);
  }
  return (unsigned int)v6;
}
