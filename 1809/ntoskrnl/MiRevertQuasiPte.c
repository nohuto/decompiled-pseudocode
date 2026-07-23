/*
 * XREFs of MiRevertQuasiPte @ 0x14013BC24
 * Callers:
 *     MiUpdateUserMappings @ 0x14056F028 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
