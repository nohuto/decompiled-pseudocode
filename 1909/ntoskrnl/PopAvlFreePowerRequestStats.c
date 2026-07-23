/*
 * XREFs of PopAvlFreePowerRequestStats @ 0x1406F12B0
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall PopAvlFreePowerRequestStats(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x54515750u);
}
