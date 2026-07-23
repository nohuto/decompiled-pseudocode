/*
 * XREFs of CMFFreeFn @ 0x14073D160
 * Callers:
 *     XpressDecodeClose @ 0x14034DCFC (XpressDecodeClose.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CMFFreeFn(_RTL_AVL_TABLE *a1, PVOID a2)
{
  ExFreePoolWithTag(a2, 0);
}
