/*
 * XREFs of CcDeallocateBcb @ 0x1400793C8
 * Callers:
 *     CcUnpinFileDataEx @ 0x140078D40 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x1401286C0 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14016A228 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140079400 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
