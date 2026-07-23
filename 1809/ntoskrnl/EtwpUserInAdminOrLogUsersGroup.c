/*
 * XREFs of EtwpUserInAdminOrLogUsersGroup @ 0x1408BD2CC
 * Callers:
 *     EtwSetPerformanceTraceInformation @ 0x1408BAD0C (EtwSetPerformanceTraceInformation.c)
 * Callees:
 *     RtlCheckTokenMembership @ 0x1400DCB90 (RtlCheckTokenMembership.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 *     RtlAllocateAndInitializeSidEx @ 0x140894A8C (RtlAllocateAndInitializeSidEx.c)
 */

bool EtwpUserInAdminOrLogUsersGroup()
{
  UCHAR v0; // dl
  NTSTATUS v1; // ebx
  bool result; // al
  BOOLEAN IsMember; // [rsp+40h] [rbp+18h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+48h] [rbp+20h] BYREF
  ULONG SubAuthorities; // [rsp+50h] [rbp+28h] BYREF
  int v6; // [rsp+54h] [rbp+2Ch]
  PSID Sid; // [rsp+58h] [rbp+30h] BYREF

  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  result = 1;
  if ( RtlCheckTokenMembership(0LL, SeAliasAdminsSid, &IsMember) < 0 || !IsMember )
  {
    SubAuthorities = 32;
    v6 = 558;
    if ( RtlAllocateAndInitializeSidEx(&IdentifierAuthority, v0, &SubAuthorities, &Sid) < 0 )
      return 0;
    v1 = RtlCheckTokenMembership(0LL, Sid, &IsMember);
    ExFreePoolWithTag(Sid, 0);
    if ( v1 < 0 || !IsMember )
      return 0;
  }
  return result;
}
