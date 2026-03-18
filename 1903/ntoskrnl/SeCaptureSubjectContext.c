/*
 * XREFs of SeCaptureSubjectContext @ 0x1405DDBB0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     SeReportSecurityEventWithSubCategory @ 0x1400ADD60 (SeReportSecurityEventWithSubCategory.c)
 *     RtlCheckTokenMembershipEx @ 0x1400B39D0 (RtlCheckTokenMembershipEx.c)
 *     CmpCheckHivePrimaryFileReadWriteAccess @ 0x14027FD60 (CmpCheckHivePrimaryFileReadWriteAccess.c)
 *     WdipAccessCheck @ 0x14032B918 (WdipAccessCheck.c)
 *     PiDqQueryCreate @ 0x1405B6750 (PiDqQueryCreate.c)
 *     PiAuVerifyAccessToObject @ 0x1405BADE4 (PiAuVerifyAccessToObject.c)
 *     RtlpSetSecurityObject @ 0x1405C7BE0 (RtlpSetSecurityObject.c)
 *     NtDuplicateToken @ 0x1405D77E0 (NtDuplicateToken.c)
 *     RtlIsSandboxedToken @ 0x1405D7B10 (RtlIsSandboxedToken.c)
 *     ObpLookupObjectName @ 0x1405F5EE0 (ObpLookupObjectName.c)
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
 *     CmpNotifyChangeKey @ 0x14062BFA0 (CmpNotifyChangeKey.c)
 *     NtSetValueKey @ 0x14062C340 (NtSetValueKey.c)
 *     NtDeleteKey @ 0x140638040 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x1406397C0 (NtDeleteValueKey.c)
 *     CmpSetKeySecurity @ 0x14063D6B0 (CmpSetKeySecurity.c)
 *     ExpWnfCheckCallerAccess @ 0x14064282C (ExpWnfCheckCallerAccess.c)
 *     PiDqOpenUserObjectRegKey @ 0x140667C28 (PiDqOpenUserObjectRegKey.c)
 *     PiUEventHandleRegistration @ 0x140667FE4 (PiUEventHandleRegistration.c)
 *     SeSinglePrivilegeCheck @ 0x140672D30 (SeSinglePrivilegeCheck.c)
 *     SepAdtTokenRightAdjusted @ 0x140672FB0 (SepAdtTokenRightAdjusted.c)
 *     SeAuditingWithTokenForSubcategory @ 0x1406730A0 (SeAuditingWithTokenForSubcategory.c)
 *     SPCall2ServerInternal @ 0x1406844FC (SPCall2ServerInternal.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeIsAppContainerOrIdentifyLevelContext @ 0x14069FB50 (SeIsAppContainerOrIdentifyLevelContext.c)
 *     NtSetInformationKey @ 0x1406BC830 (NtSetInformationKey.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CF470 (NtCloseObjectAuditAlarm.c)
 *     ExIsRestrictedCaller @ 0x1406D2468 (ExIsRestrictedCaller.c)
 *     PspSinglePrivCheck @ 0x1406D85FC (PspSinglePrivCheck.c)
 *     PiCMGetDeviceIdList @ 0x1406DF488 (PiCMGetDeviceIdList.c)
 *     SepCheckCreateLowBox @ 0x1406EAE94 (SepCheckCreateLowBox.c)
 *     IoGetDeviceInterfaceAlias @ 0x1406F5DA0 (IoGetDeviceInterfaceAlias.c)
 *     PiPnpRtlObjectEventWorker @ 0x1406F9FC0 (PiPnpRtlObjectEventWorker.c)
 *     NtOpenObjectAuditAlarm @ 0x140712CC0 (NtOpenObjectAuditAlarm.c)
 *     PiCMValidateDeviceInstance @ 0x14071FD3C (PiCMValidateDeviceInstance.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1407435A0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeCheckPrivilegedObject @ 0x140746AB8 (SeCheckPrivilegedObject.c)
 *     SeAuditProcessCreation @ 0x1407481D0 (SeAuditProcessCreation.c)
 *     PopBootStatAccessCheck @ 0x14077944C (PopBootStatAccessCheck.c)
 *     SeAuditBootConfiguration @ 0x140779D14 (SeAuditBootConfiguration.c)
 *     NtSetUuidSeed @ 0x14077E200 (NtSetUuidSeed.c)
 *     SepAuditAssignPrimaryToken @ 0x140780614 (SepAuditAssignPrimaryToken.c)
 *     NtRenameKey @ 0x140824780 (NtRenameKey.c)
 *     PnpGetCallerSessionId @ 0x140862104 (PnpGetCallerSessionId.c)
 *     PiAuCheckTokenMembership @ 0x140864688 (PiAuCheckTokenMembership.c)
 *     PiAuDoesClientHavePrivilege @ 0x140864838 (PiAuDoesClientHavePrivilege.c)
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
 *     WmipInitializeSecurity @ 0x140A188FC (WmipInitializeSecurity.c)
 * Callees:
 *     ObFastReferenceObject @ 0x14003AF90 (ObFastReferenceObject.c)
 *     ExAcquirePushLockSharedEx @ 0x14003EF30 (ExAcquirePushLockSharedEx.c)
 *     KeAbPostRelease @ 0x14003F880 (KeAbPostRelease.c)
 *     KeLeaveCriticalRegionThread @ 0x14003FC70 (KeLeaveCriticalRegionThread.c)
 *     ObFastReferenceObjectLocked @ 0x14007F850 (ObFastReferenceObjectLocked.c)
 *     ExfReleasePushLockShared @ 0x14009E3E0 (ExfReleasePushLockShared.c)
 *     PsReferenceImpersonationTokenEx @ 0x1405DDCC0 (PsReferenceImpersonationTokenEx.c)
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
