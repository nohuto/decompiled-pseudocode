/*
 * XREFs of SePrivilegeCheck @ 0x14062A1D0
 * Callers:
 *     ObpAdjustCreatorAccessState @ 0x1405C84C8 (ObpAdjustCreatorAccessState.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     NtSetInformationJobObject @ 0x140600B10 (NtSetInformationJobObject.c)
 *     SeSinglePrivilegeCheckEx @ 0x1406121AC (SeSinglePrivilegeCheckEx.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     IopCheckBackupRestorePrivilege @ 0x14063CB10 (IopCheckBackupRestorePrivilege.c)
 *     PsOpenProcess @ 0x1406467C0 (PsOpenProcess.c)
 *     PspSinglePrivCheck @ 0x1406D14D4 (PspSinglePrivCheck.c)
 *     SeCheckPrivilegedObject @ 0x14071E264 (SeCheckPrivilegedObject.c)
 *     PiAuDoesClientHavePrivilege @ 0x14082A0B8 (PiAuDoesClientHavePrivilege.c)
 *     CMFCheckAccess @ 0x1408D83E4 (CMFCheckAccess.c)
 * Callees:
 *     SepPrivilegeCheck @ 0x1400A7D50 (SepPrivilegeCheck.c)
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
