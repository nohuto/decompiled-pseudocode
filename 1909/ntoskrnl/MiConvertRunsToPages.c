/*
 * XREFs of MiConvertRunsToPages @ 0x14088BF98
 * Callers:
 *     MiAllocateFileExtents @ 0x14088B6A0 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiConvertRunsToPages(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  __int64 v4; // r10
  unsigned int v5; // r9d
  _QWORD *v9; // rcx
  __int64 v10; // rsi
  unsigned __int64 v11; // rbp
  unsigned int v12; // r8d
  __int64 *v13; // r11
  unsigned __int64 v14; // rdi
  unsigned int v15; // edx
  unsigned int v16; // eax
  _QWORD *result; // rax
  _QWORD *v18; // r9
  __int64 v19; // r10
  unsigned int i; // ecx
  __int64 v21; // r8
  unsigned __int64 j; // rdx
  unsigned __int64 v23; // rax

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0LL;
  v5 = 0;
  if ( v3 )
  {
    v9 = (_QWORD *)(a1 + 8);
    v10 = v3;
    do
    {
      v11 = v9[1];
      v4 += v11;
      if ( v5 <= 1 )
      {
        if ( *v9 == 0x8000000000000000uLL )
        {
          v5 = -1;
        }
        else
        {
          v12 = 0;
          v13 = MiLargePageSizes;
          do
          {
            v14 = *v13;
            if ( !(*v9 % (unsigned __int64)*v13) && !(v11 % v14) )
              break;
            v15 = v12 + 1;
            v16 = v12 + 1;
            if ( v5 > v12 )
              v16 = v5;
            v5 = v16;
            if ( v14 == 512 )
              break;
            ++v13;
            ++v12;
          }
          while ( v15 < 3 );
        }
      }
      v9 += 2;
      --v10;
    }
    while ( v10 );
    if ( v5 > 1 )
      v5 = -1;
  }
  *a3 = v5;
  *a2 = v4;
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v4, 0x6546694Du);
  v18 = result;
  if ( result )
  {
    v19 = 0LL;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v21 = *(_QWORD *)(a1 + 16LL * i + 16);
      for ( j = *(_QWORD *)(a1 + 16LL * i + 8); v21; --v21 )
      {
        v18[v19] = j;
        v23 = j + 1;
        ++v19;
        if ( j == 0x8000000000000000uLL )
          v23 = 0x8000000000000000uLL;
        j = v23;
      }
    }
    return v18;
  }
  return result;
}
