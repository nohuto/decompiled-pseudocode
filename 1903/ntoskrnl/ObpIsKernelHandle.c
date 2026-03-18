/*
 * XREFs of ObpIsKernelHandle @ 0x1400828B0
 * Callers:
 *     ObIsKernelHandle @ 0x140144540 (ObIsKernelHandle.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4998 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     NtClose @ 0x1405FAB20 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060AF40 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x14060EFC0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x14060F0D0 (ObSetHandleAttributes.c)
 *     ObCloseHandle @ 0x14060F280 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x14060F2BC (ObpCloseHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1406218EC (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DAFF0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1408DB788 (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x1408DC494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC7D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC9E8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DD148 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DDC28 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
