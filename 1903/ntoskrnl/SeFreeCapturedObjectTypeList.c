/*
 * XREFs of SeFreeCapturedObjectTypeList @ 0x1402D5C20
 * Callers:
 *     SeAccessCheckByTypeWithAdminlessChecks @ 0x14000B0B0 (SeAccessCheckByTypeWithAdminlessChecks.c)
 *     MiReserveUserMemory @ 0x140607B60 (MiReserveUserMemory.c)
 *     SepAccessCheckAndAuditAlarmWithAdminlessChecks @ 0x140620540 (SepAccessCheckAndAuditAlarmWithAdminlessChecks.c)
 *     MiRemoveUserPhysicalPagesView @ 0x140896AE4 (MiRemoveUserPhysicalPagesView.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SeFreeCapturedObjectTypeList(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
