/*
 * XREFs of itrp_Super45Round @ 0x1C02D0460
 * Callers:
 *     InvokeRoundValue @ 0x1C02C5448 (InvokeRoundValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall itrp_Super45Round(int a1, __int16 a2)
{
  __int64 v3; // rbx
  __int16 v4; // cx
  unsigned int v5; // r8d
  __int64 v6; // kr00_8
  unsigned int v7; // ecx
  __int64 v8; // kr08_8

  v3 = *(__int16 *)(qword_1C0327180 + 140);
  v4 = *(_WORD *)(qword_1C0327180 + 146) - *(_WORD *)(qword_1C0327180 + 144);
  v5 = *(__int16 *)(qword_1C0327180 + 144);
  if ( a1 < 0 )
  {
    v8 = (__int16)(v4 + a2 - a1) << 14;
    v7 = -262144 * ((v3 * ((__int16)(v8 / *(__int16 *)(qword_1C0327180 + 140)) & 0xFFFFFFFFFFFFFFC0uLL)) >> 32)
       - (((((unsigned int)v3 * ((__int16)(v8 / *(__int16 *)(qword_1C0327180 + 140)) & 0xFFFFFFC0)) >> 13) + 1) >> 1)
       - v5;
  }
  else
  {
    v6 = (__int16)(a1 + v4 + a2) << 14;
    v7 = *(__int16 *)(qword_1C0327180 + 144)
       + (((((unsigned int)v3 * ((__int16)(v6 / *(__int16 *)(qword_1C0327180 + 140)) & 0xFFFFFFC0)) >> 13) + 1) >> 1)
       + ((v3 * ((__int16)(v6 / *(__int16 *)(qword_1C0327180 + 140)) & 0xFFFFFFFFFFFFFFC0uLL)) >> 32 << 18);
  }
  if ( ((a1 ^ v7) & 0x80000000) != 0 && a1 )
  {
    if ( a1 <= 0 )
      return -v5;
    return v5;
  }
  return v7;
}
