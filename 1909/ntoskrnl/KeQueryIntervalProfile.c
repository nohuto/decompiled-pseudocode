/*
 * XREFs of KeQueryIntervalProfile @ 0x1406F9E74
 * Callers:
 *     NtQueryIntervalProfile @ 0x1406F9E10 (NtQueryIntervalProfile.c)
 *     KeSetIntervalProfile @ 0x1406F9F50 (KeSetIntervalProfile.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

__int64 __fastcall KeQueryIntervalProfile(int a1)
{
  __int64 v2; // [rsp+30h] [rbp-28h] BYREF
  __int64 v3; // [rsp+38h] [rbp-20h]
  __int64 v4; // [rsp+40h] [rbp-18h]
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v2 = 0LL;
  v3 = 0LL;
  v4 = 0LL;
  if ( a1 == 1 )
    return (unsigned int)KiProfileAlignmentFixupInterval;
  LODWORD(v2) = a1;
  if ( ((int (__fastcall *)(__int64, __int64, __int64 *, __int64 *))off_140426798[0])(1LL, 24LL, &v2, &v5) >= 0
    && BYTE4(v2) )
  {
    return (unsigned int)v3;
  }
  else
  {
    return 0LL;
  }
}
