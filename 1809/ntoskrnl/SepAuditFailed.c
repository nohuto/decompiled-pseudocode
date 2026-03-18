/*
 * XREFs of SepAuditFailed @ 0x1408A47A0
 * Callers:
 *     SepRmCallLsa @ 0x14012FB20 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x14012FD44 (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x14017D0CC (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x140300888 (SepAuditFailedRaisedIrql.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140596850 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1405BA094 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x1405BB82C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BB8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1405BB990 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x1405BBA50 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x1405BBAC0 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BC394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtCloseObjectAuditAlarm @ 0x1406ADAA0 (NtCloseObjectAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406C47E0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D93B0 (NtOpenObjectAuditAlarm.c)
 *     NtDeleteObjectAuditAlarm @ 0x140706FA0 (NtDeleteObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14071B430 (NtPrivilegeObjectAuditAlarm.c)
 *     SepRmCommandServerThread @ 0x1407402C0 (SepRmCommandServerThread.c)
 *     SepAuditAssignPrimaryToken @ 0x140748E34 (SepAuditAssignPrimaryToken.c)
 *     SeAuditProcessCreation @ 0x1407495D0 (SeAuditProcessCreation.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14089CBC0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14089D4EC (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14089D66C (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x14089DA54 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089DD84 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089DF9C (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14089E4CC (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089E6FC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14089F1F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14089F488 (SepAdtStagingEvent.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408A0AA0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400B9A70 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401B8D70 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x1401B9DD0 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x1401BBBA0 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x14089E2D4 (SepAdtLogAuditFailureEvent.c)
 */

void __fastcall SepAuditFailed(signed int a1)
{
  ULONG_PTR v1; // rbx
  NTSTATUS v2; // eax
  NTSTATUS v3; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  v1 = a1;
  if ( SepCrashOnAuditFail )
  {
    if ( SepAdtRegNotifyHandle )
    {
      SepAdtLogAuditFailureEvent(a1, 1);
      RtlInitUnicodeString(&DestinationString, L"CrashOnAuditFail");
      LODWORD(BugCheckParameter4) = 2;
      do
      {
        do
          v2 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v2 == -1073741670 );
      }
      while ( v2 == -1073741801 );
      if ( v2 >= 0 )
      {
        do
        {
          do
            v3 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v3 == -1073741670 );
        }
        while ( v3 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v1, 0LL, 0LL, 0LL);
    }
    SepCrashOnAuditFail = 0;
  }
}
