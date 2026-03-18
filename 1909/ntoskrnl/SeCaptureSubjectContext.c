/*
 * XREFs of SeCaptureSubjectContext @ 0x1405DE350
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400E42B0 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x1400F0080 (RtlCheckTokenMembershipEx.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FAC0 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     RtlCheckTokenCapability @ 0x14030BCE0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14032B368 (WdipAccessCheck.c)
 *     PiDqQueryCreate @ 0x1405B6B30 (PiDqQueryCreate.c)
 *     PiAuVerifyAccessToObject @ 0x1405BB1C4 (PiAuVerifyAccessToObject.c)
 *     RtlpSetSecurityObject @ 0x1405C80E0 (RtlpSetSecurityObject.c)
 *     NtDuplicateToken @ 0x1405D7FA0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1405D82D0 (RtlIsSandboxedToken.c)
 *     ObpLookupObjectName @ 0x1405F6F30 (ObpLookupObjectName.c)
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
 *     CmpNotifyChangeKey @ 0x14062FDF0 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x140630190 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x14063B0D0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x14063C850 (NtDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1406409F0 (CmpSetKeySecurity.c)
 *     SPCall2ServerInternal @ 0x14064A46C (SPCall2ServerInternal.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x14064D1D0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ExpWnfCheckCallerAccess @ 0x14065637C (ExpWnfCheckCallerAccess.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14067249C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     SeSinglePrivilegeCheck @ 0x140678440 (SeSinglePrivilegeCheck.c)
 *     SepAdtTokenRightAdjusted @ 0x1406786C0 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406787B0 (SeAuditingWithTokenForSubcategory.c)
 *     PiDqOpenUserObjectRegKey @ 0x140695048 (PiDqOpenUserObjectRegKey.c)
 *     PiUEventHandleRegistration @ 0x140695404 (PiUEventHandleRegistration.c)
 *     NtSetInformationKey @ 0x1406B8050 (NtSetInformationKey.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CE580 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x1406D17C8 (ExIsRestrictedCaller.c)
 *     PspSinglePrivCheck @ 0x1406D83DC (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x1406E0798 (PiCMGetDeviceIdList.c)
 *     SepCheckCreateLowBox @ 0x1406EC154 (SepCheckCreateLowBox.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F7B60 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406FBDA0 (PiPnpRtlObjectEventWorker.c)
 *     NtOpenObjectAuditAlarm @ 0x140714AA0 (NtOpenObjectAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x140721BDC (PiCMValidateDeviceInstance.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1407454A0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x1407489B8 (SeCheckPrivilegedObject.c)
 *     SeAuditProcessCreation @ 0x14074A0D0 (SeAuditProcessCreation.c)
 *     SeAuditBootConfiguration @ 0x14074A4EC (SeAuditBootConfiguration.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A9FC (SepAuditAssignPrimaryToken.c)
 *     PopBootStatAccessCheck @ 0x14077CA2C (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x140780C20 (NtSetUuidSeed.c)
 *     NtRenameKey @ 0x140823E80 (NtRenameKey.c)
 *     PnpGetCallerSessionId @ 0x140861804 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140863D88 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x140863F38 (PiAuDoesClientHavePrivilege.c)
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
 *     WmipInitializeSecurity @ 0x140A18DBC (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003ACD0 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EC70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F5C0 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003F9B0 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007FC50 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400C6220 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405DE460 (PsReferenceImpersonationTokenEx.c)
 */

void __stdcall SeCaptureSubjectContext(PSECURITY_SUBJECT_CONTEXT SubjectContext)
{
  struct _KTHREAD *CurrentThread; // rcx
  _KPROCESS *Process; // rsi
  void *v4; // rax
  unsigned __int64 *v5; // rbp
  _QWORD *v6; // rdi
  struct _KTHREAD *v7; // r15
  signed __int64 *p_Lock; // rsi
  __int64 v9; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h] BYREF

  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  SubjectContext->ProcessAuditId = Process[1].Header.WaitListHead.Flink;
  if ( CurrentThread )
    v4 = (void *)PsReferenceImpersonationTokenEx(
                   (_DWORD)CurrentThread,
                   0,
                   (unsigned int)&v10,
                   (unsigned int)&v9,
                   (__int64)&SubjectContext->ImpersonationLevel,
                   0LL);
  else
    v4 = 0LL;
  v5 = &Process[1].Affinity.Bitmap[5];
  SubjectContext->ClientToken = v4;
  v6 = (_QWORD *)ObFastReferenceObject((signed __int64 *)&Process[1].Affinity.Bitmap[5]);
  if ( !v6 )
  {
    v7 = KeGetCurrentThread();
    --v7->KernelApcDisable;
    p_Lock = (signed __int64 *)&Process[1].Header.Lock;
    ExAcquirePushLockSharedEx((ULONG_PTR)p_Lock, 0LL);
    v6 = (_QWORD *)ObFastReferenceObjectLocked(v5);
    if ( _InterlockedCompareExchange64(p_Lock, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(p_Lock);
    KeAbPostRelease((ULONG_PTR)p_Lock);
    KeLeaveCriticalRegionThread((__int64)v7);
  }
  SubjectContext->PrimaryToken = v6;
  if ( *(_DWORD *)((char *)&NlsMbCodePageTag + 3) )
  {
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6[143] + 284LL));
      if ( SubjectContext->PrimaryToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
    if ( SubjectContext->ClientToken )
    {
      _InterlockedIncrement((volatile signed __int32 *)(*((_QWORD *)SubjectContext->ClientToken + 143) + 284LL));
      if ( SubjectContext->ClientToken == (PACCESS_TOKEN)SepTokenLeakToken )
        __debugbreak();
    }
  }
}
