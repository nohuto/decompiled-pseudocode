/*
 * XREFs of SeTokenImpersonationLevel @ 0x140715D10
 * Callers:
 *     CmpOpenHiveFile @ 0x140639E3C (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeTokenImpersonationLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 196);
}
