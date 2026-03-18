/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14012B4B0
 * Callers:
 *     CmpCheckExeOwnerForPca @ 0x1405B0554 (CmpCheckExeOwnerForPca.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4D78 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     CmpDoParseKey @ 0x1405FBD70 (CmpDoParseKey.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140623360 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14062340C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckForCriticalAceRemoval @ 0x140640DA0 (SeCheckForCriticalAceRemoval.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x14064D420 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmQueryKey @ 0x140667F60 (CmQueryKey.c)
 *     SepAdtTokenRightAdjusted @ 0x1406786C0 (SepAdtTokenRightAdjusted.c)
 *     CmpVEExecuteParseLogic @ 0x1406A3F90 (CmpVEExecuteParseLogic.c)
 *     CmpIsSystemEntity @ 0x1406A4374 (CmpIsSystemEntity.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5000 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140727220 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A9FC (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x140826068 (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082BF10 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E130 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DA8F0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408DAEC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x1408DB984 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1408DBB50 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1408DBD94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC0D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC2E8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DCA48 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DD528 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
