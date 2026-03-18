/*
 * XREFs of RtlDecompressBuffer @ 0x14030AA20
 * Callers:
 *     RtlDecompressChunks @ 0x1408CE380 (RtlDecompressChunks.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 */

NTSTATUS __stdcall RtlDecompressBuffer(
        USHORT CompressionFormat,
        PUCHAR UncompressedBuffer,
        ULONG UncompressedBufferSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        PULONG FinalUncompressedSize)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 4u )
    return ((__int64 (__fastcall *)(PUCHAR, _QWORD, PUCHAR, _QWORD, _DWORD, PULONG, _QWORD))RtlDecompressBufferProcs[(unsigned __int8)CompressionFormat])(
             UncompressedBuffer,
             UncompressedBufferSize,
             CompressedBuffer,
             CompressedBufferSize,
             0,
             FinalUncompressedSize,
             0LL);
  return -1073741217;
}
