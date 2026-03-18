/*
 * XREFs of SeCaptureSubjectContext @ 0x140631A80
 * Callers:
 *     SeReportSecurityEventWithSubCategory @ 0x140091E50 (SeReportSecurityEventWithSubCategory.c)
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9450 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     RtlCheckTokenMembershipEx @ 0x1400DCB10 (RtlCheckTokenMembershipEx.c)
 *     IoCheckRedirectionTrustLevel @ 0x1401B40B0 (IoCheckRedirectionTrustLevel.c)
 *     IoComputeRedirectionTrustLevel @ 0x1401B41F0 (IoComputeRedirectionTrustLevel.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14026C228 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     RtlCheckTokenCapability @ 0x1402ED9B0 (RtlCheckTokenCapability.c)
 *     WdipAccessCheck @ 0x14030DC54 (WdipAccessCheck.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x140588B1C (SeIsAppContainerOrIdentifyLevelContext.c)
 *     PiDqQueryCreate @ 0x140590864 (PiDqQueryCreate.c)
 *     PiAuVerifyAccessToObject @ 0x140595360 (PiAuVerifyAccessToObject.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140596850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     IopGetDeviceInterfaces @ 0x14059E6C4 (IopGetDeviceInterfaces.c)
 *     PiCMValidateDeviceInstance @ 0x14059F414 (PiCMValidateDeviceInstance.c)
 *     NtDeleteKey @ 0x1405A9940 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1405B6030 (NtDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x1405B8548 (CmpSetKeySecurity.c)
 *     PspIsContextAdmin @ 0x1405B96B4 (PspIsContextAdmin.c)
 *     NtImpersonateAnonymousToken @ 0x1405B9710 (NtImpersonateAnonymousToken.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405BA094 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1405BB990 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BBA50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1405BBAC0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BC394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     EtwpRegisterUMGuid @ 0x1405C3970 (EtwpRegisterUMGuid.c)
 *     EtwpAccessCheck @ 0x1405C5280 (EtwpAccessCheck.c)
 *     RtlpSetSecurityObject @ 0x1405CA240 (RtlpSetSecurityObject.c)
 *     CmSetValueKey @ 0x1405CBE28 (CmSetValueKey.c)
 *     NtSetValueKey @ 0x1405CC8E0 (NtSetValueKey.c)
 *     CmpNotifyChangeKey @ 0x1405CF040 (CmpNotifyChangeKey.c)
 *     ObpLookupObjectName @ 0x1405E3BE0 (ObpLookupObjectName.c)
 *     SepAdtTokenRightAdjusted @ 0x14060A2D8 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14060A3C0 (SeAuditingWithTokenForSubcategory.c)
 *     ExpWnfCheckCallerAccess @ 0x14060FF4C (ExpWnfCheckCallerAccess.c)
 *     SeSinglePrivilegeCheck @ 0x140612160 (SeSinglePrivilegeCheck.c)
 *     NtDuplicateToken @ 0x14064A030 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x14064A350 (RtlIsSandboxedToken.c)
 *     PiUEventHandleRegistration @ 0x140655C04 (PiUEventHandleRegistration.c)
 *     SepFilterToken @ 0x140657CEC (SepFilterToken.c)
 *     sub_140685860 @ 0x140685860 (sub_140685860.c)
 *     NtSetInformationKey @ 0x140697000 (NtSetInformationKey.c)
 *     NtDeleteWnfStateName @ 0x1406AB300 (NtDeleteWnfStateName.c)
 *     ExIsRestrictedCaller @ 0x1406ADA0C (ExIsRestrictedCaller.c)
 *     NtCloseObjectAuditAlarm @ 0x1406ADAA0 (NtCloseObjectAuditAlarm.c)
 *     PiCMGetDeviceIdList @ 0x1406BB694 (PiCMGetDeviceIdList.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406C47E0 (NtPrivilegedServiceAuditAlarm.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1406C70B0 (ExpWnfCheckCrossScopeAccess.c)
 *     SepCheckCreateLowBox @ 0x1406CBE84 (SepCheckCreateLowBox.c)
 *     PspSinglePrivCheck @ 0x1406D14F4 (PspSinglePrivCheck.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406D52C0 (IoGetDeviceInterfaceAlias.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D93B0 (NtOpenObjectAuditAlarm.c)
 *     PiDqOpenUserObjectRegKey @ 0x1406D9CA0 (PiDqOpenUserObjectRegKey.c)
 *     EtwpCoverageUserIsAdmin @ 0x1406E26D4 (EtwpCoverageUserIsAdmin.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F1F40 (PiPnpRtlObjectEventWorker.c)
 *     NtDeleteObjectAuditAlarm @ 0x140706FA0 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14071B430 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x14071E284 (SeCheckPrivilegedObject.c)
 *     SepAuditAssignPrimaryToken @ 0x140748E34 (SepAuditAssignPrimaryToken.c)
 *     SeAuditBootConfiguration @ 0x1407490C8 (SeAuditBootConfiguration.c)
 *     SeAuditProcessCreation @ 0x1407495D0 (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x140753390 (PopBootStatAccessCheck.c)
 *     NtSetUuidSeed @ 0x1407586C0 (NtSetUuidSeed.c)
 *     NtDeleteWnfStateData @ 0x14075E540 (NtDeleteWnfStateData.c)
 *     NtRenameKey @ 0x1407E9BA0 (NtRenameKey.c)
 *     PnpGetCallerSessionId @ 0x140827D58 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140829F3C (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x14082A0D8 (PiAuDoesClientHavePrivilege.c)
 *     PspIumVerifyParentSd @ 0x14088D06C (PspIumVerifyParentSd.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089CBC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditHandleDuplication @ 0x14089CD8C (SeAuditHandleDuplication.c)
 *     SeAuditHardLinkCreationWithTransaction @ 0x14089CF70 (SeAuditHardLinkCreationWithTransaction.c)
 *     SeAuditPlugAndPlay @ 0x14089D128 (SeAuditPlugAndPlay.c)
 *     SeAuditSystemTimeChange @ 0x14089D66C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089D820 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089DA54 (SeOperationAuditAlarm.c)
 *     SeCloseObjectAuditAlarm @ 0x1408A0590 (SeCloseObjectAuditAlarm.c)
 *     SeDeleteObjectAuditAlarmWithTransaction @ 0x1408A0640 (SeDeleteObjectAuditAlarmWithTransaction.c)
 *     WmipInitializeSecurity @ 0x1409D4198 (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14004D840 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14004EE20 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x140051240 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x140051600 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007DFF4 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x1400914B0 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x140631BA0 (PsReferenceImpersonationTokenEx.c)
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
  if ( SeTokenLeakTracking )
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
