/*
 * XREFs of ObpIsKernelHandle @ 0x140088ED8
 * Callers:
 *     ObIsKernelHandle @ 0x1402D2BB0 (ObIsKernelHandle.c)
 *     ObWaitForMultipleObjects @ 0x14058A3E0 (ObWaitForMultipleObjects.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BB8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     NtClose @ 0x1405E89E0 (NtClose.c)
 *     ObCloseHandle @ 0x1405F5700 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x1405F573C (ObpCloseHandle.c)
 *     ObSetHandleAttributes @ 0x14068D8F0 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x1406979A0 (ObQueryObjectAuditingByHandle.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089C614 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14089CD8C (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14089DA54 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089DD84 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089DF9C (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089E6FC (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14089F1F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14089F488 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
