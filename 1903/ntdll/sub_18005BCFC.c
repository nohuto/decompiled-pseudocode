/*
 * XREFs of sub_18005BCFC @ 0x18005BCFC
 * Callers:
 *     sub_18005BB70 @ 0x18005BB70 (sub_18005BB70.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     sub_18005BEE0 @ 0x18005BEE0 (sub_18005BEE0.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 */

bool sub_18005BCFC()
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
  __int64 v12; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( dword_180162768 == 2 )
  {
    RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\SOFTWARE\\Policies\\Microsoft\\WindowsStore");
    v4 = 48;
    p_DestinationString = &DestinationString;
    v7 = 64;
    v12 = 0LL;
    v5 = 0LL;
    v8 = 0LL;
    if ( (int)ZwOpenKey(&v12, 131097LL, &v4) >= 0 )
    {
      if ( (v9 = 0,
            v10 = 4,
            RtlInitUnicodeString(&v2, L"AutoDownload"),
            (int)sub_18005BEE0(v12, &v2, &v11, &v9, &v10) >= 0)
        && v11 == 4
        && v9 == 2
        || (v9 = 0,
            v10 = 4,
            RtlInitUnicodeString(&v3, L"DisableStoreApps"),
            (int)sub_18005BEE0(v12, &v3, &v11, &v9, &v10) >= 0)
        && v11 == 4
        && v9 == 1 )
      {
        _InterlockedCompareExchange(&dword_180162768, 0, 2);
      }
    }
    _InterlockedCompareExchange(&dword_180162768, 1, 2);
    if ( v12 )
      ZwClose(v12);
  }
  return dword_180162768 == 0;
}
