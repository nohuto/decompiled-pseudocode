/*
 * XREFs of SeReleaseSubjectContext @ 0x1405F3180
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400ADD60 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     NtSetInformationFile @ 0x1400BB3D0 (NtSetInformationFile.c)
 *     PspJobDelete @ 0x1400E6790 (PspJobDelete.c)
 *     FsRtlCancelNotify @ 0x14011B700 (FsRtlCancelNotify.c)
 *     ExCpuSetResourceManagerAccessCheck @ 0x140128F54 (ExCpuSetResourceManagerAccessCheck.c)
 *     CmQueryLayeredKey @ 0x14027F918 (CmQueryLayeredKey.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FD60 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x14032B918 (WdipAccessCheck.c)
 *     PiDqQueryRelease @ 0x1405B5F90 (PiDqQueryRelease.c)
 *     PiAuVerifyAccessToObject @ 0x1405BADE4 (PiAuVerifyAccessToObject.c)
 *     PiPnpRtlObjectEventRelease @ 0x1405BB680 (PiPnpRtlObjectEventRelease.c)
 *     WmipCreateGuidObject @ 0x1405C0C08 (WmipCreateGuidObject.c)
 *     ObReferenceObjectByName @ 0x1405C6850 (ObReferenceObjectByName.c)
 *     RtlpSetSecurityObject @ 0x1405C7BE0 (RtlpSetSecurityObject.c)
 *     NtOpenProcessTokenEx @ 0x1405CFA00 (NtOpenProcessTokenEx.c)
 *     PsOpenProcess @ 0x1405CFD00 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x1405D0390 (ObOpenObjectByPointer.c)
 *     EtwpAccessCheck @ 0x1405D0AFC (EtwpAccessCheck.c)
 *     NtDuplicateToken @ 0x1405D77E0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     PspInsertThread @ 0x1405E8D54 (PspInsertThread.c)
 *     IopXxxControlFile @ 0x1405F1C90 (IopXxxControlFile.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
 *     NtSetInformationJobObject @ 0x140613A70 (NtSetInformationJobObject.c)
 *     NtCreateUserProcess @ 0x140615E10 (NtCreateUserProcess.c)
 *     SeDeleteAccessState @ 0x140619B20 (SeDeleteAccessState.c)
 *     PspIsContextAdmin @ 0x14061A4B4 (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x14061A5C0 (NtImpersonateAnonymousToken.c)
 *     SepFilterToken @ 0x14061CD30 (SepFilterToken.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14061FB18 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061FFDC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406200C0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1406219B0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140621A90 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140621B20 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     IopGetDeviceInterfaces @ 0x1406239A8 (IopGetDeviceInterfaces.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     ExpWnfCheckCallerAccess @ 0x14064282C (ExpWnfCheckCallerAccess.c)
 *     AlpcpCheckConnectionSecurity @ 0x140645340 (AlpcpCheckConnectionSecurity.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     EtwpCheckProviderLoggingAccess @ 0x140665B8C (EtwpCheckProviderLoggingAccess.c)
 *     PiDqOpenUserObjectRegKey @ 0x140667C28 (PiDqOpenUserObjectRegKey.c)
 *     PspOneDirectionSecurityDomainCombine @ 0x1406722F4 (PspOneDirectionSecurityDomainCombine.c)
 *     PsOpenThread @ 0x140672920 (PsOpenThread.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     SepAdtTokenRightAdjusted @ 0x140672FB0 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406730A0 (SeAuditingWithTokenForSubcategory.c)
 *     PspCombineSecurityDomains @ 0x140673D38 (PspCombineSecurityDomains.c)
 *     NtSetInformationProcess @ 0x140674ED0 (NtSetInformationProcess.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140680A48 (ObpVerifyCreatorAccessCheck.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140680BEC (ObpCaptureBoundaryDescriptor.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     CmpFlushNotify @ 0x14069B034 (CmpFlushNotify.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14069FB50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     CmpVEExecuteParseLogic @ 0x1406AD5E0 (CmpVEExecuteParseLogic.c)
 *     CmpIsSystemEntity @ 0x1406AD9C4 (CmpIsSystemEntity.c)
 *     NtSetInformationKey @ 0x1406BC830 (NtSetInformationKey.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1406C1F80 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1406C2AA0 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1406C2B30 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CF470 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x1406D2468 (ExIsRestrictedCaller.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5920 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PspSetQuotaLimits @ 0x1406D8200 (PspSetQuotaLimits.c)
 *     PiCMGetDeviceIdList @ 0x1406DF488 (PiCMGetDeviceIdList.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1406E8EA4 (PiUEventFreeClientRegistrationContext.c)
 *     SepCheckCreateLowBox @ 0x1406EAE94 (SepCheckCreateLowBox.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F5DA0 (IoGetDeviceInterfaceAlias.c)
 *     NtOpenObjectAuditAlarm @ 0x140712CC0 (NtOpenObjectAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x14071FD3C (PiCMValidateDeviceInstance.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1407435A0 (NtPrivilegeObjectAuditAlarm.c)
 *     ExpCheckWakeTimerAccess @ 0x140745EA8 (ExpCheckWakeTimerAccess.c)
 *     SeCheckPrivilegedObject @ 0x140746AB8 (SeCheckPrivilegedObject.c)
 *     SeAuditProcessCreation @ 0x1407481D0 (SeAuditProcessCreation.c)
 *     PsCreateMinimalProcess @ 0x140769434 (PsCreateMinimalProcess.c)
 *     PopBootStatAccessCheck @ 0x14077944C (PopBootStatAccessCheck.c)
 *     SeAuditBootConfiguration @ 0x140779D14 (SeAuditBootConfiguration.c)
 *     NtSetUuidSeed @ 0x14077E200 (NtSetUuidSeed.c)
 *     SepAuditAssignPrimaryToken @ 0x140780614 (SepAuditAssignPrimaryToken.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 *     FsRtlNotifyCleanupAll @ 0x1408504D0 (FsRtlNotifyCleanupAll.c)
 *     PnpGetCallerSessionId @ 0x140862104 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140864688 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x140864838 (PiAuDoesClientHavePrivilege.c)
 *     PspDeleteObjectAccessState @ 0x1408C8CCC (PspDeleteObjectAccessState.c)
 *     PspIumVerifyParentSd @ 0x1408CB5B8 (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DAFF0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408DB5C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x1408DB788 (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x1408DB980 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x1408DBB3C (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x1408DC084 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1408DC250 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1408DC494 (SeOperationAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x1408DED00 (NtDeleteObjectAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1408DEE20 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408DEEF0 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     EtwpCoverageUserIsAdmin @ 0x1408F3844 (EtwpCoverageUserIsAdmin.c)
 *     CMFCheckAccess @ 0x140915640 (CMFCheckAccess.c)
 *     VfUtilIsLocalSystem @ 0x1409645C0 (VfUtilIsLocalSystem.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14003B130 (ObFastDereferenceObject.c)
 *     ObfDereferenceObject @ 0x14003E260 (ObfDereferenceObject.c)
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
