/*
 * XREFs of CcDeallocateBcb @ 0x140020F14
 * Callers:
 *     CcUnpinFileDataEx @ 0x140020910 (CcUnpinFileDataEx.c)
 *     CcDeleteMbcb @ 0x140125A58 (CcDeleteMbcb.c)
 *     CcDeleteBcbs @ 0x14016059C (CcDeleteBcbs.c)
 * Callees:
 *     ExDeleteResourceLite @ 0x140020F50 (ExDeleteResourceLite.c)
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeallocateBcb(char *P)
{
  if ( *(_WORD *)P == 765 )
    ExDeleteResourceLite((PERESOURCE)(P + 72));
  ExFreePoolWithTag(P, 0);
}
