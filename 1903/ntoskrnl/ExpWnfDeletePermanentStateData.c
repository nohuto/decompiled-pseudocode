/*
 * XREFs of ExpWnfDeletePermanentStateData @ 0x1409192DC
 * Callers:
 *     NtDeleteWnfStateName @ 0x14063F860 (NtDeleteWnfStateName.c)
 *     NtDeleteWnfStateData @ 0x1407851A0 (NtDeleteWnfStateData.c)
 * Callees:
 *     __security_check_cookie @ 0x14019E700 (__security_check_cookie.c)
 *     ZwClose @ 0x1401C02B0 (ZwClose.c)
 *     ZwDeleteValueKey @ 0x1401C1B10 (ZwDeleteValueKey.c)
 *     ExpWnfComposeValueName @ 0x14063C94C (ExpWnfComposeValueName.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x14071DCCC (ExpWnfGetPermanentDataStoreHandle.c)
 *     ExpWnfEnumeratePermanentDataStores @ 0x1409194A0 (ExpWnfEnumeratePermanentDataStores.c)
 */

int __fastcall ExpWnfDeletePermanentStateData(__int64 a1, unsigned __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdi
  int v5; // esi
  int result; // eax
  HANDLE KeyHandle; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING ValueName; // [rsp+28h] [rbp-48h] BYREF
  char v9; // [rsp+38h] [rbp-38h] BYREF

  *(_QWORD *)&ValueName.Length = 2228224LL;
  v3 = (a2 >> 4) & 3;
  v4 = (a2 >> 6) & 0xF;
  ValueName.Buffer = (wchar_t *)&v9;
  ExpWnfComposeValueName(a2, &ValueName);
  v5 = 0;
  if ( a1 )
    result = ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v3, 0LL, &KeyHandle);
  else
    result = ExpWnfEnumeratePermanentDataStores((unsigned int)v4, (unsigned int)v3, 0LL, &KeyHandle);
  if ( result >= 0 )
  {
    while ( 1 )
    {
      result = ZwDeleteValueKey(KeyHandle, &ValueName);
      if ( a1 )
        break;
      ZwClose(KeyHandle);
      if ( (int)ExpWnfEnumeratePermanentDataStores((unsigned int)v4, (unsigned int)v3, (unsigned int)++v5, &KeyHandle) < 0 )
        return 0;
    }
  }
  return result;
}
