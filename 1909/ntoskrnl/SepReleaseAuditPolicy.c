/*
 * XREFs of SepReleaseAuditPolicy @ 0x1408DE304
 * Callers:
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SepReleaseAuditPolicy(void *a1, unsigned __int8 a2)
{
  if ( a1 )
  {
    if ( a2 <= 1u )
      ExFreePoolWithTag(a1, 0);
  }
}
