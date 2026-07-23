/*
 * XREFs of MiCreateBootSlabEntries @ 0x140A3CC20
 * Callers:
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x140A22B38 (MiCreateSlabAllocationsFromLoaderBlock.c)
 *     MiCreateSlabAllocationsFromKernelHal @ 0x140A3CDA0 (MiCreateSlabAllocationsFromKernelHal.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x1400DD42C (MiUpdateLargePageBitMap.c)
 *     RtlSetAllBits @ 0x1401075D0 (RtlSetAllBits.c)
 *     KeBugCheckEx @ 0x1401C3B20 (KeBugCheckEx.c)
 *     memset @ 0x1401D6BC0 (memset.c)
 *     MiInsertSlabEntry @ 0x1402DC8F4 (MiInsertSlabEntry.c)
 *     ExAllocatePoolWithTag @ 0x14036E010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateBootSlabEntries(__int64 a1, unsigned __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // r14
  unsigned __int64 v6; // rsi
  __int64 v8; // rdi
  PVOID PoolWithTag; // rax
  __int64 v10; // rbx
  int v11; // ecx

  v5 = a3;
  v6 = a2;
  v8 = 48 * a2 - 0x58000000000LL;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x90uLL, 0x6553694Du);
    v10 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, 0x90uLL);
    *(_QWORD *)(v10 + 40) = a1;
    *(_DWORD *)(v10 + 48) = 512;
    *(_QWORD *)(v10 + 56) = v10 + 64;
    *(_QWORD *)(v10 + 24) = v6;
    *(_QWORD *)(v10 + 32) = v6 + 511;
    RtlSetAllBits((PRTL_BITMAP)(v10 + 48));
    if ( a4 )
      *(_DWORD *)(v10 + 140) |= 1u;
    if ( !*(_DWORD *)(a1 + 48) )
    {
      v11 = 512;
      do
      {
        if ( !*(_QWORD *)(v8 + 8) )
          --qword_140466A38;
        v8 += 48LL;
        --v11;
      }
      while ( v11 );
    }
    if ( _bittest64((const signed __int64 *)qword_14046A040, v6 >> 9) )
      KeBugCheckEx(0x1Au, 0x3030311uLL, *(_QWORD *)(v10 + 24), *(int *)(a1 + 48), 0LL);
    _bittestandset64((signed __int64 *)qword_14046A040, v6 >> 9);
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v6, 0x200uLL, 1, 0);
    MiInsertSlabEntry((__int64)&MiSystemPartition, a1, v10);
    v6 += 512LL;
    v5 -= 512LL;
    if ( !v5 )
      return 0LL;
  }
  return 3221225626LL;
}
