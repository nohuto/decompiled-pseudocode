/*
 * XREFs of CalcHorizSpSubpix @ 0x1C02C42E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CalcHorizSpSubpix(int a1, unsigned int *a2, int *a3)
{
  int v3; // eax
  int v4; // r9d
  int v6; // ecx
  int v7; // r10d
  int v8; // r11d
  unsigned int v9; // r8d
  int v10; // edi
  int v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // edx
  int v14; // ecx
  int v15; // r9d
  int v16; // r10d

  v3 = *a3;
  v4 = a2[1];
  v6 = a3[2];
  v7 = a3[1];
  v8 = (a1 << 6) + 32;
  if ( *a3 >= v6 )
    v9 = *a2;
  else
    v9 = a2[2];
  v10 = v6;
  v11 = v3;
  if ( v3 >= v6 )
  {
    a2 += 2;
    v10 = v3;
    v11 = v6;
  }
  v12 = *a2;
  do
  {
    v13 = (int)(v12 + v9 + 2 * v4 + 1) >> 2;
    v14 = (v10 + 2 * v7 + v11 + 1) >> 2;
    if ( v14 <= v8 )
    {
      if ( v14 >= v8 )
        continue;
      v15 = v9 + v4;
      v12 = v13;
      v16 = v10 + v7;
      v11 = v14;
    }
    else
    {
      v15 = v12 + v4;
      v9 = v13;
      v16 = v11 + v7;
      v10 = v14;
    }
    v4 = v15 >> 1;
    v7 = v16 >> 1;
  }
  while ( v14 != v8 );
  return v13;
}
