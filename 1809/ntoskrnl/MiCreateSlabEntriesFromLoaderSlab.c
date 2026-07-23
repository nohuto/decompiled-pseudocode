/*
 * XREFs of MiCreateSlabEntriesFromLoaderSlab @ 0x1409F845C
 * Callers:
 *     MiCreateSlabAllocationsFromLoaderBlock @ 0x1409BA674 (MiCreateSlabAllocationsFromLoaderBlock.c)
 * Callees:
 *     MiUpdateLargePageBitMap @ 0x140027BE8 (MiUpdateLargePageBitMap.c)
 *     RtlSetAllBits @ 0x14002BDF0 (RtlSetAllBits.c)
 *     KeBugCheckEx @ 0x1401BBD20 (KeBugCheckEx.c)
 *     memset @ 0x1401D1980 (memset.c)
 *     MiInsertSlabEntry @ 0x1402C2C94 (MiInsertSlabEntry.c)
 *     ExAllocatePoolWithTag @ 0x14034C010 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiCreateSlabEntriesFromLoaderSlab(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbp
  unsigned __int64 v4; // rsi
  __int64 v6; // rbx
  PVOID PoolWithTag; // rax
  __int64 v8; // rdi
  int v9; // ecx

  v3 = a3;
  v4 = a2;
  v6 = 48 * a2 - 0x58000000000LL;
  if ( !a3 )
    return 0LL;
  while ( 1 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x80uLL, 0x6553694Du);
    v8 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
      break;
    memset(PoolWithTag, 0, 0x80uLL);
    *(_DWORD *)(v8 + 40) = 512;
    *(_QWORD *)(v8 + 48) = v8 + 56;
    *(_QWORD *)(v8 + 32) = v4 + 511;
    *(_QWORD *)(v8 + 24) = v4;
    RtlSetAllBits((PRTL_BITMAP)(v8 + 40));
    v9 = 512;
    do
    {
      if ( !*(_QWORD *)(v6 + 8) )
        --qword_14043C0D8;
      v6 += 48LL;
      --v9;
    }
    while ( v9 );
    if ( _bittest64((const signed __int64 *)qword_14043F2D8, v4 >> 9) )
      KeBugCheckEx(0x1Au, 0x3030311uLL, *(_QWORD *)(v8 + 24), 0LL, 0LL);
    _bittestandset64((signed __int64 *)qword_14043F2D8, v4 >> 9);
    MiUpdateLargePageBitMap((__int64)&MiSystemPartition, v4, 0x200uLL, 1, 0);
    MiInsertSlabEntry((__int64)&MiSystemPartition, a1, v8);
    v4 += 512LL;
    v3 -= 512LL;
    if ( !v3 )
      return 0LL;
  }
  return 3221225626LL;
}
