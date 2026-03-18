/*
 * XREFs of SePrivilegeCheck @ 0x1405CF200
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1405C6118 (ObpAdjustCreatorAccessState.c)
 *     PsOpenProcess @ 0x1405D0200 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     IopCheckBackupRestorePrivilege @ 0x1406039A0 (IopCheckBackupRestorePrivilege.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x14067849C (SeSinglePrivilegeCheckEx.c)
 *     PspSinglePrivCheck @ 0x1406D83DC (PspSinglePrivCheck.c)
 *     SeCheckPrivilegedObject @ 0x1407489B8 (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140863F38 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1409150A0 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400053D0 (SepPrivilegeCheck.c)
 */

BOOLEAN __stdcall SePrivilegeCheck(
        PPRIVILEGE_SET RequiredPrivileges,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        KPROCESSOR_MODE AccessMode)
{
  PACCESS_TOKEN ClientToken; // rcx

  if ( !AccessMode )
    return 1;
  ClientToken = SubjectSecurityContext->ClientToken;
  if ( !SubjectSecurityContext->ClientToken )
  {
    ClientToken = SubjectSecurityContext->PrimaryToken;
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  }
  if ( SubjectSecurityContext->ImpersonationLevel >= SecurityImpersonation )
    return SepPrivilegeCheck(
             (__int64)ClientToken,
             (__int64)RequiredPrivileges->Privilege,
             RequiredPrivileges->PrivilegeCount,
             RequiredPrivileges->Control,
             AccessMode);
  return 0;
}
