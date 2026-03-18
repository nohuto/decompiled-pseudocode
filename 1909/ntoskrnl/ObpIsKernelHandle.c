/*
 * XREFs of ObpIsKernelHandle @ 0x140082CB0
 * Callers:
 *     ObIsKernelHandle @ 0x140144A80 (ObIsKernelHandle.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1405B4D78 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     NtClose @ 0x1405FBB70 (NtClose.c)
 *     ObWaitForMultipleObjects @ 0x14060CA50 (ObWaitForMultipleObjects.c)
 *     ObQueryObjectAuditingByHandle @ 0x140610AD0 (ObQueryObjectAuditingByHandle.c)
 *     ObSetHandleAttributes @ 0x140610BE0 (ObSetHandleAttributes.c)
 *     ObCloseHandle @ 0x140610D90 (ObCloseHandle.c)
 *     ObpCloseHandle @ 0x140610DCC (ObpCloseHandle.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x14062340C (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1408DA8F0 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditHandleDuplication @ 0x1408DB088 (SeAuditHandleDuplication.c)
 *     SeOperationAuditAlarm @ 0x1408DBD94 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1408DC0D0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1408DC2E8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1408DCA48 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1408DD528 (SepAdtStagingEvent.c)
 * Callees:
 *     <none>
 */

bool __fastcall ObpIsKernelHandle(unsigned __int64 a1, char a2)
{
  return !a2 && (a1 & 0xFFFFFFFF80000000uLL) == 0xFFFFFFFF80000000uLL && a1 <= 0xFFFFFFFFFFFFFFFDuLL;
}
