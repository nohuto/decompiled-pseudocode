/*
 * XREFs of sub_1800AED8C @ 0x1800AED8C
 * Callers:
 *     sub_1800ACEF0 @ 0x1800ACEF0 (sub_1800ACEF0.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall sub_1800AED8C(_DWORD *a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // ebp
  _DWORD *v4; // r11
  int v5; // esi
  _DWORD *v6; // r9
  int v7; // ebx
  int v9; // r10d
  int v10; // ecx
  int v11; // edi
  _DWORD *v12; // rax
  int v13; // ecx
  bool v14; // cc
  _DWORD *v15; // rax
  _DWORD *v16; // rax
  int v17; // ecx
  bool v18; // cc
  _DWORD *v19; // rax
  _DWORD *v20; // rax

  v3 = a3[1];
  v4 = a3 + 3;
  v5 = *a3;
  v6 = a3 + 2;
  v7 = a3[2];
  v9 = a3[3];
  v10 = *a3;
  v11 = v9;
  v12 = a3;
  if ( v9 >= a2[3] )
    v11 = a2[3];
  if ( *a2 >= v5 )
  {
    v10 = *a2;
    v12 = a2;
  }
  v14 = v7 < v10;
  v13 = a3[1];
  if ( !v14 )
    v6 = v12;
  v14 = a2[1] < v3;
  if ( a2[1] >= v3 )
    v13 = a2[1];
  *a1 = *v6;
  v15 = a3;
  if ( !v14 )
    v15 = a2;
  v16 = v15 + 1;
  v14 = v9 < v13;
  v17 = v7;
  if ( !v14 )
    v4 = v16;
  v18 = v7 < a2[2];
  if ( v7 >= a2[2] )
    v17 = a2[2];
  a1[1] = *v4;
  v19 = a3;
  if ( !v18 )
    v19 = a2;
  v20 = v19 + 2;
  if ( v17 >= v5 )
    a3 = v20;
  if ( v11 >= v3 )
    v3 = v11;
  a1[3] = v3;
  a1[2] = *a3;
  return a1;
}
