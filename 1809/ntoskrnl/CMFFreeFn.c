/*
 * XREFs of CMFFreeFn @ 0x140703A50
 * Callers:
 *     XpressDecodeClose @ 0x14032CBE0 (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
