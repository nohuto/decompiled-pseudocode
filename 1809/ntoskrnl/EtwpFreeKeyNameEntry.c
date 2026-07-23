/*
 * XREFs of EtwpFreeKeyNameEntry @ 0x14018C270
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpFreeKeyNameEntry(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0x74777445u);
}
