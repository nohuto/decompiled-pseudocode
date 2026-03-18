/*
 * XREFs of MiRevertQuasiPte @ 0x14013DC28
 * Callers:
 *     MiUpdateUserMappings @ 0x14059C898 (MiUpdateUserMappings.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall MiRevertQuasiPte(__int64 a1)
{
  return a1 & 0xFFFFFFFFFFFFFBFEuLL | 1;
}
