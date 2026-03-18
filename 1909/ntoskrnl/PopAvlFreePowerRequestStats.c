/*
 * XREFs of PopAvlFreePowerRequestStats @ 0x1406F12B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopAvlFreePowerRequestStats(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0x54515750u);
}
