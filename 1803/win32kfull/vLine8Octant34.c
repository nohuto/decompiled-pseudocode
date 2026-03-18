/*
 * XREFs of vLine8Octant34 @ 0x1C02A5FE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vLine8Octant34(int *a1, __int64 a2, int a3, char a4)
{
  __int64 result; // rax
  int v5; // r10d
  _BYTE *v6; // rdx
  int v7; // edi
  int v8; // ebx
  int v9; // r11d
  bool v10; // sf
  unsigned int v11; // r10d
  int v12; // ecx

  result = a1[1];
  v5 = a1[6];
  v6 = (_BYTE *)(result + a2);
  v7 = a1[4];
  v8 = a1[5];
  v9 = a1[3];
  while ( 1 )
  {
    *v6 = a4;
    if ( !--v9 )
      break;
    --v6;
    v10 = v8 + v5 < 0;
    v11 = v8 + v5;
    v12 = v11;
    if ( !v10 )
      v6 += a3;
    result = v11;
    v5 = v11 - v7;
    if ( (int)result < 0 )
      v5 = v12;
  }
  return result;
}
