/*
 * XREFs of RtlpMakeXpressCallback @ 0x140165D30
 * Callers:
 *     RtlCompressBufferXpressLzStandard @ 0x140146420 (RtlCompressBufferXpressLzStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x140315C10 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressHuffStandard @ 0x140316330 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressLzMax @ 0x140316B60 (RtlCompressBufferXpressLzMax.c)
 *     RtlDecompressBufferXpressHuffProgress @ 0x140317268 (RtlDecompressBufferXpressHuffProgress.c)
 *     RtlDecompressBufferXpressLzProgress @ 0x140317890 (RtlDecompressBufferXpressLzProgress.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
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
