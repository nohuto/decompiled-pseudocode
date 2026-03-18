/*
 * XREFs of RtlpMakeXpressCallback @ 0x140144168
 * Callers:
 *     RtlCompressBufferXpressLzStandard @ 0x140143A00 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x1402F8A54 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x1402F90E0 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x1402F989C (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x1402F9F50 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x1402FA524 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C5EB0 (_guard_dispatch_icall.c)
 */

unsigned __int64 __fastcall RtlpMakeXpressCallback(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  unsigned __int64 result; // rax

  (*(void (__fastcall **)(_QWORD))a1)(*(_QWORD *)(a1 + 8));
  result = a3 + *(unsigned int *)(a1 + 16);
  if ( a2 < result )
    return a2;
  return result;
}
