/*
 * XREFs of ObpIsKernelHandle @ 0x140088EC8
 * Callers:
 *     ObIsKernelHandle @ 0x1402D2EA0 (ObIsKernelHandle.c)
 *     ObWaitForMultipleObjects @ 0x14058B3E0 (ObWaitForMultipleObjects.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1405BC8D8 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     NtClose @ 0x1405E99E0 (NtClose.c)
 *     ObCloseHandle @ 0x1405F6700 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x1405F673C (ObpCloseHandle.c)
 *     ObSetHandleAttributes @ 0x14068EA90 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140698B40 (ObQueryObjectAuditingByHandle.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14089D854 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x14089DFCC (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x14089EC94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14089EFC4 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14089F1DC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14089F93C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1408A0430 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408A06C8 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
