/*
 * XREFs of SddlpFree @ 0x1408A7EBC
 * Callers:
 *     SeConvertStringSidToSid @ 0x140189520 (SeConvertStringSidToSid.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
