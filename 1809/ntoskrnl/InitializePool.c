/*
 * XREFs of InitializePool @ 0x1409B7DF8
 * Callers:
 *     MiInitNucleus @ 0x1409BA108 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x1400627E0 (ExGenRandom.c)
 *     MmAllocateIndependentPagesEx @ 0x14010903C (MmAllocateIndependentPagesEx.c)
 *     ExAllocateHeapPages @ 0x14015C990 (ExAllocateHeapPages.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MmGetNumberOfPhysicalPages @ 0x1406269DC (MmGetNumberOfPhysicalPages.c)
 *     ExInitializePoolDescriptor @ 0x140716CEC (ExInitializePoolDescriptor.c)
 *     ExpSeedHotTags @ 0x1409B7FEC (ExpSeedHotTags.c)
 *     InitializePagedPool @ 0x1409B8280 (InitializePagedPool.c)
 */

__int64 __fastcall InitializePool(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  void *v8; // r9
  int v9; // eax
  int v10; // ecx
  unsigned __int64 v11; // r8
  void *HeapPages; // rax
  __int64 v13; // rax
  size_t v14; // r8
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  int v17; // ecx
  __int64 v18; // rdi
  __int64 IndependentPages; // rsi

  if ( a1 != 512 )
  {
    InitializePagedPool();
    return 1LL;
  }
  CurrentPrcb = KeGetCurrentPrcb();
  v5 = CurrentPrcb->KeSystemCalls ^ CurrentPrcb->InterruptTime ^ MEMORY[0xFFFFF78000000018] ^ __rdtsc() ^ ((unsigned __int64)MEMORY[0xFFFFF78000000014] << 32);
  v6 = (unsigned __int64)(unsigned int)ExGenRandom(0) << 32;
  v7 = (v6 | (unsigned int)ExGenRandom(0)) ^ v5;
  if ( !v7 )
    v7 = 1LL;
  v9 = a2 | ExpPoolFlags;
  ExpPoolQuotaCookie = v7;
  ExpPoolFlags |= a2;
  if ( (unsigned int)ExpHeapBackedPoolEnabledState >= 2 )
    ExpPoolFlags = v9 | 0x20;
  _BitScanReverse((unsigned int *)&v10, KeLargestCacheLine);
  ExpCacheLineSize = 1 << v10;
  if ( (unsigned int)(1 << v10) < 0x10 )
  {
    ExpCacheLineSize = 16;
  }
  else if ( (unsigned int)(1 << v10) > 0x1000 )
  {
    ExpCacheLineSize = 4096;
  }
  if ( PoolTrackTableSize )
  {
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v15, PoolTrackTableSize);
      v11 = 1LL << v15;
      goto LABEL_22;
    }
    v11 = 64LL;
    PoolTrackTableSize = 64LL;
  }
  else
  {
    PoolTrackTableSize = 4096LL;
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) <= 0x10000 )
    {
      v11 = 512LL;
      PoolTrackTableSize = 512LL;
    }
  }
  while ( 1 )
  {
    if ( v11 + 1 > 0x492492492492492LL )
      goto LABEL_21;
    HeapPages = ExAllocateHeapPages(0x200u, (56 * v11 + 4151) & 0xFFFFFFFFFFFFF000uLL, v11, (__int16)v8);
    PoolTrackTable = (__int64)HeapPages;
    v8 = HeapPages;
    if ( HeapPages )
      break;
    v11 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 0LL;
LABEL_21:
    v11 >>= 1;
LABEL_22:
    PoolTrackTableSize = v11;
  }
  ExPoolTagTables = HeapPages;
  v13 = PoolTrackTableSize - 1;
  v14 = 56 * ++PoolTrackTableSize;
  PoolTrackTableMask = v13;
  memset(v8, 0, v14);
  ExpSeedHotTags();
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_16;
  v16 = (unsigned __int16)KeNumberNodes;
  ExpNumberOfNonPagedPools = (unsigned __int16)KeNumberNodes;
  v17 = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
  {
    ExpNumberOfNonPagedPools = 127;
    v16 = 127;
    v17 = 127;
  }
  if ( v16 > 0x40 )
  {
    ExpNumberOfNonPagedPools = 64;
    v17 = 64;
  }
  v18 = 0LL;
  if ( !v17 )
  {
LABEL_16:
    ExpTaggedPoolLock = 0LL;
    PoolVector[0] = (__int64)&NonPagedPoolDescriptor;
    ExInitializePoolDescriptor((__int64)&NonPagedPoolDescriptor, 512, 0);
    ExInitializePoolDescriptor((__int64)&unk_1404D9780, 0, 0);
    return 1LL;
  }
  while ( 1 )
  {
    IndependentPages = MmAllocateIndependentPagesEx(0x2280uLL, v18, 0LL, 0);
    if ( !IndependentPages )
      return 0LL;
    ExpNonPagedPoolDescriptor[v18] = IndependentPages;
    ExInitializePoolDescriptor(IndependentPages, 512, v18);
    ExInitializePoolDescriptor(IndependentPages + 4416, 0, v18);
    v18 = (unsigned int)(v18 + 1);
    if ( (unsigned int)v18 >= ExpNumberOfNonPagedPools )
      goto LABEL_16;
  }
}
