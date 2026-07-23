/*
 * XREFs of SeAccessCheck @ 0x140051640
 * Callers:
 *     SeComputeCreatorDeniedRights @ 0x14004D520 (SeComputeCreatorDeniedRights.c)
 *     IopCreateSecurityCheck @ 0x1401300EC (IopCreateSecurityCheck.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14026C518 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     SeIsSystemContext @ 0x14030014C (SeIsSystemContext.c)
 *     WdipAccessCheck @ 0x14030DF44 (WdipAccessCheck.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140589B1C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PiAuVerifyAccessToObject @ 0x140596360 (PiAuVerifyAccessToObject.c)
 *     ObCheckObjectAccess @ 0x1405968F0 (ObCheckObjectAccess.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     EtwpRegisterUMGuid @ 0x1405C4970 (EtwpRegisterUMGuid.c)
 *     EtwpAccessCheck @ 0x1405C6280 (EtwpAccessCheck.c)
 *     ObCheckCreateObjectAccess @ 0x1405C93B0 (ObCheckCreateObjectAccess.c)
 *     ObpCheckObjectReference @ 0x1405CA050 (ObpCheckObjectReference.c)
 *     CmpCheckNotifyAccess @ 0x1405DD224 (CmpCheckNotifyAccess.c)
 *     ObpCreateHandle @ 0x1405E22B0 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x1405E4BE0 (ObpLookupObjectName.c)
 *     ExpWnfCheckCallerAccess @ 0x140610F4C (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140614280 (AlpcpCheckConnectionSecurity.c)
 *     RtlpNewSecurityObject @ 0x14062E650 (RtlpNewSecurityObject.c)
 *     IopParseDevice @ 0x14063DD00 (IopParseDevice.c)
 *     RtlIsSandboxedToken @ 0x14064B4F0 (RtlIsSandboxedToken.c)
 *     sub_140686A00 @ 0x140686A00 (sub_140686A00.c)
 *     NtDeleteWnfStateName @ 0x1406AC580 (NtDeleteWnfStateName.c)
 *     ExIsRestrictedCaller @ 0x1406AEC8C (ExIsRestrictedCaller.c)
 *     CmpCheckCreateAccess @ 0x1406B68F4 (CmpCheckCreateAccess.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C8330 (ExpWnfCheckCrossScopeAccess.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PopBootStatAccessCheck @ 0x140754560 (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x140759890 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x14075F710 (NtDeleteWnfStateData.c)
 *     CmpCheckKeyBodyAccess @ 0x1407F5AC0 (CmpCheckKeyBodyAccess.c)
 *     PiAuCheckTokenMembership @ 0x14082B11C (PiAuCheckTokenMembership.c)
 *     ObpCheckTraverseAccess @ 0x140862B84 (ObpCheckTraverseAccess.c)
 *     PspCheckJobAccessState @ 0x14088ABC8 (PspCheckJobAccessState.c)
 *     PspIumVerifyParentSd @ 0x14088E2AC (PspIumVerifyParentSd.c)
 *     CMFCheckAccess @ 0x1408D96A4 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x140927130 (VfUtilIsLocalSystem.c)
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
