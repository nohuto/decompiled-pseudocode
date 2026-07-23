/*
 * XREFs of RtlQueryValidationRunlevel @ 0x140313C50
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14019EE20 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x1401C0E90 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1401C0F30 (ZwQueryValueKey.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 */

ULONG __cdecl RtlQueryValidationRunlevel(PUNICODE_STRING ComponentName)
{
  int v1; // ebx
  int v3; // edi
  HANDLE KeyHandle; // [rsp+30h] [rbp-38h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-30h] BYREF
  __int64 KeyValueInformation; // [rsp+40h] [rbp-28h] BYREF
  __int64 v8; // [rsp+48h] [rbp-20h]
  int v9; // [rsp+50h] [rbp-18h]

  v1 = 0;
  KeyValueInformation = 0LL;
  v8 = 0LL;
  v9 = 0;
  v3 = MEMORY[0xFFFFF78000000258];
  if ( ComponentName
    && MEMORY[0xFFFFF78000000258] != -1
    && ZwOpenKey(&KeyHandle, 1u, (POBJECT_ATTRIBUTES)&ObjectAttributes) >= 0 )
  {
    if ( ZwQueryValueKey(
           KeyHandle,
           ComponentName,
           KeyValuePartialInformation,
           &KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && HIDWORD(KeyValueInformation) == 4
      && (_DWORD)v8 == 4 )
    {
      v1 = HIDWORD(v8);
    }
    NtClose(KeyHandle);
  }
  return v1 | v3;
}
