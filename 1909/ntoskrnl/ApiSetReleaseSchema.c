/*
 * XREFs of ApiSetReleaseSchema @ 0x140342EA0
 * Callers:
 *     PspSiloLoadApiSets @ 0x1408C5914 (PspSiloLoadApiSets.c)
 *     ApiSetLoadSchemaWithExtensions @ 0x14091ADA8 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     ExFreeHeapPool @ 0x140064E50 (ExFreeHeapPool.c)
 */

char __fastcall ApiSetReleaseSchema(ULONG_PTR a1)
{
  ExFreeHeapPool(a1);
  return 1;
}
