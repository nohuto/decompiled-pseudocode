/*
 * XREFs of SmCrGenRandom @ 0x140326B48
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1408E9950 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1408EB000 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x14031C1AC (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
