/*
 * XREFs of MiAddMdlToPartitionTree @ 0x1402D0928
 * Callers:
 *     MiAllocatePartitionPhysicalPages @ 0x1408610C4 (MiAllocatePartitionPhysicalPages.c)
 * Callees:
 *     MiAddRangeToPartitionTree @ 0x1402D09F8 (MiAddRangeToPartitionTree.c)
 *     MiClearRangeInPartitionTree @ 0x1402D0FD8 (MiClearRangeInPartitionTree.c)
 */

__int64 __fastcall MiAddMdlToPartitionTree(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  __int64 v4; // r15
  __int64 v5; // rdi
  unsigned int v8; // r14d
  __int64 v9; // rbp

  v2 = 0LL;
  v3 = (unsigned __int64)*(unsigned int *)(a2 + 40) >> 12;
  v4 = -1LL;
  v5 = 0LL;
  v8 = 1;
  do
  {
    v9 = (unsigned int)v5;
    if ( (unsigned int)v5 == v3 )
    {
      if ( !v2 )
        return v8;
    }
    else
    {
      if ( !v2 )
      {
        v4 = *(_QWORD *)(a2 + 8 * v5 + 48);
        v2 = 1LL;
        goto LABEL_8;
      }
      if ( *(_QWORD *)(a2 + 8 * v5 + 40) + 1LL == *(_QWORD *)(a2 + 8 * v5 + 48) )
      {
        ++v2;
        goto LABEL_8;
      }
    }
    if ( v8 )
    {
      if ( !(unsigned int)MiAddRangeToPartitionTree(a1, v4, v2, 0LL) )
      {
        LODWORD(v5) = -1;
        v3 = v9 - v2;
        v2 = 0LL;
        v8 = 0;
        goto LABEL_8;
      }
    }
    else
    {
      MiClearRangeInPartitionTree(a1, v4, v2);
    }
    if ( (unsigned int)v5 == v3 )
      return v8;
    v2 = 0LL;
    LODWORD(v5) = v5 - 1;
LABEL_8:
    v5 = (unsigned int)(v5 + 1);
  }
  while ( (unsigned int)v5 <= v3 );
  return v8;
}
