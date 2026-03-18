/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1405DE240
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B140 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C6208 (ObpInsertOrLocateNamedObject.c)
 *     IopAllocRealFileObject @ 0x1405D8820 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9B00 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D9D60 (ObInsertObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405F03D0 (CmpCreateKeyBody.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F5310 (ObpCaptureObjectCreateInformation.c)
 *     ObOpenObjectByNameEx @ 0x1405F5850 (ObOpenObjectByNameEx.c)
 *     ObpFreeObject @ 0x140608F60 (ObpFreeObject.c)
 *     NtSetSecurityObject @ 0x140621290 (NtSetSecurityObject.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140621AFC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140622060 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObDeleteCapturedInsertInfo @ 0x14063DD70 (ObDeleteCapturedInsertInfo.c)
 *     NtCreateWnfStateName @ 0x140658540 (NtCreateWnfStateName.c)
 *     AlpcpConnectPort @ 0x14065A080 (AlpcpConnectPort.c)
 *     ObReferenceObjectByNameEx @ 0x1406BA0F8 (ObReferenceObjectByNameEx.c)
 *     NtOpenObjectAuditAlarm @ 0x140714AA0 (NtOpenObjectAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D7AC (CmpCopySaclToVirtualKey.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseSecurityDescriptor(void *a1, char a2, char a3)
{
  if ( !a2 && a3 == 1 || a2 == 1 )
  {
    if ( a1 )
      ExFreePoolWithTag(a1, 0);
  }
}
