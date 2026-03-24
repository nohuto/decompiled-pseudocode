/*
 * XREFs of ExpUmdfSidCheck @ 0x1408D32D0
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406CAD00 (NtQuerySystemEnvironmentValueEx.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400DCB30 (RtlCheckTokenMembershipEx.c)
 */

char ExpUmdfSidCheck()
{
  int v0; // eax
  char v1; // cl
  char v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v0 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, &v3);
  v1 = v3;
  if ( v0 < 0 )
    return 0;
  return v1;
}
