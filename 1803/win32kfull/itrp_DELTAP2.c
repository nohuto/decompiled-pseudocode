/*
 * XREFs of itrp_DELTAP2 @ 0x1C02C6850
 * Callers:
 *     <none>
 * Callees:
 *     itrp_DeltaEngine @ 0x1C02C6A7C (itrp_DeltaEngine.c)
 */

__int64 __fastcall itrp_DELTAP2(__int64 a1)
{
  return itrp_DeltaEngine(
           a1,
           (unsigned int)dword_1C03271AC,
           (unsigned __int16)(*(_WORD *)(qword_1C0327180 + 148) + 16),
           *(unsigned __int16 *)(qword_1C0327180 + 150));
}
