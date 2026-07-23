/*
 * XREFs of ExpUmdfSidCheck @ 0x140910604
 * Callers:
 *     NtQuerySystemEnvironmentValueEx @ 0x1406EDCB0 (NtQuerySystemEnvironmentValueEx.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 */

BOOLEAN ExpUmdfSidCheck()
{
  NTSTATUS v0; // eax
  BOOLEAN v1; // cl
  BOOLEAN IsMember; // [rsp+30h] [rbp+8h] BYREF

  IsMember = 0;
  v0 = RtlCheckTokenMembershipEx(0LL, SeExports->SeUserModeDriversSid, 0, &IsMember);
  v1 = IsMember;
  if ( v0 < 0 )
    return 0;
  return v1;
}
