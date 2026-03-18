/*
 * XREFs of IoctlQueryReservedQueueEntries @ 0x1C000FAD4
 * Callers:
 *     IoctlToNVMe @ 0x1C00018EC (IoctlToNVMe.c)
 * Callees:
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 */

__int64 __fastcall IoctlQueryReservedQueueEntries(__int64 a1, __int64 a2)
{
  unsigned __int16 v2; // ax
  __int64 v4; // rdx
  unsigned int v6; // esi
  unsigned __int16 *v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rbp
  __int64 result; // rax
  unsigned __int64 v11; // rcx
  int v12; // ecx
  unsigned __int16 v13; // ax
  __int64 v14; // r8
  unsigned __int16 i; // r10
  __int64 v16; // r9
  _WORD *v17; // r15
  __int16 v18; // cx
  unsigned __int16 v19; // r11
  __int64 v20; // rdx

  v2 = *(_WORD *)(a1 + 806);
  v4 = 16LL;
  v6 = 16;
  if ( v2 )
  {
    v7 = (unsigned __int16 *)(*(_QWORD *)(a1 + 792) + 26LL);
    v8 = v2;
    do
    {
      if ( *(v7 - 5) )
        v6 += 32 * *v7 + 32;
      v7 += 16;
      --v8;
    }
    while ( v8 );
  }
  if ( *(_BYTE *)(a2 + 2) == 40 )
  {
    v9 = *(_QWORD *)(a2 + 64);
    v4 = 60LL;
  }
  else
  {
    v9 = *(_QWORD *)(a2 + 24);
  }
  if ( !*(_WORD *)(a1 + 778) )
  {
    result = 3238002689LL;
LABEL_14:
    *(_BYTE *)(a2 + 3) = 6;
    return result;
  }
  v11 = *(unsigned int *)(a2 + v4);
  if ( v11 >= (unsigned __int64)v6 + 28 )
  {
    NVMeZeroMemory((void *)(v9 + 28), v11 - 28);
    v13 = *(_WORD *)(a1 + 806);
    v14 = v9 + 44;
    for ( i = 0; i < v13; ++i )
    {
      v16 = *(_QWORD *)(a1 + 792) + 32LL * i;
      if ( *(_WORD *)(v16 + 16) )
      {
        v17 = (_WORD *)(v14 + 26);
        v18 = *(_WORD *)(v14 + 24);
        v19 = 0;
        *(_QWORD *)v14 = *(_QWORD *)v16;
        *(_QWORD *)(v14 + 8) = *(_QWORD *)(v16 + 8);
        *(_WORD *)(v14 + 16) = *(_WORD *)(v16 + 16);
        *(_WORD *)(v14 + 18) = *(_WORD *)(v16 + 18);
        *(_WORD *)(v14 + 24) ^= (*(_WORD *)(v16 + 24) ^ v18) & 1;
        *(_WORD *)(v14 + 24) ^= ((unsigned __int8)*(_WORD *)(v14 + 24) ^ (unsigned __int8)*(_WORD *)(v16 + 24)) & 2;
        *(_DWORD *)(v14 + 20) = *(_DWORD *)(v16 + 20);
        v14 += 32LL;
        *v17 = 0;
        v13 = *(_WORD *)(a1 + 806);
        if ( v13 )
        {
          do
          {
            v20 = *(_QWORD *)(a1 + 784) + 32LL * v19;
            if ( *(_WORD *)(v20 + 20) == *(_WORD *)(v16 + 16) )
            {
              *(_QWORD *)v14 = *(_QWORD *)v20;
              *(_QWORD *)(v14 + 8) = *(_QWORD *)(v20 + 8);
              *(_WORD *)(v14 + 16) = *(_WORD *)(v20 + 16);
              *(_WORD *)(v14 + 18) = *(_WORD *)(v20 + 18);
              *(_WORD *)(v14 + 22) ^= (*(_WORD *)(v14 + 22) ^ *(_WORD *)(v20 + 22)) & 1;
              *(_WORD *)(v14 + 20) = *(_WORD *)(v20 + 20);
              *(_WORD *)(v14 + 24) = *(_WORD *)(v20 + 24);
              ++*v17;
              v14 += 32LL;
            }
            v13 = *(_WORD *)(a1 + 806);
            ++v19;
          }
          while ( v19 < v13 );
        }
      }
    }
    v12 = v6;
    *(_WORD *)(v9 + 36) = *(_WORD *)(a1 + 778);
  }
  else
  {
    if ( (unsigned int)v11 < 0x24 )
    {
      result = 3238002694LL;
      goto LABEL_14;
    }
    v12 = 8;
  }
  *(_BYTE *)(a2 + 3) = 1;
  result = 0LL;
  *(_DWORD *)(v9 + 32) = v6;
  *(_DWORD *)(v9 + 28) = v6;
  *(_DWORD *)(v9 + 24) = v12;
  return result;
}
