/*
 * XREFs of SddlpFree @ 0x1408A6C7C
 * Callers:
 *     SeConvertStringSidToSid @ 0x1401893C0 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
