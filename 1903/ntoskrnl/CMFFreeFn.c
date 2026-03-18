/*
 * XREFs of CMFFreeFn @ 0x14073B260
 * Callers:
 *     XpressDecodeClose @ 0x14034E29C (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(struct _RTL_AVL_TABLE *Table, PVOID Buffer)
{
  ExFreePoolWithTag(Buffer, 0);
}
