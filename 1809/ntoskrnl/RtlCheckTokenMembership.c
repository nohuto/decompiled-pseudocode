/*
 * XREFs of RtlCheckTokenMembership @ 0x1400DCAF0
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     ExCheckFullProcessInformationAccess @ 0x140654314 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x1406CFBCC (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x1406E2728 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x14071E664 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x140876F8C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1408938E0 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1408A2CE0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408BC02C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400DCB10 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
