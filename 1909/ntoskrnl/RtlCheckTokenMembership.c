/*
 * XREFs of RtlCheckTokenMembership @ 0x1400F0060
 * Callers:
 *     PopPowerInformationInternal @ 0x14069B7B4 (PopPowerInformationInternal.c)
 *     ExCheckFullProcessInformationAccess @ 0x14069E6AC (ExCheckFullProcessInformationAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x14072B17C (PopIsRunningAsLocalSystem.c)
 *     ExpCheckIRTimerAccess @ 0x140747CF4 (ExpCheckIRTimerAccess.c)
 *     PopValidateContextMembership @ 0x1407491A8 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408B3B3C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1408D1390 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1408E0ED0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408F8620 (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
