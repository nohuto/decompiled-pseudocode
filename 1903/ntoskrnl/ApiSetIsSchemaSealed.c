/*
 * XREFs of ApiSetIsSchemaSealed @ 0x140343A88
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x14091B348 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ApiSetIsSchemaSealed(__int64 a1)
{
  return *(_DWORD *)(a1 + 8) & 1;
}
