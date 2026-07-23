/*
 * XREFs of ApiSetReleaseSchema @ 0x140321FF0
 * Callers:
 *     PspSiloLoadApiSets @ 0x140888EB8 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x1408DE8A0 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x14034CC60 (ExFreePoolWithTag.c)
 */

char __fastcall ApiSetReleaseSchema(void *a1)
{
  ExFreePoolWithTag(a1, 0);
  return 1;
}
