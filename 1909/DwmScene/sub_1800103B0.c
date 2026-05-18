/*
 * XREFs of sub_1800103B0 @ 0x1800103B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018D80 @ 0x180018D80 (sub_180018D80.c)
 */

__int64 __fastcall sub_1800103B0(__int64 a1, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !(unsigned __int8)sub_180018D80(qword_180269E48) )
    v3 = a2 * 3.1415927;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
    *(float *)(*(_QWORD *)(a1 + 32) + 104LL) = v3;
  else
    *(float *)(a1 + 68) = v3;
  return 0LL;
}
