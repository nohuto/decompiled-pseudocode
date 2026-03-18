/*
 * XREFs of PsGetCurrentThreadProcess @ 0x140006800
 * Callers:
 *     CmpCheckExeOwnerForPca @ 0x14058093C (CmpCheckExeOwnerForPca.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140596210 (CmpCheckOpenAccessOnKeyBody.c)
 *     SeCheckForCriticalAceRemoval @ 0x1405B8B50 (SeCheckForCriticalAceRemoval.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BB82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BB8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     CmQueryKey @ 0x1405D6900 (CmQueryKey.c)
 *     SepAdtTokenRightAdjusted @ 0x14060A2D8 (SepAdtTokenRightAdjusted.c)
 *     CmpVEExecuteParseLogic @ 0x140640F80 (CmpVEExecuteParseLogic.c)
 *     CmpDoParseKey @ 0x140641CC0 (CmpDoParseKey.c)
 *     CmpIsSystemEntity @ 0x1406B1FF4 (CmpIsSystemEntity.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406C9FD0 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x1406DDE30 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x140748E34 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x1407EBE10 (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x1407F28D8 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F5500 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089CBC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x14089D66C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089D820 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089DA54 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089DD84 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089DF9C (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089E6FC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14089F1F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14089F488 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
