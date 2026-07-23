/*
 * XREFs of sub_18010A328 @ 0x18010A328
 * Callers:
 *     sub_18010A234 @ 0x18010A234 (sub_18010A234.c)
 * Callees:
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x18009C9C0 (ZwQueryValueKey.c)
 */

int sub_18010A328()
{
  int result; // eax
  HANDLE KeyHandle; // [rsp+30h] [rbp-9h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[8]; // [rsp+70h] [rbp+37h] BYREF
  int v5; // [rsp+78h] [rbp+3Fh]
  int v6; // [rsp+7Ch] [rbp+43h]

  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180119860;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180119850,
               KeyValuePartialInformation,
               KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && v5 == 4 )
    {
      if ( v6 )
        dword_180166070 |= 0x10u;
      else
        dword_180166070 |= 8u;
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
