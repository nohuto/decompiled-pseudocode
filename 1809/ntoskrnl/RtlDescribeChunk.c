/*
 * XREFs of RtlDescribeChunk @ 0x140891CD0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlDescribeChunk(
        USHORT CompressionFormat,
        PUCHAR *CompressedBuffer,
        PUCHAR EndOfCompressedBufferPlus1,
        PUCHAR *ChunkBuffer,
        PULONG ChunkSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 4u )
    return ((__int64 (__fastcall *)(PUCHAR *, PUCHAR, PUCHAR *, PULONG))RtlDescribeChunkProcs[(unsigned __int8)CompressionFormat])(
             CompressedBuffer,
             EndOfCompressedBufferPlus1,
             ChunkBuffer,
             ChunkSize);
  return -1073741217;
}
