/*
 * XREFs of IsLanguageOverlayBlockedByPolicy @ 0x18005BD9C
 * Callers:
 *     GetOverlayFilePath @ 0x18005BC10 (GetOverlayFilePath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     QueryRegistryValue @ 0x18005BF80 (QueryRegistryValue.c)
 *     NtClose @ 0x18009D070 (NtClose.c)
 *     NtOpenKey @ 0x18009D0D0 (NtOpenKey.c)
 */

bool IsLanguageOverlayBlockedByPolicy()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING v2; // [rsp+40h] [rbp-9h] BYREF
  UNICODE_STRING v3; // [rsp+50h] [rbp+7h] BYREF
  int v4; // [rsp+60h] [rbp+17h] BYREF
  __int64 v5; // [rsp+68h] [rbp+1Fh]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp+27h]
  int v7; // [rsp+78h] [rbp+2Fh]
  __int128 v8; // [rsp+80h] [rbp+37h]
  int v9; // [rsp+B0h] [rbp+67h] BYREF
  int v10; // [rsp+B8h] [rbp+6Fh] BYREF
  int v11; // [rsp+C0h] [rbp+77h] BYREF
  HANDLE Handle; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( CachedLanguageOverlayGroupPolicyState == 2 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\WindowsStore");
    v4 = 48;
    p_DestinationString = &DestinationString;
    v7 = 64;
    Handle = 0LL;
    v5 = 0LL;
    v8 = 0LL;
    if ( (int)NtOpenKey(&Handle, 131097LL, &v4) >= 0 )
    {
      if ( (v9 = 0,
            v10 = 4,
            RtlInitUnicodeString(&v2, L"AutoDownload"),
            (int)QueryRegistryValue(Handle, &v2, &v11, &v9, &v10) >= 0)
        && v11 == 4
        && v9 == 2
        || (v9 = 0,
            v10 = 4,
            RtlInitUnicodeString(&v3, L"DisableStoreApps"),
            (int)QueryRegistryValue(Handle, &v3, &v11, &v9, &v10) >= 0)
        && v11 == 4
        && v9 == 1 )
      {
        _InterlockedCompareExchange(&CachedLanguageOverlayGroupPolicyState, 0, 2);
      }
    }
    _InterlockedCompareExchange(&CachedLanguageOverlayGroupPolicyState, 1, 2);
    if ( Handle )
      NtClose(Handle);
  }
  return CachedLanguageOverlayGroupPolicyState == 0;
}
