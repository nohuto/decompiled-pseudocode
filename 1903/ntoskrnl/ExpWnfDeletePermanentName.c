/*
 * XREFs of ExpWnfDeletePermanentName @ 0x1406EEFC0
 * Callers:
 *     NtDeleteWnfStateName @ 0x14063F860 (NtDeleteWnfStateName.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     ExpWnfGetNameStoreRegistryRoot @ 0x14063C7F0 (ExpWnfGetNameStoreRegistryRoot.c)
 *     ExpWnfComposeValueName @ 0x14063C94C (ExpWnfComposeValueName.c)
 */

int __fastcall ExpWnfDeletePermanentName(unsigned __int64 a1)
{
  int result; // eax
  UNICODE_STRING ValueName; // [rsp+20h] [rbp-58h] BYREF
  HANDLE KeyHandle; // [rsp+30h] [rbp-48h] BYREF
  __int64 v5; // [rsp+38h] [rbp-40h] BYREF

  *(_QWORD *)&ValueName.Length = 2228224LL;
  ValueName.Buffer = (wchar_t *)&v5;
  ExpWnfComposeValueName(a1, &ValueName);
  result = ExpWnfGetNameStoreRegistryRoot((a1 >> 4) & 3, (volatile signed __int64 *)&KeyHandle);
  if ( result >= 0 )
    return ZwDeleteValueKey(KeyHandle, &ValueName);
  return result;
}
