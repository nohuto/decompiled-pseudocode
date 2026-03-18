/*
 * XREFs of ApiSetReleaseSchema @ 0x140321D00
 * Callers:
 *     PspSiloLoadApiSets @ 0x140887C78 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x1408DD600 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034BC60 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
