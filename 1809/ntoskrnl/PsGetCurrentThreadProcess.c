/*
 * XREFs of PsGetCurrentThreadProcess @ 0x140006800
 * Callers:
 *     CmpCheckExeOwnerForPca @ 0x14058193C (CmpCheckExeOwnerForPca.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140597210 (CmpCheckOpenAccessOnKeyBody.c)
 *     SeCheckForCriticalAceRemoval @ 0x1405B9B50 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BC82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmQueryKey @ 0x1405D7900 (CmQueryKey.c)
 *     SepAdtTokenRightAdjusted @ 0x14060B2D8 (SepAdtTokenRightAdjusted.c)
 *     CmpVEExecuteParseLogic @ 0x140641F80 (CmpVEExecuteParseLogic.c)
 *     CmpDoParseKey @ 0x140642CC0 (CmpDoParseKey.c)
 *     CmpIsSystemEntity @ 0x1406B3274 (CmpIsSystemEntity.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406CB250 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1406DF0B0 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A004 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x1407ECFF0 (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407F3AB8 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F66E0 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089D854 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089DE00 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x14089E8AC (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089EA60 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089EC94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089EFC4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089F1DC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408A0430 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408A06C8 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
