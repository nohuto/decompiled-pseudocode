/*
 * XREFs of SeReleaseAcl @ 0x1405BD590
 * Callers:
 *     NtCreateTokenEx @ 0x1405BC550 (NtCreateTokenEx.c)
 *     NtSetInformationToken @ 0x1405BDAA0 (NtSetInformationToken.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

void __fastcall SeReleaseAcl(void *a1, unsigned __int8 a2)
{
  if ( a2 <= 1u )
    ExFreePoolWithTag(a1, 0);
}
