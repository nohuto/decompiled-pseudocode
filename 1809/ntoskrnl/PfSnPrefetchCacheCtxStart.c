/*
 * XREFs of PfSnPrefetchCacheCtxStart @ 0x14075A54C
 * Callers:
 *     PfSnPrefetchCacheEntryGet @ 0x1406692F8 (PfSnPrefetchCacheEntryGet.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfSnPrefetchCacheCtxStart(__int64 a1)
{
  char *PoolWithTag; // rax
  unsigned int v3; // r9d
  char *v4; // r8
  unsigned int v5; // r10d
  __int64 v6; // r11
  int v7; // eax
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 v11; // r14
  __int64 v12; // rsi
  unsigned __int64 v13; // rdx

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x1000uLL, 0x66506343u);
  v3 = 0;
  v4 = PoolWithTag;
  if ( PoolWithTag )
  {
    if ( (PoolWithTag + 256 >= PoolWithTag ? 0x20 : 0) != 0 )
      memset64(PoolWithTag, a1 | 1, PoolWithTag + 256 >= PoolWithTag ? 0x20 : 0);
    v5 = 0;
    v6 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
    if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
    {
      do
      {
        v11 = *(_QWORD *)(a1 + 8);
        while ( 1 )
        {
          v12 = *(_QWORD *)(v11 + 8LL * v5);
          if ( (v12 & 1) != 0 )
            break;
          *(_QWORD *)(v11 + 8LL * v5) = *(_QWORD *)v12;
          v13 = (13 * ((unsigned __int8)v6 & *(_BYTE *)(v12 + 8))
               + (((unsigned __int64)v6 & *(_QWORD *)(v12 + 8)) >> 56)
               + 3
               * (3 * ((unsigned __int16)(v6 & *(_WORD *)(v12 + 8)) >> 8)
                - (unsigned __int8)(((unsigned __int64)v6 & *(_QWORD *)(v12 + 8)) >> 32))
               + 5
               * ((unsigned __int8)(((unsigned __int64)v6 & *(_QWORD *)(v12 + 8)) >> 48)
                - 3 * (((unsigned int)v6 & *(_DWORD *)(v12 + 8)) >> 24)
                + 3)
               - 7 * ((unsigned __int16)(((unsigned __int64)v6 & *(_QWORD *)(v12 + 8)) >> 32) >> 8)
               - 11 * (unsigned __int8)(((unsigned int)v6 & *(_DWORD *)(v12 + 8)) >> 16)) & 0x1F;
          *(_QWORD *)v12 = *(_QWORD *)&PoolWithTag[8 * v13];
          *(_QWORD *)&PoolWithTag[8 * v13] = v12;
        }
        ++v5;
      }
      while ( v5 < *(_DWORD *)(a1 + 4) >> 5 );
    }
    v7 = *(_DWORD *)(a1 + 4) & 0x1F;
    *(_QWORD *)(a1 + 8) = v4;
    v8 = (_QWORD *)((unsigned __int64)(v4 + 263) & 0xFFFFFFFFFFFFFFF8uLL);
    *(_DWORD *)(a1 + 4) = v7 | 0x400;
    v9 = &v8[15 * ((unsigned int)((_DWORD)v4 - (_DWORD)v8 + 4096) / 0x78uLL)];
    while ( v8 < v9 )
    {
      *v8 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 32) = v8;
      v8 += 15;
    }
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v3;
}
