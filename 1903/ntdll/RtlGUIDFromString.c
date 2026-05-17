/*
 * XREFs of RtlGUIDFromString @ 0x18006A170
 * Callers:
 *     RtlQueryPackageClaims @ 0x180069D00 (RtlQueryPackageClaims.c)
 *     RtlRaiseCustomSystemEventTrigger @ 0x1800FB910 (RtlRaiseCustomSystemEventTrigger.c)
 * Callees:
 *     sub_18006A360 @ 0x18006A360 (sub_18006A360.c)
 *     __security_check_cookie @ 0x18008C7B0 (__security_check_cookie.c)
 */

__int64 __fastcall RtlGUIDFromString(unsigned __int16 *a1, __int64 a2)
{
  unsigned int v3; // ecx
  _BYTE *v4; // rdx
  __int64 *v5; // r8
  __int64 v7; // [rsp+70h] [rbp-28h] BYREF
  __int64 v8; // [rsp+78h] [rbp-20h] BYREF

  v7 = 0LL;
  v8 = 0LL;
  if ( (unsigned int)sub_18006A360(
                       *((_QWORD *)a1 + 1),
                       *a1 >> 1,
                       L"{%08lx-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
                       a2,
                       a2 + 4,
                       a2 + 6,
                       &v7,
                       (char *)&v7 + 2,
                       (char *)&v7 + 4,
                       (char *)&v7 + 6,
                       &v8,
                       (char *)&v8 + 2,
                       (char *)&v8 + 4,
                       (char *)&v8 + 6) == -1 )
    return 3221225485LL;
  v3 = 0;
  v4 = (_BYTE *)(a2 + 8);
  v5 = &v7;
  do
  {
    ++v3;
    *v4 = *(_BYTE *)v5;
    v5 = (__int64 *)((char *)v5 + 2);
    ++v4;
  }
  while ( v3 < 8 );
  return 0LL;
}
