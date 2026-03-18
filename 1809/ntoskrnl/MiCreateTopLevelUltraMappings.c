/*
 * XREFs of MiCreateTopLevelUltraMappings @ 0x1409D9BC0
 * Callers:
 *     MiInitNucleus @ 0x1409B9108 (MiInitNucleus.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x140028584 (MiMakeZeroedPageTablesEx.c)
 *     InitializeSListHead @ 0x1400F3160 (InitializeSListHead.c)
 *     memset @ 0x1401D1780 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14034B010 (ExAllocatePoolWithTag.c)
 *     MiInitializeUltraSpace @ 0x1409D9CD4 (MiInitializeUltraSpace.c)
 */

__int64 MiCreateTopLevelUltraMappings()
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  PVOID PoolWithTag; // rax
  __int64 v3; // rsi
  __int16 v4; // bx
  __int64 v5; // rbp
  union _SLIST_HEADER *v6; // rbx

  v0 = qword_14043BA90;
  v1 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        (((unsigned __int64)qword_14043BA90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        (((unsigned __int64)qword_14043BA90 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 0x7FFFFFFF8LL,
                        6u,
                        9) )
    return 0LL;
  if ( !(unsigned int)MiInitializeUltraSpace(&qword_14043ACA8, v0) )
    return 0LL;
  PoolWithTag = ExAllocatePoolWithTag(
                  NonPagedPoolNxCacheAligned,
                  (unsigned __int64)(unsigned __int16)KeNumberNodes << 9,
                  0x20206D4Du);
  v3 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    return 0LL;
  v4 = KeNumberNodes;
  memset(PoolWithTag, 0, (unsigned __int64)(unsigned __int16)KeNumberNodes << 9);
  if ( v4 )
  {
    do
    {
      v5 = 8LL;
      v6 = (union _SLIST_HEADER *)(v3 + ((unsigned __int64)v1 << 9));
      do
      {
        InitializeSListHead(v6);
        v6 += 4;
        --v5;
      }
      while ( v5 );
      ++v1;
    }
    while ( v1 < (unsigned __int16)KeNumberNodes );
  }
  qword_14043ACF0 = v3;
  return 1LL;
}
