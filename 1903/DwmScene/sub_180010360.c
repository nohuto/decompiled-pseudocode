/*
 * XREFs of sub_180010360 @ 0x180010360
 * Callers:
 *     <none>
 * Callees:
 *     sub_180018D10 @ 0x180018D10 (sub_180018D10.c)
 */

__int64 __fastcall sub_180010360(__int64 a1, float a2)
{
  float v3; // xmm6_4

  v3 = a2;
  if ( !(unsigned __int8)sub_180018D10(qword_180268E48) )
    v3 = a2 * 3.1415927;
  if ( (*(_DWORD *)(a1 + 48) & 0xFFFFFFFB) != 0 )
    *(float *)(*(_QWORD *)(a1 + 32) + 104LL) = v3;
  else
    *(float *)(a1 + 68) = v3;
  return 0LL;
}
