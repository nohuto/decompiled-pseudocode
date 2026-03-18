/*
 * XREFs of ?vLine1Octant07@@YAXPEAU_DDALINE@@PEAEJK@Z @ 0x1C02A52A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall vLine1Octant07(struct _DDALINE *a1, unsigned __int8 *a2, int a3, int a4)
{
  int v4; // ebx
  int v5; // ebp
  int v6; // r14d
  __int64 v7; // rsi
  unsigned __int8 *v8; // rdx
  int v9; // edi
  int v10; // r8d
  unsigned __int8 v11; // cl
  unsigned __int8 *v12; // rax
  char v13; // cl
  bool v14; // sf
  int v15; // ebx
  int v16; // ecx
  int v17; // eax
  unsigned __int8 *v18; // rax
  char v19; // cl
  int v20; // ebx
  int v21; // ecx
  int v22; // eax

  v4 = *((_DWORD *)a1 + 6);
  v5 = *((_DWORD *)a1 + 4);
  v6 = *((_DWORD *)a1 + 5);
  v7 = a3;
  v8 = &a2[(unsigned __int64)*((unsigned int *)a1 + 1) >> 3];
  v9 = 128 >> (*((_BYTE *)a1 + 4) & 7);
  v10 = *((_DWORD *)a1 + 3) - 1;
  v11 = *v8;
  if ( a4 )
  {
    for ( *v8 = v9 | v11; v10; --v10 )
    {
      LOBYTE(v9) = (unsigned __int8)v9 >> 1;
      v12 = v8 + 1;
      v13 = v9;
      if ( !(_BYTE)v9 )
        LOBYTE(v9) = 0x80;
      if ( v13 )
        v12 = v8;
      v14 = v6 + v4 < 0;
      v15 = v6 + v4;
      v16 = v15;
      v8 = v12;
      if ( !v14 )
        v8 = &v12[v7];
      *v8 |= v9;
      v17 = v15;
      v4 = v15 - v5;
      if ( v17 < 0 )
        v4 = v16;
    }
  }
  else
  {
    for ( *v8 = v11 & ~(_BYTE)v9; v10; --v10 )
    {
      LOBYTE(v9) = (unsigned __int8)v9 >> 1;
      v18 = v8 + 1;
      v19 = v9;
      if ( !(_BYTE)v9 )
        LOBYTE(v9) = 0x80;
      if ( v19 )
        v18 = v8;
      v14 = v6 + v4 < 0;
      v20 = v6 + v4;
      v21 = v20;
      v8 = v18;
      if ( !v14 )
        v8 = &v18[v7];
      *v8 &= ~(_BYTE)v9;
      v22 = v20;
      v4 = v20 - v5;
      if ( v22 < 0 )
        v4 = v21;
    }
  }
}
