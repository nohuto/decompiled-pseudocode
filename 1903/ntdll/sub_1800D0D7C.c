/*
 * XREFs of sub_1800D0D7C @ 0x1800D0D7C
 * Callers:
 *     sub_1800D2538 @ 0x1800D2538 (sub_1800D2538.c)
 * Callees:
 *     RtlFreeUnicodeString @ 0x180029BA0 (RtlFreeUnicodeString.c)
 *     sub_180029BCC @ 0x180029BCC (sub_180029BCC.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 *     ZwClose @ 0x18009C8C0 (ZwClose.c)
 *     ZwOpenFile @ 0x18009CD40 (ZwOpenFile.c)
 *     ZwQueryVolumeInformationFile @ 0x18009D000 (ZwQueryVolumeInformationFile.c)
 */

void __fastcall sub_1800D0D7C(__m128i *a1, __int64 a2)
{
  unsigned __int16 *v2; // [rsp+50h] [rbp-B0h] BYREF
  int v3; // [rsp+58h] [rbp-A8h] BYREF
  char *v4; // [rsp+60h] [rbp-A0h]
  UNICODE_STRING UnicodeString; // [rsp+68h] [rbp-98h] BYREF
  int v6; // [rsp+88h] [rbp-78h]
  __int64 v7; // [rsp+90h] [rbp-70h]
  unsigned __int16 *v8; // [rsp+98h] [rbp-68h]
  int v9; // [rsp+A0h] [rbp-60h]
  __int128 v10; // [rsp+A8h] [rbp-58h]
  char v11; // [rsp+C0h] [rbp-40h] BYREF

  v3 = 0x1000000;
  v4 = &v11;
  UnicodeString.Buffer = 0LL;
  if ( (int)sub_180029BCC(0, a2, a1, (unsigned __int16 *)&v3, &UnicodeString.Length, &v2) >= 0 )
  {
    v8 = v2;
    v6 = 48;
    v7 = 0LL;
    v10 = 0LL;
    v9 = 64;
    if ( (int)ZwOpenFile() >= 0 )
      ZwQueryVolumeInformationFile();
  }
  if ( UnicodeString.Buffer )
    RtlFreeUnicodeString(&UnicodeString);
}
