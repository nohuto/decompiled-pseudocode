/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x1406671E4
 * Callers:
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BB82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BB8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtTokenRightAdjusted @ 0x14060A2D8 (SepAdtTokenRightAdjusted.c)
 *     SepQueryNameString @ 0x14065DBB4 (SepQueryNameString.c)
 *     SeLocateProcessImageName @ 0x1406671D0 (SeLocateProcessImageName.c)
 *     SepAuditAssignPrimaryToken @ 0x140748E34 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1407495D0 (SeAuditProcessCreation.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407F5500 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089CBC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14089D4EC (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14089D66C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14089D820 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14089DA54 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089DD84 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089DF9C (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089E6FC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14089F1F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14089F488 (SepAdtStagingEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140667218 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 1808) && (_QWORD)xmmword_14040E320 )
    return ((__int64 (*)(void))xmmword_14040E320)();
  if ( *(_QWORD *)(a1 + 1128) )
    return PsGetAllocatedFullProcessImageName(a1, a2);
  return result;
}
