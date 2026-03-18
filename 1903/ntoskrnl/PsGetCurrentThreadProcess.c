/*
 * XREFs of PsGetCurrentThreadProcess @ 0x14012AA90
 * Callers:
 *     CmpCheckExeOwnerForPca @ 0x1405B0554 (CmpCheckExeOwnerForPca.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4998 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     CmpDoParseKey @ 0x1405FAD20 (CmpDoParseKey.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140621840 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406218EC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeCheckForCriticalAceRemoval @ 0x14063DA60 (SeCheckForCriticalAceRemoval.c)
 *     CmQueryKey @ 0x140654E60 (CmQueryKey.c)
 *     SepAdtTokenRightAdjusted @ 0x140672FB0 (SepAdtTokenRightAdjusted.c)
 *     CmpCheckOpenAccessOnKeyBody @ 0x140687250 (CmpCheckOpenAccessOnKeyBody.c)
 *     CmpVEExecuteParseLogic @ 0x1406AD5E0 (CmpVEExecuteParseLogic.c)
 *     CmpIsSystemEntity @ 0x1406AD9C4 (CmpIsSystemEntity.c)
 *     CmpCheckKeySecurityDescriptorAccess @ 0x1406D5920 (CmpCheckKeySecurityDescriptorAccess.c)
 *     PopDiagTracePolicyInitiatePowerActionApiCall @ 0x140725380 (PopDiagTracePolicyInitiatePowerActionApiCall.c)
 *     SepAuditAssignPrimaryToken @ 0x140780614 (SepAuditAssignPrimaryToken.c)
 *     CmpPublishEventForPcaResolver @ 0x140826968 (CmpPublishEventForPcaResolver.c)
 *     CmpDoAccessCheckOnKCB @ 0x14082C810 (CmpDoAccessCheckOnKCB.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E2B4 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DAFF0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408DB5C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditSystemTimeChange @ 0x1408DC084 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1408DC250 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1408DC494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC7D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC9E8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DD148 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DDC28 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

_KPROCESS *PsGetCurrentThreadProcess()
{
  return KeGetCurrentThread()->Process;
}
