/*
 * XREFs of RtlIsCurrentThread @ 0x180002710
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x18009E1A0 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)NtCompareObjects(-2LL, a1) >= 0;
}
