/*
 * XREFs of SePrivilegeCheck @ 0x1405CED00
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1405C5C18 (ObpAdjustCreatorAccessState.c)
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     IopCheckBackupRestorePrivilege @ 0x140601F70 (IopCheckBackupRestorePrivilege.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x140672D8C (SeSinglePrivilegeCheckEx.c)
 *     PspSinglePrivCheck @ 0x1406D85FC (PspSinglePrivCheck.c)
 *     SeCheckPrivilegedObject @ 0x140746AB8 (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x140864838 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x140005340 (SepPrivilegeCheck.c)
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
