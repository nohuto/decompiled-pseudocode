/*
 * XREFs of CMFFreeFn @ 0x1407027B0
 * Callers:
 *     XpressDecodeClose @ 0x14032C9F0 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
