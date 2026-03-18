/*
 * XREFs of ExpUmdfSidCheck @ 0x140910604
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EDCB0 (NtQuerySystemEnvironmentValueEx.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
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
