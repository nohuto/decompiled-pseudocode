/*
 * XREFs of SePrivilegeCheck @ 0x14062B1F0
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1405C94C8 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     NtSetInformationJobObject @ 0x140601B10 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406131AC (SeSinglePrivilegeCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     IopCheckBackupRestorePrivilege @ 0x14063DB30 (IopCheckBackupRestorePrivilege.c)
 *     PsOpenProcess @ 0x1406477E0 (PsOpenProcess.c)
 *     PspSinglePrivCheck @ 0x1406D2774 (PspSinglePrivCheck.c)
 *     SeCheckPrivilegedObject @ 0x14071F504 (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x14082B2B8 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400A7C90 (SepPrivilegeCheck.c)
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
