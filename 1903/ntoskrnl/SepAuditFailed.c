/*
 * XREFs of SepAuditFailed @ 0x1408E2ED0
 * Callers:
 *     SepRmCallLsa @ 0x140132630 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x14013286C (SepRmDispatchDataToLsa.c)
 *     SepInitProcessAuditSd @ 0x14018AED0 (SepInitProcessAuditSd.c)
 *     SepAuditFailedRaisedIrql @ 0x14031EBFC (SepAuditFailedRaisedIrql.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4998 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x14061FB18 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061FFDC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1406200C0 (NtPrivilegedServiceAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140621840 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406218EC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtAuditPrivilegeUseWithContext @ 0x1406219B0 (SepAdtAuditPrivilegeUseWithContext.c)
 *     SepAdtAuditThisEventWithContext @ 0x140621A90 (SepAdtAuditThisEventWithContext.c)
 *     SepAdtAuditThisEventByCategoryWithContext @ 0x140621B20 (SepAdtAuditThisEventByCategoryWithContext.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140687000 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     NtCloseObjectAuditAlarm @ 0x1406CF470 (NtCloseObjectAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140712CC0 (NtOpenObjectAuditAlarm.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x1407435A0 (NtPrivilegeObjectAuditAlarm.c)
 *     SeAuditProcessCreation @ 0x1407481D0 (SeAuditProcessCreation.c)
 *     SepRmCommandServerThread @ 0x1407639D0 (SepRmCommandServerThread.c)
 *     SepAuditAssignPrimaryToken @ 0x140780614 (SepAuditAssignPrimaryToken.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DAFF0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x1408DB5C0 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x1408DBF04 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1408DC084 (SeAuditSystemTimeChange.c)
 *     SeOperationAuditAlarm @ 0x1408DC494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC7D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC9E8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1408DCF1C (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DD148 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DDC28 (SepAdtStagingEvent.c)
 *     NtDeleteObjectAuditAlarm @ 0x1408DED00 (NtDeleteObjectAuditAlarm.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1408DF360 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1400438D0 (RtlInitUnicodeString.c)
 *     ZwSetValueKey @ 0x1401C0CD0 (ZwSetValueKey.c)
 *     ZwFlushKey @ 0x1401C1D50 (ZwFlushKey.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     SepAdtLogAuditFailureEvent @ 0x1408DCD24 (SepAdtLogAuditFailureEvent.c)
 */

__int64 __fastcall SepAuditFailed(signed int a1)
{
  __int64 result; // rax
  ULONG_PTR v2; // rbx
  NTSTATUS v3; // eax
  NTSTATUS v4; // eax
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+58h] [rbp+10h] BYREF

  result = 0LL;
  v2 = a1;
  *(_QWORD *)&DestinationString.Length = 0LL;
  DestinationString.Buffer = 0LL;
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
          v3 = ZwSetValueKey(SepAdtRegNotifyHandle, &DestinationString, 0, 4u, &BugCheckParameter4, 4u);
        while ( v3 == -1073741670 );
      }
      while ( v3 == -1073741801 );
      if ( v3 >= 0 )
      {
        do
        {
          do
            v4 = ZwFlushKey(SepAdtRegNotifyHandle);
          while ( v4 == -1073741670 );
        }
        while ( v4 == -1073741801 );
      }
      KeBugCheckEx(0xC0000244, v2, 0LL, 0LL, 0LL);
    }
    SepCrashOnAuditFail = 0;
  }
  return result;
}
