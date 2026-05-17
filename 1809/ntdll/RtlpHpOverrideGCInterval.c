/*
 * XREFs of RtlpHpOverrideGCInterval @ 0x1800F3A14
 * Callers:
 *     RtlInitializeHeapManager @ 0x1800F1FC4 (RtlInitializeHeapManager.c)
 * Callees:
 *     RtlAppendUnicodeStringToString @ 0x180029B40 (RtlAppendUnicodeStringToString.c)
 *     RtlInitUnicodeString @ 0x180040650 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x18008FEC0 (__security_check_cookie.c)
 *     NtClose @ 0x1800A04C0 (NtClose.c)
 *     NtOpenKey @ 0x1800A0520 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x1800A05C0 (NtQueryValueKey.c)
 *     memset @ 0x1800A7100 (memset.c)
 */

int __fastcall RtlpHpOverrideGCInterval(unsigned __int16 *a1)
{
  const WCHAR *i; // rdx
  int result; // eax
  int v3; // [rsp+38h] [rbp-C8h] BYREF
  _BYTE *v4; // [rsp+40h] [rbp-C0h]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  int v6; // [rsp+60h] [rbp-A0h]
  __int64 v7; // [rsp+68h] [rbp-98h]
  int *v8; // [rsp+70h] [rbp-90h]
  int v9; // [rsp+78h] [rbp-88h]
  __int128 v10; // [rsp+80h] [rbp-80h]
  __int64 v11; // [rsp+90h] [rbp-70h]
  __int128 v12; // [rsp+98h] [rbp-68h]
  _BYTE v13[512]; // [rsp+B0h] [rbp-50h] BYREF

  for ( i = (const WCHAR *)(*((_QWORD *)a1 + 1) + 2 * ((unsigned __int64)*a1 >> 1)); *i != 92; --i )
    ;
  RtlInitUnicodeString(&DestinationString, i);
  memset(v13, 0, sizeof(v13));
  v3 = 0x2000000;
  v11 = 0LL;
  v12 = 0uLL;
  v4 = v13;
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v3, word_180119598);
  RtlAppendUnicodeStringToString((unsigned __int16 *)&v3, (__int16 *)&DestinationString);
  v6 = 48;
  v8 = &v3;
  v7 = 0LL;
  v9 = 64;
  v10 = 0LL;
  result = NtOpenKey();
  if ( result >= 0 )
  {
    result = NtQueryValueKey();
    if ( result >= 0 )
    {
      result = -10000000 * DWORD1(v12);
      RtlpHpGCInterval = -10000000LL * *(_QWORD *)((char *)&v12 + 4);
    }
  }
  return result;
}
