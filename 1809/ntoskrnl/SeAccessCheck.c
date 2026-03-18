/*
 * XREFs of SeAccessCheck @ 0x140051640
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14004D520 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x14012FFFC (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14026C228 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x1402FFE5C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140588B1C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PiAuVerifyAccessToObject @ 0x140595360 (PiAuVerifyAccessToObject.c)
 *     ObCheckObjectAccess @ 0x1405958F0 (ObCheckObjectAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     EtwpRegisterUMGuid @ 0x1405C3970 (EtwpRegisterUMGuid.c)
 *     EtwpAccessCheck @ 0x1405C5280 (EtwpAccessCheck.c)
 *     ObCheckCreateObjectAccess @ 0x1405C83B0 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405C9050 (ObpCheckObjectReference.c)
 *     CmpCheckNotifyAccess @ 0x1405DC224 (CmpCheckNotifyAccess.c)
 *     ObpCreateHandle @ 0x1405E12B0 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FF4C (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140613280 (AlpcpCheckConnectionSecurity.c)
 *     RtlpNewSecurityObject @ 0x14062D630 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14063CD00 (IopParseDevice.c)
 *     RtlIsSandboxedToken @ 0x14064A350 (RtlIsSandboxedToken.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     NtDeleteWnfStateName @ 0x1406AB300 (NtDeleteWnfStateName.c)
 *     ExIsRestrictedCaller @ 0x1406ADA0C (ExIsRestrictedCaller.c)
 *     CmpCheckCreateAccess @ 0x1406B5674 (CmpCheckCreateAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C70B0 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406C9FD0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PopBootStatAccessCheck @ 0x140753390 (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407586C0 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x14075E540 (NtDeleteWnfStateData.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F48E0 (CmpCheckKeyBodyAccess.c)
 *     PiAuCheckTokenMembership @ 0x140829F3C (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x140861944 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x140889988 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14088D06C (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x1408D8404 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x140926130 (VfUtilIsLocalSystem.c)
 * Callees:
 *     SeAccessCheckWithHintWithAdminlessChecks @ 0x1400516C0 (SeAccessCheckWithHintWithAdminlessChecks.c)
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
  return SeAccessCheckWithHintWithAdminlessChecks(
           SecurityDescriptor,
           0LL,
           SubjectSecurityContext,
           SubjectContextLocked,
           DesiredAccess,
           PreviouslyGrantedAccess,
           Privileges,
           GenericMapping);
}
