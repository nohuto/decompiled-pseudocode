/*
 * XREFs of AslRegistryGetUInt32_UStr @ 0x1408EAAC4
 * Callers:
 *     SdbResolveDatabaseEx @ 0x1408E9770 (SdbResolveDatabaseEx.c)
 *     AslRegistryGetUInt32 @ 0x1408EAA4C (AslRegistryGetUInt32.c)
 * Callees:
 *     __security_check_cookie @ 0x140194150 (__security_check_cookie.c)
 *     ZwQueryValueKey @ 0x1401B85D0 (ZwQueryValueKey.c)
 *     AslLogCallPrintf @ 0x140681E20 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslRegistryGetUInt32_UStr(_DWORD *a1, void *a2, UNICODE_STRING *a3)
{
  NTSTATUS v4; // eax
  unsigned int v5; // ebx
  ULONG v7; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v8[6]; // [rsp+38h] [rbp-30h] BYREF

  *a1 = 0;
  v7 = 0;
  v4 = ZwQueryValueKey(a2, a3, KeyValuePartialInformation, v8, 0x14u, &v7);
  v5 = v4;
  if ( v4 >= 0 )
  {
    if ( v8[1] == 4 && v8[2] == 4 )
    {
      v5 = 0;
      *a1 = v8[3];
    }
    else
    {
      AslLogCallPrintf(1LL);
      return (unsigned int)-1073741788;
    }
  }
  else if ( v4 != -1073741772 )
  {
    AslLogCallPrintf(1LL);
  }
  return v5;
}
