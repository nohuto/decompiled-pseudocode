/*
 * XREFs of SeReleaseAcl @ 0x14061E400
 * Callers:
 *     NtCreateTokenEx @ 0x14061D360 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x140678810 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14036E0A0 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
