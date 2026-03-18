/*
 * XREFs of ?HwndLookupFreeTableData@@YAXPEAU_RTL_GENERIC_TABLE@@PEAX@Z @ 0x1C0111160
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall HwndLookupFreeTableData(struct _RTL_GENERIC_TABLE *Table, PVOID Buffer)
{
  Win32FreePool(Buffer);
}
