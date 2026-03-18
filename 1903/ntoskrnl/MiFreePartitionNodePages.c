/*
 * XREFs of MiFreePartitionNodePages @ 0x1402EA6A4
 * Callers:
 *     MiFreePartitionTree @ 0x1402EA728 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1402EA938 (MiInsertPartitionPages.c)
 * Callees:
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiActOnPartitionNodePages @ 0x1402E8F4C (MiActOnPartitionNodePages.c)
 */

__int64 __fastcall MiFreePartitionNodePages(__int16 *a1, __int64 a2, char a3)
{
  unsigned int v6; // edx
  __int16 *v8[9]; // [rsp+20h] [rbp-48h] BYREF

  memset(v8, 0, 0x38uLL);
  v8[0] = a1;
  v6 = 1;
  if ( (a3 & 4) == 0 )
  {
    if ( (a3 & 1) != 0 )
    {
      if ( (a3 & 8) != 0 )
        *(_QWORD *)(a2 + 24) |= 0x8000000000000000uLL;
      v6 = 0;
    }
    else
    {
      v6 = 2;
    }
  }
  MiActOnPartitionNodePages(a2, v6, v8);
  return HIDWORD(v8[2]);
}
