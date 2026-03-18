/*
 * XREFs of cjComputeGLYPHSET_OLDBIDI @ 0x1C021B628
 * Callers:
 *     bLoadGlyphSet @ 0x1C0219808 (bLoadGlyphSet.c)
 * Callees:
 *     memset @ 0x1C013D6C0 (memset.c)
 *     fs_GetGlyphIDs @ 0x1C02B1B4C (fs_GetGlyphIDs.c)
 */

__int64 __fastcall cjComputeGLYPHSET_OLDBIDI(int a1, char **a2, int a3)
{
  unsigned int v3; // ebx
  int v4; // eax
  int v5; // r12d
  char **v6; // r13
  int v7; // ebp
  int v8; // r15d
  const char *v10; // rcx
  unsigned __int16 v11; // dx
  const char *i; // r14
  int v13; // ebp
  char *v14; // rax
  char *v15; // rdi
  char *v16; // rsi
  int v17; // edx
  int v18; // r9d
  __int64 v19; // rbp
  __int64 v20; // r12
  char *v21; // r15
  int v22; // r13d
  unsigned __int16 v23; // cx
  int v24; // ecx
  __int64 v25; // rax
  __int64 v26; // rbp
  int v27; // eax
  int j; // ebp
  char *v29; // [rsp+30h] [rbp-58h]
  unsigned __int16 v33; // [rsp+A8h] [rbp+20h] BYREF

  v3 = 0;
  v4 = a3 & 0xFF00;
  *a2 = 0LL;
  v5 = a3;
  v6 = a2;
  v7 = 0;
  v8 = 0;
  switch ( v4 )
  {
    case 61440:
      v10 = (const char *)a0123456789;
      break;
    case 61696:
      v10 = " ";
      break;
    case 61952:
      v10 = (const char *)&unk_1C02E8150;
      break;
    default:
      return 0LL;
  }
  v11 = *((_WORD *)v10 + 1);
  for ( i = v10; v11; v11 = *((_WORD *)v10 + 1) )
  {
    ++v8;
    v7 += v11;
    v10 += 2 * v11 + 4;
  }
  v13 = v7 + 256;
  v14 = (char *)EngAllocMem(0, 4 * (v13 + 4 * v8 + 8), 0x64667454u);
  v15 = v14;
  if ( v14 )
  {
    *(_DWORD *)v14 = 4 * (v13 + 4 * v8 + 8);
    *((_DWORD *)v14 + 1) = 4;
    *((_DWORD *)v14 + 2) = v13;
    *((_DWORD *)v14 + 3) = v8 + 1;
    v16 = &v14[16 * v8 + 32];
    v29 = &v16[4 * v13 - 1024];
    memset(v29, 0, 0x400uLL);
    v19 = v8;
    if ( v8 > 0 )
    {
      v20 = 0LL;
      v21 = v15 + 18;
      while ( 1 )
      {
        v22 = 0;
        *((_WORD *)v21 - 1) = *(_WORD *)i;
        *(_WORD *)v21 = *((_WORD *)i + 1);
        *(_QWORD *)(v21 + 6) = v16;
        v23 = *((_WORD *)i + 1);
        if ( v23 )
          break;
LABEL_16:
        ++v20;
        v21 += 16;
        i += 2 * v23 + 4;
        if ( v20 >= v19 )
        {
          v5 = a3;
          v6 = a2;
          goto LABEL_18;
        }
      }
      while ( !(unsigned int)fs_GetGlyphIDs(
                               a1,
                               v17,
                               (unsigned __int16)(a3 + *(_WORD *)&i[2 * v22 + 4]),
                               v18,
                               (__int64)&v33) )
      {
        v24 = v33;
        v17 = (int)v29;
        *(_DWORD *)v16 = v33;
        v16 += 4;
        v25 = v22++;
        *(_DWORD *)&v29[4 * *(unsigned __int16 *)&i[2 * v25 + 4]] = v24;
        v23 = *((_WORD *)i + 1);
        if ( v22 >= v23 )
          goto LABEL_16;
      }
LABEL_25:
      EngFreeMem(v15);
      return 0LL;
    }
LABEL_18:
    v26 = 2 * v19;
    v27 = 0;
    *(_WORD *)&v15[8 * v26 + 16] = v5;
    *(_WORD *)&v15[8 * v26 + 18] = 256;
    *(_QWORD *)&v15[8 * v26 + 24] = v16;
    for ( j = 0; j < 256; v27 = j )
    {
      if ( !*(_DWORD *)v16 )
      {
        if ( (unsigned int)fs_GetGlyphIDs(a1, v17, v27 + v5, v18, (__int64)&v33) )
          goto LABEL_25;
        *(_DWORD *)v16 = v33;
      }
      ++j;
      v16 += 4;
    }
    v3 = *(_DWORD *)v15;
    *v6 = v15;
  }
  return v3;
}
