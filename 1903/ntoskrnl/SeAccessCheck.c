/*
 * XREFs of SeAccessCheck @ 0x1400C6350
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14003AC70 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x140115D10 (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FD60 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x14031E1AC (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14032B918 (WdipAccessCheck.c)
 *     PiAuVerifyAccessToObject @ 0x1405BADE4 (PiAuVerifyAccessToObject.c)
 *     ObCheckCreateObjectAccess @ 0x1405C5B00 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C6B08 (ObpCheckObjectReference.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
 *     RtlpNewSecurityObject @ 0x1405D9CE0 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x1405F3220 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1405FFEA0 (IopParseDevice.c)
 *     CmpCheckNotifyAccess @ 0x14062DA60 (CmpCheckNotifyAccess.c)
 *     ExpWnfCheckCallerAccess @ 0x14064282C (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140645340 (AlpcpCheckConnectionSecurity.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14069FB50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x1406BED70 (ObCheckObjectAccess.c)
 *     ExIsRestrictedCaller @ 0x1406D2468 (ExIsRestrictedCaller.c)
 *     CmpCheckCreateAccess @ 0x1406D5370 (CmpCheckCreateAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5920 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F6808 (CmpCheckKeyBodyAccess.c)
 *     PopBootStatAccessCheck @ 0x14077944C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x14077E200 (NtSetUuidSeed.c)
 *     PiAuCheckTokenMembership @ 0x140864688 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x14089E3C0 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1408C78AC (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1408CB5B8 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400C8790 (SeAccessCheckWithHintWithAdminlessChecks.c)
 */

BOOLEAN __stdcall SeAccessCheck(
        PSECURITY_DESCRIPTOR SecurityDescriptor,
        PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
        BOOLEAN SubjectContextLocked,
        ACCESS_MASK DesiredAccess,
        ACCESS_MASK PreviouslyGrantedAccess,
        PPRIVILEGE_SET *Privileges,
        PGENERIC_MAPPING GenericMapping,
        KPROCESSOR_MODE AccessMode,
        PACCESS_MASK GrantedAccess,
        PNTSTATUS AccessStatus)
{
  char v12; // [rsp+58h] [rbp-10h]

  v12 = 0;
  return SeAccessCheckWithHintWithAdminlessChecks(
           SecurityDescriptor,
           0LL,
           SubjectSecurityContext,
           SubjectContextLocked,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           GenericMapping,
           AccessMode,
           GrantedAccess,
           AccessStatus,
           v12);
}
