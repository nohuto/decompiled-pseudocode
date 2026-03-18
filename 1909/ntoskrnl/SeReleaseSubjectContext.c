/*
 * XREFs of SeReleaseSubjectContext @ 0x1405F3AE0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     NtSetInformationFile @ 0x14009B240 (NtSetInformationFile.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400E42B0 (SeReportSecurityEventWithSubCategory.c)
 *     PspJobDelete @ 0x1400EB730 (PspJobDelete.c)
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     FsRtlCancelNotify @ 0x140119B30 (FsRtlCancelNotify.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140129974 (ExCpuSetResourceManagerAccessCheck.c)
 *     CmQueryLayeredKey @ 0x14027F678 (CmQueryLayeredKey.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FAC0 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14032B368 (WdipAccessCheck.c)
 *     PiDqQueryRelease @ 0x1405B6370 (PiDqQueryRelease.c)
 *     PiAuVerifyAccessToObject @ 0x1405BB1C4 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405BBA60 (PiPnpRtlObjectEventRelease.c)
 *     WmipCreateGuidObject @ 0x1405C10D8 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x1405C6D50 (ObReferenceObjectByName.c)
 *     RtlpSetSecurityObject @ 0x1405C80E0 (RtlpSetSecurityObject.c)
 *     NtOpenProcessTokenEx @ 0x1405CFF00 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x1405D0200 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1405D0890 (ObOpenObjectByPointer.c)
 *     EtwpAccessCheck @ 0x1405D0FFC (EtwpAccessCheck.c)
 *     NtDuplicateToken @ 0x1405D7FA0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     PspInsertThread @ 0x1405E9524 (PspInsertThread.c)
 *     IopXxxControlFile @ 0x1405F25A0 (IopXxxControlFile.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
 *     NtSetInformationJobObject @ 0x140615580 (NtSetInformationJobObject.c)
 *     NtCreateUserProcess @ 0x140617920 (NtCreateUserProcess.c)
 *     SeDeleteAccessState @ 0x14061B630 (SeDeleteAccessState.c)
 *     PspIsContextAdmin @ 0x14061BFC4 (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x14061C0D0 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x14061E840 (SepFilterToken.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140621638 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140621AFC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140621BE0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1406234D0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1406235B0 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140623640 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     IopGetDeviceInterfaces @ 0x140627858 (IopGetDeviceInterfaces.c)
 *     NtSetValueKey @ 0x140630190 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14064D1D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ExpWnfCheckCallerAccess @ 0x14065637C (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140658E90 (AlpcpCheckConnectionSecurity.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067249C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PsOpenThread @ 0x140678030 (PsOpenThread.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     SepAdtTokenRightAdjusted @ 0x1406786C0 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     PspCombineSecurityDomains @ 0x140679448 (PspCombineSecurityDomains.c)
 *     NtSetInformationProcess @ 0x14067A5E0 (NtSetInformationProcess.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140692FA0 (EtwpCheckProviderLoggingAccess.c)
 *     PiDqOpenUserObjectRegKey @ 0x140695048 (PiDqOpenUserObjectRegKey.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14069EFA8 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14069F14C (ObpCaptureBoundaryDescriptor.c)
 *     CmpVEExecuteParseLogic @ 0x1406A3F90 (CmpVEExecuteParseLogic.c)
 *     CmpIsSystemEntity @ 0x1406A4374 (CmpIsSystemEntity.c)
 *     NtSetInformationKey @ 0x1406B8050 (NtSetInformationKey.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406B8720 (PspOneDirectionSecurityDomainCombine.c)
 *     CmpFlushNotify @ 0x1406B9FEC (CmpFlushNotify.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406C1170 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1406C1C90 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C1D20 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CE580 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x1406D17C8 (ExIsRestrictedCaller.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5000 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspSetQuotaLimits @ 0x1406D7FE0 (PspSetQuotaLimits.c)
 *     PiCMGetDeviceIdList @ 0x1406E0798 (PiCMGetDeviceIdList.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406EA0E4 (PiUEventFreeClientRegistrationContext.c)
 *     SepCheckCreateLowBox @ 0x1406EC154 (SepCheckCreateLowBox.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F7B60 (IoGetDeviceInterfaceAlias.c)
 *     NtOpenObjectAuditAlarm @ 0x140714AA0 (NtOpenObjectAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1407454A0 (NtPrivilegeObjectAuditAlarm.c)
 *     ExpCheckWakeTimerAccess @ 0x140747DA8 (ExpCheckWakeTimerAccess.c)
 *     SeCheckPrivilegedObject @ 0x1407489B8 (SeCheckPrivilegedObject.c)
 *     SeAuditProcessCreation @ 0x14074A0D0 (SeAuditProcessCreation.c)
 *     SeAuditBootConfiguration @ 0x14074A4EC (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A9FC (SepAuditAssignPrimaryToken.c)
 *     PsCreateMinimalProcess @ 0x1407580C4 (PsCreateMinimalProcess.c)
 *     PopBootStatAccessCheck @ 0x14077CA2C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x140780C20 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 *     FsRtlNotifyCleanupAll @ 0x14084FBD0 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140861804 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140863D88 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x140863F38 (PiAuDoesClientHavePrivilege.c)
 *     PspDeleteObjectAccessState @ 0x1408C85AC (PspDeleteObjectAccessState.c)
 *     PspIumVerifyParentSd @ 0x1408CAE98 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DA8F0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408DAEC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1408DB088 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1408DB280 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1408DB43C (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1408DB984 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1408DBB50 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1408DBD94 (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1408DE600 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1408DE720 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408DE7F0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1408F31B4 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x1409150A0 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003AE70 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003DFA0 (ObfDereferenceObject.c)
 */

void __stdcall SeReleaseSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  PACCESS_TOKEN ClientToken; // rcx
  _QWORD *PrimaryToken; // rax

  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    PrimaryToken = SubjectContext->PrimaryToken;
    if ( PrimaryToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(PrimaryToken[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
  ObFastDereferenceObject(
    (signed __int64 *)&KeGetCurrentThread()->ApcState.Process[1].Affinity.Bitmap[5],
    (unsigned __int64)SubjectContext->PrimaryToken);
  ClientToken = SubjectContext->ClientToken;
  SubjectContext->PrimaryToken = 0LL;
  if ( ClientToken )
    ObfDereferenceObject(ClientToken);
  SubjectContext->ClientToken = 0LL;
}
