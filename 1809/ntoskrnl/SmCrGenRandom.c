/*
 * XREFs of SmCrGenRandom @ 0x140309618
 * Callers:
 *     SmKmKeyGenNewKey @ 0x1408AD0F0 (SmKmKeyGenNewKey.c)
 *     SmCrEncStart @ 0x1408AE6F8 (SmCrEncStart.c)
 * Callees:
 *     BCryptGenRandom @ 0x1402FE584 (BCryptGenRandom.c)
 */

NTSTATUS __fastcall SmCrGenRandom(PUCHAR pbBuffer, ULONG cbBuffer, __int64 a3, ULONG a4)
{
  return BCryptGenRandom(pbBuffer, pbBuffer, cbBuffer, a4);
}
