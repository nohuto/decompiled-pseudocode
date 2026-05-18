/*
 * XREFs of sub_18006AC60 @ 0x18006AC60
 * Callers:
 *     sub_1800ACDE0 @ 0x1800ACDE0 (sub_1800ACDE0.c)
 * Callees:
 *     <none>
 */

void __fastcall sub_18006AC60(__int64 a1, float a2, float a3, float a4, int a5, int a6, int a7)
{
  __int64 v7; // rcx

  v7 = *(_QWORD *)(a1 + 96) + 14536LL;
  *(_DWORD *)(v7 + 20) = a5;
  *(float *)(v7 + 8) = a2;
  *(_DWORD *)(v7 + 28) = a7;
  *(float *)(v7 + 12) = a3;
  *(float *)(v7 + 16) = a4;
  *(_DWORD *)(v7 + 24) = a6;
}
