/*
 * XREFs of RtlCompressBufferProgress @ 0x1401439F8
 * Callers:
 *     PopAddPagesToCompressedPageSet @ 0x14056BC20 (PopAddPagesToCompressedPageSet.c)
 * Callees:
 *     RtlCompressBufferXpressLzStandard @ 0x140143B20 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1402F8D44 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402F93D0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x1402F9B8C (RtlCompressBufferXpressLzMax.c)
 */

__int64 __fastcall RtlCompressBufferProgress(
        __int16 a1,
        int a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  __int16 v9; // r11
  __int16 v10; // cx

  v9 = (unsigned __int8)a1;
  v10 = a1 & 0xFF00;
  if ( v9 == 3 )
  {
    if ( !v10 )
      return RtlCompressBufferXpressLzStandard(a2, a3, a4, 0x10000, a6, (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL, a8, a9, 4096);
    if ( v10 == 256 )
      return RtlCompressBufferXpressLzMax(
               a2,
               a3,
               a4,
               0x10000,
               a6,
               (void *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               4096);
  }
  else if ( v9 == 4 )
  {
    if ( !v10 )
      return RtlCompressBufferXpressHuffStandard(
               a2,
               a3,
               a4,
               0x10000,
               a6,
               (a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL,
               a8,
               a9,
               4096);
    if ( v10 == 256 )
      return RtlCompressBufferXpressHuffMax(
               a2,
               a3,
               a4,
               0x10000,
               a6,
               (void *)((a7 + 7) & 0xFFFFFFFFFFFFFFF8uLL),
               a8,
               a9,
               4096);
  }
  return 3221226079LL;
}
