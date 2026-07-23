/*
 * XREFs of MiMakeQuasiPte @ 0x14013BC38
 * Callers:
 *     MiUpdateUserMappings @ 0x14056F028 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
