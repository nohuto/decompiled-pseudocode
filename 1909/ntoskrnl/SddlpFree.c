/*
 * XREFs of SddlpFree @ 0x1405B3328
 * Callers:
 *     SeConvertStringSidToSid @ 0x140193CC0 (SeConvertStringSidToSid.c)
 *     LocalConvertAclToString @ 0x1405B2CA8 (LocalConvertAclToString.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SddlpFree(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0);
}
