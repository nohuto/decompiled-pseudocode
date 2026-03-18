/*
 * XREFs of ApiSetIsSchemaSealed @ 0x14032200C
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1408DD600 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) & 1;
}
