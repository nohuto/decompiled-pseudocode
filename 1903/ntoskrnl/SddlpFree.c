/*
 * XREFs of SddlpFree @ 0x1405B2F4C
 * Callers:
 *     SeConvertStringSidToSid @ 0x1401934E0 (SeConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x1405B28CC (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
