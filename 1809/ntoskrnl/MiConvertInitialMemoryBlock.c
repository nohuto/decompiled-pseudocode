/*
 * XREFs of MiConvertInitialMemoryBlock @ 0x14075C9E8
 * Callers:
 *     MiMakePartitionMemoryBlock @ 0x1408618BC (MiMakePartitionMemoryBlock.c)
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

char *__fastcall MiConvertInitialMemoryBlock(__int64 a1, __int64 a2)
{
  int v2; // edi
  _QWORD *v5; // r9
  _QWORD *v6; // r8
  __int64 v7; // r10
  int v8; // ecx
  __int64 v9; // rdx
  bool v10; // zf
  char *result; // rax
  char *v12; // r8
  unsigned int v13; // r11d
  unsigned int v14; // r9d
  __int64 v15; // r10
  __int64 v16; // r10
  __int64 v17; // rdx

  v2 = 1;
  if ( *(_DWORD *)a2 > 1u )
  {
    v5 = (_QWORD *)(a2 + 32);
    v6 = (_QWORD *)(a2 + 16);
    v7 = (unsigned int)(*(_DWORD *)a2 - 1);
    do
    {
      v8 = v2 + 1;
      v9 = *v6 + v6[1];
      v6 += 2;
      v10 = *v5 == v9;
      v5 += 2;
      if ( v10 )
        v8 = v2;
      v2 = v8;
      --v7;
    }
    while ( v7 );
  }
  result = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 16 * ((unsigned int)(v2 - 1) + 3LL), 0x6C4D6D4Du);
  if ( result )
  {
    *((_QWORD *)result + 1) = 1LL;
    v12 = result + 16;
    *(_QWORD *)result = a1;
    v13 = 0;
    *((_DWORD *)result + 4) = v2;
    v14 = 0;
    for ( *((_QWORD *)result + 3) = *(_QWORD *)(a2 + 8); v14 < *(_DWORD *)a2; ++v14 )
    {
      if ( v14 )
      {
        v15 = v14;
        if ( *(_QWORD *)(a2 + 16LL * v14 + 16) == *(_QWORD *)(a2 + 16LL * (v14 - 1) + 16)
                                                + *(_QWORD *)(a2 + 16LL * (v14 - 1) + 24) )
        {
          *(_QWORD *)&v12[16 * v13 + 8] += *(_QWORD *)(a2 + 16LL * v14 + 24);
          continue;
        }
      }
      else
      {
        v15 = 0LL;
      }
      v16 = 2 * v15;
      v17 = 2LL * v13++;
      *(_QWORD *)&v12[8 * v17 + 16] = *(_QWORD *)(a2 + 8 * v16 + 16);
      *(_QWORD *)&v12[8 * v17 + 24] = *(_QWORD *)(a2 + 8 * v16 + 24);
    }
    result += 16;
  }
  return result;
}
