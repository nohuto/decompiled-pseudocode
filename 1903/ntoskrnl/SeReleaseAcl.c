/*
 * XREFs of SeReleaseAcl @ 0x14061C8F0
 * Callers:
 *     NtCreateTokenEx @ 0x14061B850 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140673100 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
