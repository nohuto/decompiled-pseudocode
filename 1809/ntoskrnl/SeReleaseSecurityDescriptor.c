/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x140631850
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A9470 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ObDeleteCapturedInsertInfo @ 0x1405B7BB0 (ObDeleteCapturedInsertInfo.c)
 *     NtSetSecurityObject @ 0x1405B9CF0 (NtSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BA530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BC394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C85A8 (ObpInsertOrLocateNamedObject.c)
 *     ObCreateObjectEx @ 0x1405E05E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E0970 (CmpCreateKeyBody.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405E2910 (ObpCaptureObjectCreateInformation.c)
 *     ObOpenObjectByNameEx @ 0x1405E2E30 (ObOpenObjectByNameEx.c)
 *     NtCreateWnfStateName @ 0x14060DD20 (NtCreateWnfStateName.c)
 *     ObReferenceObjectByNameEx @ 0x14061145C (ObReferenceObjectByNameEx.c)
 *     AlpcpConnectPort @ 0x1406144A4 (AlpcpConnectPort.c)
 *     ObInsertObjectEx @ 0x14062D080 (ObInsertObjectEx.c)
 *     IopAllocRealFileObject @ 0x14063BB00 (IopAllocRealFileObject.c)
 *     ObpFreeObject @ 0x140645F40 (ObpFreeObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1406D9390 (NtOpenObjectAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F4B50 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
