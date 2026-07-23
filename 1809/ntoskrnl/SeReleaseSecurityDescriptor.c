/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x140632870
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x1400A93B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ObDeleteCapturedInsertInfo @ 0x1405B8BB0 (ObDeleteCapturedInsertInfo.c)
 *     NtSetSecurityObject @ 0x1405BACF0 (NtSetSecurityObject.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x1405BB530 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405BD394 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C95A8 (ObpInsertOrLocateNamedObject.c)
 *     ObCreateObjectEx @ 0x1405E15E0 (ObCreateObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405E1970 (CmpCreateKeyBody.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405E3910 (ObpCaptureObjectCreateInformation.c)
 *     ObOpenObjectByNameEx @ 0x1405E3E30 (ObOpenObjectByNameEx.c)
 *     NtCreateWnfStateName @ 0x14060ED20 (NtCreateWnfStateName.c)
 *     ObReferenceObjectByNameEx @ 0x14061245C (ObReferenceObjectByNameEx.c)
 *     AlpcpConnectPort @ 0x1406154A4 (AlpcpConnectPort.c)
 *     ObInsertObjectEx @ 0x14062E0A0 (ObInsertObjectEx.c)
 *     IopAllocRealFileObject @ 0x14063CB20 (IopAllocRealFileObject.c)
 *     ObpFreeObject @ 0x140646F60 (ObpFreeObject.c)
 *     NtOpenObjectAuditAlarm @ 0x1406DA630 (NtOpenObjectAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x1407F5D50 (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
