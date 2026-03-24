/*
 * XREFs of ApiSetIsSchemaSealed @ 0x14032210C
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1408DD5E0 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) & 1;
}
