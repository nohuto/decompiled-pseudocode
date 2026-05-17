/*
 * XREFs of RtlOpenCurrentUser @ 0x180029AC0
 * Callers:
 *     sub_180009204 @ 0x180009204 (sub_180009204.c)
 * Callees:
 *     RtlFormatCurrentUserKeyPath @ 0x180013800 (RtlFormatCurrentUserKeyPath.c)
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 */

__int64 __fastcall RtlOpenCurrentUser(unsigned int a1, __int64 a2)
{
  int v4; // ebx
  UNICODE_STRING UnicodeString; // [rsp+20h] [rbp-40h] BYREF
  int v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_UnicodeString; // [rsp+40h] [rbp-20h]
  int v10; // [rsp+48h] [rbp-18h]
  __int128 v11; // [rsp+50h] [rbp-10h]

  v4 = RtlFormatCurrentUserKeyPath(&UnicodeString);
  if ( v4 >= 0 )
  {
    v8 = 0LL;
    p_UnicodeString = &UnicodeString;
    v7 = 48;
    v10 = 1600;
    v11 = 0LL;
    v4 = ZwOpenKey(a2, a1, &v7);
    RtlFreeUnicodeString(&UnicodeString);
  }
  if ( v4 == -1073741772 )
  {
    RtlInitUnicodeString(&UnicodeString, L"\\Registry\\User\\.Default");
    v8 = 0LL;
    p_UnicodeString = &UnicodeString;
    v7 = 48;
    v10 = 1600;
    v11 = 0LL;
    return (unsigned int)ZwOpenKey(a2, a1, &v7);
  }
  return (unsigned int)v4;
}
