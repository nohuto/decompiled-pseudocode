/*
 * XREFs of MiConvertRunsToPages @ 0x140853CDC
 * Callers:
 *     MiAllocateFileExtents @ 0x140853410 (MiAllocateFileExtents.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiConvertRunsToPages(__int64 a1, _QWORD *a2, unsigned int *a3)
{
  unsigned int v3; // eax
  __int64 v4; // r11
  unsigned int v5; // r9d
  _QWORD *v9; // r10
  __int64 v10; // rdi
  unsigned int v11; // ecx
  __int64 *v12; // r8
  unsigned __int64 v13; // rsi
  unsigned int v14; // edx
  unsigned int v15; // eax
  _QWORD *result; // rax
  __int64 v17; // rdx
  unsigned int i; // ecx
  __int64 v19; // r9
  __int64 j; // r8

  v3 = *(_DWORD *)(a1 + 4);
  v4 = 0LL;
  v5 = 0;
  if ( v3 )
  {
    v9 = (_QWORD *)(a1 + 16);
    v10 = v3;
    do
    {
      v4 += *v9;
      if ( v5 <= 1 )
      {
        v11 = 0;
        v12 = MiLargePageSizes;
        do
        {
          v13 = *v12;
          if ( !(*(v9 - 1) % (unsigned __int64)*v12) && !(*v9 % v13) )
            break;
          v14 = v11 + 1;
          v15 = v11 + 1;
          if ( v5 > v11 )
            v15 = v5;
          v5 = v15;
          if ( v13 == 512 )
            break;
          ++v12;
          ++v11;
        }
        while ( v14 < 3 );
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
  if ( result )
  {
    v17 = 0LL;
    for ( i = 0; i < *(_DWORD *)(a1 + 4); ++i )
    {
      v19 = *(_QWORD *)(a1 + 16LL * i + 16);
      for ( j = *(_QWORD *)(a1 + 16LL * i + 8); v19; --v19 )
        result[v17++] = j++;
    }
  }
  return result;
}
