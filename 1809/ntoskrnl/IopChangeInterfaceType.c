/*
 * XREFs of IopChangeInterfaceType @ 0x1408277DC
 * Callers:
 *     IoReportResourceUsageInternal @ 0x1408276B8 (IoReportResourceUsageInternal.c)
 * Callees:
 *     memmove @ 0x1401D1640 (memmove.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 *     PnpDetermineResourceListSize @ 0x1406FCD2C (PnpDetermineResourceListSize.c)
 */

char __fastcall IopChangeInterfaceType(__int64 a1, unsigned int **a2)
{
  char v2; // bl
  char result; // al
  int v5; // edx
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rax
  unsigned int *v8; // rdi
  SIZE_T v9; // rbp
  unsigned int *PoolWithTag; // rax
  unsigned int *v11; // rsi
  unsigned int v12; // r8d
  _DWORD *i; // rax
  unsigned int v14; // edx
  _DWORD *v15; // rcx
  __int64 v16; // r9
  __int64 v17; // rax

  v2 = 0;
  result = a1;
  if ( a1 )
  {
    if ( !*(_DWORD *)(a1 + 4) )
    {
      *(_DWORD *)(a1 + 4) = 1;
      v2 = 1;
    }
    v5 = *(_DWORD *)(a1 + 28);
    v6 = a1 + 32;
    while ( --v5 >= 0 )
    {
      v7 = v6 + 8;
      v6 += 8 + 32LL * *(unsigned int *)(v6 + 4);
      while ( v7 < v6 )
      {
        if ( *(_BYTE *)(v7 + 1) == 0xF0 && !*(_DWORD *)(v7 + 8) )
        {
          *(_DWORD *)(v7 + 8) = 1;
          v2 = 1;
        }
        v7 += 32LL;
      }
    }
    if ( v2 )
    {
      v8 = *a2;
      if ( *a2 )
      {
        v9 = (unsigned int)PnpDetermineResourceListSize(*a2);
        PoolWithTag = (unsigned int *)ExAllocatePoolWithTag(PagedPool, v9, 0x20207050u);
        v11 = PoolWithTag;
        if ( PoolWithTag )
        {
          memmove(PoolWithTag, v8, v9);
          v12 = 0;
          for ( i = v11 + 1; v12 < *v8; i = v15 )
          {
            if ( !*i )
              *i = 1;
            v14 = i[3];
            v15 = i + 4;
            if ( v14 )
            {
              v16 = v14;
              do
              {
                v17 = 0LL;
                if ( *(_BYTE *)v15 == 5 )
                  v17 = (unsigned int)v15[1];
                v15 = (_DWORD *)((char *)v15 + v17 + 20);
                --v16;
              }
              while ( v16 );
            }
            ++v12;
          }
          *a2 = v11;
        }
        else
        {
          return 0;
        }
      }
    }
    return v2;
  }
  return result;
}
