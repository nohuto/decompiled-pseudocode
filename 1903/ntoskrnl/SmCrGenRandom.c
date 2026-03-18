/*
 * XREFs of SmCrGenRandom @ 0x1403270F8
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1408EA048 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1408EB6F8 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x14031C75C (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
