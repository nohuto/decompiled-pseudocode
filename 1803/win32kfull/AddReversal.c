/*
 * XREFs of AddReversal @ 0x1C02C2804
 * Callers:
 *     fsc_AddXReversal @ 0x1C02C3150 (fsc_AddXReversal.c)
 *     fsc_AddYReversal @ 0x1C02C3194 (fsc_AddYReversal.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AddReversal(_QWORD *a1, __int64 a2, int a3, __int16 a4)
{
  int v4; // r10d
  __int64 result; // rax

  v4 = ((a4 >> 1) + a3 + 32) >> 6;
  while ( (__int16)v4 > *(__int16 *)*a1 )
    a1 = (_QWORD *)(*a1 + 8LL);
  *(_WORD *)a2 = v4;
  *(_WORD *)(a2 + 2) = -a4;
  result = *a1;
  *(_QWORD *)(a2 + 8) = *a1;
  *a1 = a2;
  return result;
}
