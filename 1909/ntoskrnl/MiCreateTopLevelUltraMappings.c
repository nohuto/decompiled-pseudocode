/*
 * XREFs of MiCreateTopLevelUltraMappings @ 0x140A1D394
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     MiMakeZeroedPageTablesEx @ 0x1400CA488 (MiMakeZeroedPageTablesEx.c)
 *     InitializeSListHead @ 0x1400EA4C0 (InitializeSListHead.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 *     MiInitializeUltraSpace @ 0x140A1D4A8 (MiInitializeUltraSpace.c)
 */

__int64 MiCreateTopLevelUltraMappings()
{
  __int64 v0; // rbx
  unsigned int v1; // edi
  PVOID PoolWithTag; // rax
  __int64 v3; // rsi
  __int16 v4; // bx
  __int64 v5; // rbp
  _SLIST_HEADER *v6; // rbx

  v0 = qword_140467280;
  v1 = 0;
  if ( !(unsigned int)MiMakeZeroedPageTablesEx(
                        (((unsigned __int64)qword_140467280 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                        (((unsigned __int64)qword_140467280 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL + 0x7FFFFFFF8LL,
                        6u,
                        9,
                        0) )
    return 0LL;
  if ( !(unsigned int)MiInitializeUltraSpace(&qword_140466430, v0) )
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
      v6 = (_SLIST_HEADER *)(v3 + ((unsigned __int64)v1 << 9));
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
  qword_140466478 = v3;
  return 1LL;
}
