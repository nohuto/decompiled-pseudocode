/*
 * XREFs of CalcAvgXPhaseShift @ 0x1C02C4DD0
 * Callers:
 *     PhaseShift @ 0x1C02C56C8 (PhaseShift.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcAvgXPhaseShift(__int64 a1, int a2, int a3, int a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // r10d
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rdx
  int v11; // ecx
  int v12; // r8d
  int v13; // r9d
  unsigned int v14; // r11d
  int v15; // edx

  v6 = a5;
  v7 = a3;
  v8 = a2;
  if ( a5 == a6 )
    return a5;
  v10 = *(_QWORD *)(a1 + 16);
  v11 = *(_DWORD *)(v10 + 4LL * a4);
  v12 = v11;
  v13 = *(_DWORD *)(v10 + 4 * v8);
  v14 = a6;
  v15 = *(_DWORD *)(v10 + 4 * v7);
  if ( v13 >= v11 )
  {
    v12 = v13;
    v14 = a5;
    v13 = v11;
    v6 = a6;
  }
  if ( v13 == v12 )
    return (unsigned int)((int)(v14 + v6) / 2);
  else
    return (unsigned int)((int)(v6 * (v12 - v15) + v14 * (v15 - v13)) / (v12 - v13));
}
