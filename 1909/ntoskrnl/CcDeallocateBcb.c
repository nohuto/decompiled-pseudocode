/*
 * XREFs of CcDeallocateBcb @ 0x140079788
 * Callers:
 *     CcUnpinFileDataEx @ 0x140079100 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x1401290E0 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14016A918 (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x1400797C0 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
