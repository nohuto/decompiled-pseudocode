/*
 * XREFs of scl_CalcDevHorMetrics @ 0x1C02B40A8
 * Callers:
 *     fs__Contour @ 0x1C02B207C (fs__Contour.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_CalcDevHorMetrics(__int64 a1, int *a2, int *a3, _DWORD *a4)
{
  __int64 v5; // r10
  __int64 v6; // rax
  int v7; // edi
  unsigned int v8; // ebx
  int v9; // r11d
  int *v10; // r10
  __int64 result; // rax
  int v12; // r8d
  __int64 v13; // rdx
  int v14; // ecx

  v5 = *(__int16 *)(a1 + 80) - 1;
  v6 = *(_QWORD *)(a1 + 64);
  v7 = 0x7FFFFFFF;
  *a3 = 0x7FFFFFFF;
  v8 = 0x80000000;
  v9 = *(unsigned __int16 *)(v6 + 2 * v5);
  v10 = *(int **)a1;
  result = (unsigned int)(v9 + 1);
  v12 = v10[(unsigned __int16)(v9 + 2)] - v10[(unsigned __int16)(v9 + 1)];
  *a2 = v12;
  if ( (_WORD)v9 != 0xFFFF )
  {
    v13 = (unsigned __int16)(v9 + 1);
    do
    {
      v14 = v7;
      v7 = *v10++;
      result = (unsigned int)v7;
      if ( v7 <= (int)v8 )
        result = v8;
      v8 = result;
      if ( v7 >= v14 )
        v7 = v14;
      --v13;
    }
    while ( v13 );
    *a3 = v7;
  }
  *a4 = v12 - v8;
  return result;
}
