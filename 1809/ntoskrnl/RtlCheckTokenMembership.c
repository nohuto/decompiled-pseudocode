/*
 * XREFs of RtlCheckTokenMembership @ 0x1400DCB10
 * Callers:
 *     PopPowerInformationInternal @ 0x14058DF30 (PopPowerInformationInternal.c)
 *     ExCheckFullProcessInformationAccess @ 0x1406542F4 (ExCheckFullProcessInformationAccess.c)
 *     ExpCheckIRTimerAccess @ 0x1406CFBAC (ExpCheckIRTimerAccess.c)
 *     PopIsRunningAsLocalSystem @ 0x1406E2708 (PopIsRunningAsLocalSystem.c)
 *     PopValidateContextMembership @ 0x14071E644 (PopValidateContextMembership.c)
 *     PopNetUpdateStandbyRequest @ 0x140876F6C (PopNetUpdateStandbyRequest.c)
 *     RtlCapabilityCheck @ 0x1408938C0 (RtlCapabilityCheck.c)
 *     NtFilterBootOption @ 0x1408A2CC0 (NtFilterBootOption.c)
 *     EtwpUserInAdminOrLogUsersGroup @ 0x1408BC00C (EtwpUserInAdminOrLogUsersGroup.c)
 * Callees:
 *     RtlCheckTokenMembershipEx @ 0x1400DCB30 (RtlCheckTokenMembershipEx.c)
 */

__int64 __fastcall RtlCheckTokenMembership(void *a1, void *a2)
{
  return RtlCheckTokenMembershipEx(a1, a2);
}
