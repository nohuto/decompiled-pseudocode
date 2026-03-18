/*
 * XREFs of SeTokenImpersonationLevel @ 0x140713F30
 * Callers:
 *     CmpOpenHiveFile @ 0x140636BDC (CmpOpenHiveFile.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SeTokenImpersonationLevel(__int64 a1)
{
  return *(unsigned int *)(a1 + 196);
}
