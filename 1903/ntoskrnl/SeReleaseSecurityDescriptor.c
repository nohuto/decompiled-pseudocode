/*
 * XREFs of SeReleaseSecurityDescriptor @ 0x1405DDAA0
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     ObpInsertOrLocateNamedObject @ 0x1405C5D08 (ObpInsertOrLocateNamedObject.c)
 *     IopAllocRealFileObject @ 0x1405D8060 (IopAllocRealFileObject.c)
 *     ObCreateObjectEx @ 0x1405D9340 (ObCreateObjectEx.c)
 *     ObInsertObjectEx @ 0x1405D95A0 (ObInsertObjectEx.c)
 *     CmpCreateKeyBody @ 0x1405EFC00 (CmpCreateKeyBody.c)
 *     ObpCaptureObjectCreateInformation @ 0x1405F4390 (ObpCaptureObjectCreateInformation.c)
 *     ObOpenObjectByNameEx @ 0x1405F48D0 (ObOpenObjectByNameEx.c)
 *     ObpFreeObject @ 0x140607450 (ObpFreeObject.c)
 *     NtSetSecurityObject @ 0x14061F770 (NtSetSecurityObject.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14061FFDC (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     ObDeleteCapturedInsertInfo @ 0x14063ACE0 (ObDeleteCapturedInsertInfo.c)
 *     NtCreateWnfStateName @ 0x1406449F0 (NtCreateWnfStateName.c)
 *     AlpcpConnectPort @ 0x140646324 (AlpcpConnectPort.c)
 *     ObReferenceObjectByNameEx @ 0x14069B140 (ObReferenceObjectByNameEx.c)
 *     NtOpenObjectAuditAlarm @ 0x140712CC0 (NtOpenObjectAuditAlarm.c)
 *     CmpCopySaclToVirtualKey @ 0x14082D930 (CmpCopySaclToVirtualKey.c)
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
