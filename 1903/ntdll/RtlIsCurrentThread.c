/*
 * XREFs of RtlIsCurrentThread @ 0x180002710
 * Callers:
 *     <none>
 * Callees:
 *     ZwCompareObjects @ 0x18009D9F0 (ZwCompareObjects.c)
 */

bool __fastcall RtlIsCurrentThread(__int64 a1)
{
  return a1 == -2 || (int)ZwCompareObjects(-2LL, a1) >= 0;
}
