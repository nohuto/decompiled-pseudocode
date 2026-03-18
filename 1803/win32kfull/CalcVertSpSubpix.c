/*
 * XREFs of CalcVertSpSubpix @ 0x1C02C4390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcVertSpSubpix(int a1, int *a2, int *a3)
{
  int v3; // ebx
  int v4; // eax
  int v5; // r9d
  int v6; // r10d
  int v7; // r11d
  int v8; // edx
  int v9; // edi
  int v10; // r8d
  int v11; // ecx
  __int64 result; // rax
  int v13; // r9d
  int v14; // r10d

  v3 = *a2;
  v4 = a2[2];
  v5 = a2[1];
  v6 = a3[1];
  v7 = (a1 << 6) + 32;
  if ( *a2 >= v4 )
    v8 = *a3;
  else
    v8 = a3[2];
  v9 = v4;
  if ( v3 >= v4 )
  {
    a3 += 2;
    v9 = v3;
    v3 = v4;
  }
  v10 = *a3;
  do
  {
    v11 = (v3 + v9 + 2 * v5 + 1) >> 2;
    result = (unsigned int)((v10 + v8 + 2 * v6 + 1) >> 2);
    if ( v11 <= v7 )
    {
      if ( v11 >= v7 )
        continue;
      v13 = v9 + v5;
      v3 = v11;
      v14 = v8 + v6;
      v10 = result;
    }
    else
    {
      v13 = v3 + v5;
      v9 = v11;
      v14 = v10 + v6;
      v8 = result;
    }
    v5 = v13 >> 1;
    v6 = v14 >> 1;
  }
  while ( v11 != v7 );
  return result;
}
