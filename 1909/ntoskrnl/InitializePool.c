/*
 * XREFs of InitializePool @ 0x1409EE7E8
 * Callers:
 *     MiInitNucleus @ 0x1409F3CC8 (MiInitNucleus.c)
 * Callees:
 *     ExGenRandom @ 0x14009C340 (ExGenRandom.c)
 *     MmAllocateIndependentPagesEx @ 0x1400DD368 (MmAllocateIndependentPagesEx.c)
 *     ExAllocateHeapPages @ 0x1400F4544 (ExAllocateHeapPages.c)
 *     memset @ 0x1401D77C0 (memset.c)
 *     MmGetNumberOfPhysicalPages @ 0x1405CB2C0 (MmGetNumberOfPhysicalPages.c)
 *     ExInitializePoolDescriptor @ 0x140741F44 (ExInitializePoolDescriptor.c)
 *     ExpSeedHotTags @ 0x1409EE9BC (ExpSeedHotTags.c)
 *     InitializePagedPool @ 0x1409EEC50 (InitializePagedPool.c)
 */

__int64 __fastcall InitializePool(int a1, int a2)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  int v8; // ecx
  unsigned __int64 v9; // r8
  _WORD *HeapPages; // rax
  void *v11; // r9
  __int64 v12; // rax
  size_t v13; // r8
  int v14; // r8d
  unsigned __int64 v15; // rcx
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 IndependentPages; // r9
  __int64 v19; // r9
  int v20; // r8d

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
  ExpPoolFlags |= a2;
  _BitScanReverse((unsigned int *)&v8, KeLargestCacheLine);
  ExpPoolQuotaCookie = v7;
  *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = 1 << v8;
  if ( (unsigned int)(1 << v8) < 0x10 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = 16;
  }
  else if ( (unsigned int)(1 << v8) > 0x1000 )
  {
    *(_DWORD *)((char *)&Mm64BitPhysicalAddress + 2) = 4096;
  }
  if ( PoolTrackTableSize )
  {
    if ( (unsigned __int64)PoolTrackTableSize >= 0x40 )
    {
      _BitScanReverse64(&v15, PoolTrackTableSize);
      v9 = 1LL << v15;
      goto LABEL_20;
    }
    v9 = 64LL;
    PoolTrackTableSize = 64LL;
  }
  else
  {
    PoolTrackTableSize = 4096LL;
    if ( (unsigned __int64)MmGetNumberOfPhysicalPages(0) <= 0x10000 )
    {
      v9 = 512LL;
      PoolTrackTableSize = 512LL;
    }
  }
  while ( 1 )
  {
    if ( v9 + 1 > 0x492492492492492LL )
      goto LABEL_19;
    HeapPages = ExAllocateHeapPages();
    PoolTrackTable = (__int64)HeapPages;
    v11 = HeapPages;
    if ( HeapPages )
      break;
    v9 = PoolTrackTableSize;
    if ( PoolTrackTableSize == 1 )
      return 0LL;
LABEL_19:
    v9 >>= 1;
LABEL_20:
    PoolTrackTableSize = v9;
  }
  ExPoolTagTables = HeapPages;
  v12 = PoolTrackTableSize - 1;
  v13 = 56 * ++PoolTrackTableSize;
  PoolTrackTableMask = v12;
  memset(v11, 0, v13);
  ExpSeedHotTags();
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_14;
  v16 = (unsigned __int16)KeNumberNodes;
  ExpNumberOfNonPagedPools = (unsigned __int16)KeNumberNodes;
  if ( (unsigned __int16)KeNumberNodes > 0x7Fu )
  {
    ExpNumberOfNonPagedPools = 127;
    v16 = 127;
  }
  if ( v16 > 0x40 )
  {
    ExpNumberOfNonPagedPools = 64;
    v16 = 64;
  }
  v17 = 0LL;
  if ( !v16 )
  {
LABEL_14:
    ExpTaggedPoolLock = 0LL;
    PoolVector[0] = (__int64)&NonPagedPoolDescriptor;
    ExInitializePoolDescriptor((__int64)&NonPagedPoolDescriptor, 512, 0);
    ExInitializePoolDescriptor((__int64)&unk_140503880, 0, v14);
    return 1LL;
  }
  while ( 1 )
  {
    IndependentPages = MmAllocateIndependentPagesEx(0x200uLL, v17, 0LL, 0);
    if ( !IndependentPages )
      return 0LL;
    ExpNonPagedPoolDescriptor[v17] = IndependentPages;
    ExInitializePoolDescriptor(IndependentPages, 512, v17);
    ExInitializePoolDescriptor(v19 + 256, 0, v20);
    v17 = (unsigned int)(v17 + 1);
    if ( (unsigned int)v17 >= ExpNumberOfNonPagedPools )
      goto LABEL_14;
  }
}
