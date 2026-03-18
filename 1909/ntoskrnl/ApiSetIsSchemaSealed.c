/*
 * XREFs of ApiSetIsSchemaSealed @ 0x1403434E8
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x14091ADA8 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) & 1;
}
