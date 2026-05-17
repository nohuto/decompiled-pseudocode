/*
 * XREFs of RtlpMakeXpressCallback @ 0x18010A204
 * Callers:
 *     RtlCompressBufferXpressHuffStandard @ 0x18005E580 (RtlCompressBufferXpressHuffStandard.c)
 *     RtlCompressBufferXpressHuffMax @ 0x180108D24 (RtlCompressBufferXpressHuffMax.c)
 *     RtlCompressBufferXpressLzMax @ 0x1801094C8 (RtlCompressBufferXpressLzMax.c)
 *     RtlCompressBufferXpressLzStandard @ 0x180109B10 (RtlCompressBufferXpressLzStandard.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A08B0 (_guard_dispatch_icall_nop.c)
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
