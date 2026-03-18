/*
 * XREFs of MiMakeQuasiPte @ 0x14013D6FC
 * Callers:
 *     MiUpdateUserMappings @ 0x14059D018 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiMakeQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
}
