/*
 * XREFs of ApiSetIsSchemaSealed @ 0x1403222FC
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1408DE8A0 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) & 1;
}
