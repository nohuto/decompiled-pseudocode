/*
 * XREFs of SeAccessCheck @ 0x1400A61D0
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14003A9B0 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x140117380 (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FAC0 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x14031DBFC (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14032B368 (WdipAccessCheck.c)
 *     PiAuVerifyAccessToObject @ 0x1405BB1C4 (PiAuVerifyAccessToObject.c)
 *     ObCheckCreateObjectAccess @ 0x1405C6000 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C7008 (ObpCheckObjectReference.c)
 *     EtwpAccessCheck @ 0x1405D0FFC (EtwpAccessCheck.c)
 *     RtlpNewSecurityObject @ 0x1405DA480 (RtlpNewSecurityObject.c)
 *     ObpCreateHandle @ 0x1405F3B50 (ObpCreateHandle.c)
 *     IopParseDevice @ 0x1406018D0 (IopParseDevice.c)
 *     CmpCheckNotifyAccess @ 0x1406318B0 (CmpCheckNotifyAccess.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     ExpWnfCheckCallerAccess @ 0x14065637C (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140658E90 (AlpcpCheckConnectionSecurity.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067249C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     ObCheckObjectAccess @ 0x1406BE820 (ObCheckObjectAccess.c)
 *     ExIsRestrictedCaller @ 0x1406D17C8 (ExIsRestrictedCaller.c)
 *     CmpCheckCreateAccess @ 0x1406D4A50 (CmpCheckCreateAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5000 (CmpCheckKeySecurityDescriptorAccess.c)
 *     CmpCheckKeyBodyAccess @ 0x1406F85C8 (CmpCheckKeyBodyAccess.c)
 *     PopBootStatAccessCheck @ 0x14077CA2C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x140780C20 (NtSetUuidSeed.c)
 *     PiAuCheckTokenMembership @ 0x140863D88 (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x14089DC00 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x1408C718C (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x1408CAE98 (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x1409150A0 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400A8610 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
