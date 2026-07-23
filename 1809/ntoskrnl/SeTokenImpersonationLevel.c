/*
 * XREFs of SeTokenImpersonationLevel @ 0x1406FA890
 * Callers:
 *     CmpOpenHiveFile @ 0x1405B5330 (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeTokenImpersonationLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 196);
}
