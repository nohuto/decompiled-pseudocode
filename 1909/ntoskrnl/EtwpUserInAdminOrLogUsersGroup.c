/*
 * XREFs of EtwpUserInAdminOrLogUsersGroup @ 0x1408F8620
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408F5EF0 (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400F0060 (RtlCheckTokenMembership.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 *     RtlAllocateAndInitializeSidEx @ 0x1408D1300 (RtlAllocateAndInitializeSidEx.c)
 */

bool EtwpUserInAdminOrLogUsersGroup()
{
  __int64 v0; // rdx
  int v1; // ebx
  bool result; // al
  char v3; // [rsp+40h] [rbp+18h]
  int v4; // [rsp+48h] [rbp+20h] BYREF
  __int16 v5; // [rsp+4Ch] [rbp+24h]
  int v6; // [rsp+50h] [rbp+28h] BYREF
  int v7; // [rsp+54h] [rbp+2Ch]
  PVOID P; // [rsp+58h] [rbp+30h] BYREF

  v4 = 0;
  v5 = 1280;
  result = 1;
  if ( (int)RtlCheckTokenMembership(0LL, SeAliasAdminsSid) < 0 || !v3 )
  {
    v6 = 32;
    v7 = 558;
    if ( (int)RtlAllocateAndInitializeSidEx((__int64)&v4, v0, (char *)&v6, &P) < 0 )
      return 0;
    v1 = RtlCheckTokenMembership(0LL, P);
    ExFreePoolWithTag(P, 0);
    if ( v1 < 0 || !v3 )
      return 0;
  }
  return result;
}
