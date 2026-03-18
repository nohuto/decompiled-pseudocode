/*
 * XREFs of PfpRpRehashIfNeeded @ 0x140657B68
 * Callers:
 *     PfpRpFileKeyUpdate @ 0x1406572D0 (PfpRpFileKeyUpdate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PfpRpRehashIfNeeded(__int64 a1, void **a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int v5; // r8d
  unsigned int v7; // eax
  int v9; // ecx
  char *v11; // r11
  __int64 v12; // r9
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // rbx
  __int64 v16; // r15
  _QWORD *v17; // rsi
  __int64 v18; // rdx
  void *v19; // rdx
  char i; // cl
  unsigned int v21; // [rsp+20h] [rbp+8h]
  __int64 v22; // [rsp+20h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 4);
  v5 = 0;
  v7 = 2 * (v3 >> 5);
  if ( *(_DWORD *)a1 >= v7 )
  {
    if ( !v7 )
      v7 = 64;
    v9 = 1;
  }
  else
  {
    v7 = v21;
    v9 = 0;
  }
  if ( v9 && v7 <= a3 )
  {
    v11 = (char *)*a2;
    v12 = a3;
    if ( ((a3 - 1) & a3) != 0 )
    {
      for ( i = -1; a3; a3 >>= 1 )
        ++i;
      v12 = (unsigned int)(1 << i);
    }
    if ( (unsigned int)v12 > 0x4000000 )
      v12 = 0x4000000LL;
    v13 = (unsigned int)v12;
    if ( v11 > &v11[8 * v12] )
      v13 = 0LL;
    if ( v13 )
      memset64(v11, a1 | 1, v13);
    v14 = 0;
    v15 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v16 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v17 = *(_QWORD **)(v16 + 8LL * v14);
          if ( ((unsigned __int8)v17 & 1) != 0 )
            break;
          *(_QWORD *)(v16 + 8LL * v14) = *v17;
          v22 = v15 & v17[1];
          v18 = (37
               * (BYTE6(v22)
                + 37
                * (BYTE5(v22)
                 + 37
                 * (BYTE4(v22)
                  + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
               + HIBYTE(v22)) & (unsigned int)(v12 - 1);
          *v17 = *(_QWORD *)&v11[8 * v18];
          *(_QWORD *)&v11[8 * v18] = v17;
        }
        ++v14;
      }
      while ( v14 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v19 = *(void **)(a1 + 8);
    v3 = *(_DWORD *)(a1 + 4) & 0x1F | (32 * v12);
    *(_QWORD *)(a1 + 8) = v11;
    *(_DWORD *)(a1 + 4) = v3;
    *a2 = v19;
  }
  LOBYTE(v5) = v3 >= 0x20;
  return v5;
}
