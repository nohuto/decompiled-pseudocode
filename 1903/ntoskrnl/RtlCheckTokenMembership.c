/*
 * XREFs of RtlCheckTokenMembership @ 0x1400B39B0
 * Callers:
 *     PopPowerInformationInternal @ 0x14067E674 (PopPowerInformationInternal.c)
 *     ExCheckFullProcessInformationAccess @ 0x140680204 (ExCheckFullProcessInformationAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x140729E0C (PopIsRunningAsLocalSystem.c)
 *     ExpCheckIRTimerAccess @ 0x140745DF4 (ExpCheckIRTimerAccess.c)
 *     PopValidateContextMembership @ 0x1407472A8 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408B426C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1408D1A90 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1408E15D0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408F8C3C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
