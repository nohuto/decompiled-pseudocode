/*
 * XREFs of ApiSetReleaseSchema @ 0x140343440
 * Callers:
 *     PspSiloLoadApiSets @ 0x1408C6034 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14091B348 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064DB0 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1)
{
  ExFreeHeapPool(a1);
  return 1;
}
