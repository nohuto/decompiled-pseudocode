/*
 * XREFs of RtlCheckTokenMembership @ 0x1400DCB90
 * Callers:
 *     PopPowerInformationInternal @ 0x14058EF30 (PopPowerInformationInternal.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406554B4 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x1406D0E4C (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x1406E39A8 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x14071F8E4 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x1408781CC (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x140894B20 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1408A3F20 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408BD2CC (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400DCBB0 (RtlCheckTokenMembershipEx.c)
 */

NTSTATUS __cdecl RtlCheckTokenMembership(HANDLE TokenHandle, PSID SidToCheck, PBOOLEAN IsMember)
{
  return RtlCheckTokenMembershipEx(TokenHandle, SidToCheck, 0, IsMember);
}
