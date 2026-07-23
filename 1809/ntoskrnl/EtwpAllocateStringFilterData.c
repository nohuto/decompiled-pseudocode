/*
 * XREFs of EtwpAllocateStringFilterData @ 0x1408C2C38
 * Callers:
 *     EtwpAllocateFilter @ 0x1408C2A1C (EtwpAllocateFilter.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpAllocateStringFilterData(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // r8d
  unsigned int v3; // ebx
  unsigned int v5; // r8d
  _WORD *v6; // r15
  unsigned __int16 v7; // bp
  unsigned int i; // edi
  __int16 v9; // cx
  unsigned __int16 v10; // ax
  unsigned int v11; // edi
  _QWORD *PoolWithTag; // rax
  _QWORD *v13; // rsi
  char *v14; // r14
  unsigned __int16 v15; // r8
  __int16 v16; // r10
  unsigned int j; // edx
  __int16 v18; // ax
  __int16 v19; // ax
  __int64 v20; // rcx

  v2 = *(_DWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 - 2 > 0x3FE )
  {
    return (unsigned int)-1073741811;
  }
  else
  {
    v5 = v2 >> 1;
    v6 = *(_WORD **)a1;
    v7 = 1;
    for ( i = 0; i < v5; v7 = v10 )
    {
      v9 = v6[i];
      if ( !v9 )
        break;
      ++i;
      v10 = v7 + 1;
      if ( v9 != 59 )
        v10 = v7;
    }
    v11 = i + 1;
    if ( v5 <= v11 )
      v11 = v5;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2 * (v11 + 8 * v7) + 24, 0x46777445u);
    v13 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, 2 * (v11 + 8 * v7) + 24);
      v14 = (char *)&v13[2 * v7 + 3];
      *(_WORD *)v13 = v7;
      memmove(v14, v6, 2LL * v11);
      v13[2] = v14;
      v15 = 1;
      v16 = 0;
      for ( j = 0; j < v11; ++j )
      {
        v18 = *(_WORD *)&v14[2 * j];
        if ( !v18 || v15 >= *(_WORD *)v13 )
          break;
        if ( v18 == 59 )
        {
          v19 = j - v16;
          *(_WORD *)&v14[2 * j] = 0;
          v20 = 2LL * v15;
          v16 = j + 1;
          ++v15;
          LOWORD(v13[v20 - 1]) = v19;
          v13[v20 + 2] = &v14[2 * j + 2];
        }
      }
      LOWORD(v13[2 * v15 - 1]) = v11 - v16 - 1;
      *a2 = v13;
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return v3;
}
