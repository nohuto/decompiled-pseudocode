/*
 * XREFs of itrp_DELTAC1 @ 0x1C02C6750
 * Callers:
 *     <none>
 * Callees:
 *     itrp_DeltaEngine @ 0x1C02C6A7C (itrp_DeltaEngine.c)
 */

__int64 __fastcall itrp_DELTAC1(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C03271C4,
           *(unsigned __int16 *)(qword_1C0327180 + 148),
           *(unsigned __int16 *)(qword_1C0327180 + 150));
}
