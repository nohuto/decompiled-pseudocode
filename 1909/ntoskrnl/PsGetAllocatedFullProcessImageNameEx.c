/*
 * XREFs of PsGetAllocatedFullProcessImageNameEx @ 0x14066BAC4
 * Callers:
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4D78 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepQueryNameString @ 0x140620310 (SepQueryNameString.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140623360 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14062340C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeLocateProcessImageName @ 0x14066BAB0 (SeLocateProcessImageName.c)
 *     SepAdtTokenRightAdjusted @ 0x1406786C0 (SepAdtTokenRightAdjusted.c)
 *     SepAuditAssignPrimaryToken @ 0x14074A9FC (SepAuditAssignPrimaryToken.c)
 *     CmpReportAuditVirtualizationEvent @ 0x14082E130 (CmpReportAuditVirtualizationEvent.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DA8F0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408DAEC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1408DB804 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1408DB984 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1408DBB50 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1408DBD94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC0D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC2E8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DCA48 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DD528 (SepAdtStagingEvent.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PsGetAllocatedFullProcessImageName @ 0x14066BAF8 (PsGetAllocatedFullProcessImageName.c)
 */

__int64 __fastcall PsGetAllocatedFullProcessImageNameEx(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = 3221226021LL;
  if ( *(_QWORD *)(a1 + 1856) && (_QWORD)xmmword_1404369C0 )
    return ((__int64 (*)(void))xmmword_1404369C0)();
  if ( *(_QWORD *)(a1 + 1128) )
    return PsGetAllocatedFullProcessImageName(a1, a2);
  return result;
}
