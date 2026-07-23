/*
 * XREFs of MiClearVadCellBits @ 0x140067560
 * Callers:
 *     MiClearVadBits @ 0x140025F60 (MiClearVadBits.c)
 *     MiDeleteVad @ 0x140065E00 (MiDeleteVad.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 */

__int64 __fastcall MiClearVadCellBits(_DWORD *a1, unsigned int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  int v6; // ebp
  unsigned int v7; // esi
  unsigned int v8; // ebx
  unsigned int v10; // ebp
  unsigned int v11; // ecx
  int v12; // eax
  unsigned int v13; // r13d
  unsigned int v14; // esi
  unsigned int v15; // ebx
  __int64 v16; // rsi
  __int64 v17; // rcx
  _BYTE *v18; // r15
  char v19; // al
  unsigned int v20; // r8d
  unsigned __int64 v21; // r8
  unsigned int v22; // r9d

  v6 = a1[2] - qword_14043B5E8;
  v7 = a3;
  v8 = a2;
  if ( !a2 )
  {
    if ( v6 )
      goto LABEL_3;
    v8 = 1;
  }
  if ( v8 > a3 )
    return 1LL;
LABEL_3:
  v10 = 8 * v6;
  if ( a3 < v10 )
    return 0LL;
  v11 = v10 + *a1;
  if ( v8 >= v11 )
    return 0LL;
  v12 = 1;
  if ( v8 < v10 )
  {
    v8 = v10;
    v12 = 0;
  }
  if ( a3 >= v11 )
    v7 = v11 - 1;
  v13 = 0;
  if ( a3 < v11 )
    v13 = v12;
  v14 = v7 - v8;
  v15 = v8 - v10;
  v16 = v14 + 1;
  if ( (_DWORD)v16 )
  {
    v17 = v15 & 7;
    v18 = (_BYTE *)(*((_QWORD *)a1 + 1) + ((unsigned __int64)v15 >> 3));
    if ( (unsigned int)(v17 + v16) <= 8 )
    {
      v19 = ~(byte_1403630E8[v16] << v17);
LABEL_14:
      *v18 &= v19;
      goto LABEL_15;
    }
    if ( (v15 & 7) != 0 )
    {
      v16 = (unsigned int)(v17 + v16 - 8);
      *v18++ &= byte_1403630E8[v17];
    }
    if ( (unsigned int)v16 > 8 )
    {
      memset(v18, 0, (unsigned __int64)(unsigned int)v16 >> 3);
      v18 += (unsigned __int64)(unsigned int)v16 >> 3;
      v16 &= 7u;
    }
    if ( (_DWORD)v16 )
    {
      v19 = byte_140361CC8[v16];
      goto LABEL_14;
    }
  }
LABEL_15:
  if ( a1[4] > v15 )
    a1[4] = v15;
  v20 = 0;
  if ( !a4 )
    goto LABEL_35;
  v21 = ((((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) << 12) | 0xFFF)
       + 0xFFFF) >> 16;
  if ( (unsigned int)v21 <= v10 )
  {
    v20 = 0;
LABEL_35:
    if ( !v10 )
      v20 = 1;
    goto LABEL_20;
  }
  v20 = v21 - v10;
  if ( !v20 )
    goto LABEL_35;
LABEL_20:
  v22 = *a1;
  if ( a5 && ((*(_DWORD *)(a5 + 24) >> 4) | (*(unsigned __int8 *)(a5 + 32) << 28)) <= v22 + v10 )
    v22 = ((*(_DWORD *)(a5 + 24) >> 4) | (*(unsigned __int8 *)(a5 + 32) << 28)) - v10;
  if ( v20 < a1[6] && v22 - v20 >= a1[5] )
    a1[6] = v20;
  return v13;
}
