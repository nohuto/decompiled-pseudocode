/*
 * XREFs of sub_1800DD460 @ 0x1800DD460
 * Callers:
 *     sub_1800DD010 @ 0x1800DD010 (sub_1800DD010.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180016AA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenKey @ 0x18009C920 (ZwOpenKey.c)
 *     sub_1800DD5C0 @ 0x1800DD5C0 (sub_1800DD5C0.c)
 */

__int64 sub_1800DD460()
{
  unsigned int v0; // ebx
  int v1; // edi
  int v2; // eax
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  int v5; // [rsp+30h] [rbp-30h]
  __int64 v6; // [rsp+38h] [rbp-28h]
  UNICODE_STRING *p_DestinationString; // [rsp+40h] [rbp-20h]
  int v8; // [rsp+48h] [rbp-18h]
  __int128 v9; // [rsp+50h] [rbp-10h]
  int v10; // [rsp+70h] [rbp+10h] BYREF
  __int64 v11; // [rsp+78h] [rbp+18h]

  v0 = 0;
  v11 = 0LL;
  v1 = 0;
  v10 = 0;
  RtlInitUnicodeString(
    &DestinationString,
    L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Windows Error Reporting\\Escalation");
  v5 = 48;
  p_DestinationString = &DestinationString;
  v6 = 0LL;
  v8 = 64;
  v9 = 0LL;
  if ( (int)ZwOpenKey() >= 0 )
  {
    v2 = sub_1800DD5C0(v11, L"DisableEscalation", &v10);
    v1 = v10;
    if ( v2 < 0 )
      v1 = 0;
  }
  if ( v11 )
    ZwClose();
  LOBYTE(v0) = v1 != 0;
  return v0;
}
