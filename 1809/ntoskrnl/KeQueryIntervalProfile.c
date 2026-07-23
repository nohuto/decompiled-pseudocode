/*
 * XREFs of KeQueryIntervalProfile @ 0x1406D7EB4
 * Callers:
 *     NtQueryIntervalProfile @ 0x1406D7E50 (NtQueryIntervalProfile.c)
 *     KeSetIntervalProfile @ 0x1406D7F60 (KeSetIntervalProfile.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  int v2; // [rsp+30h] [rbp-28h] BYREF
  char v3; // [rsp+34h] [rbp-24h]
  unsigned int v4; // [rsp+38h] [rbp-20h]
  char v5; // [rsp+60h] [rbp+8h] BYREF

  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  v2 = a1;
  if ( ((int (__fastcall *)(__int64, __int64, int *, char *))off_140401458[0])(1LL, 24LL, &v2, &v5) >= 0 && v3 )
    return v4;
  else
    return 0LL;
}
