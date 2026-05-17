/*
 * XREFs of RtlIsCurrentThread @ 0x1800FB3B0
 * Callers:
 *     <none>
 * Callees:
 *     NtCompareObjects @ 0x1800A15F0 (NtCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)NtCompareObjects() >= 0;
}
