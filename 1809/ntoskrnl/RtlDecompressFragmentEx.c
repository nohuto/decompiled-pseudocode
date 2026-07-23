/*
 * XREFs of RtlDecompressFragmentEx @ 0x140135FB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 */

NTSTATUS __cdecl RtlDecompressFragmentEx(
        USHORT CompressionFormat,
        PUCHAR UncompressedFragment,
        ULONG UncompressedFragmentSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG FragmentOffset,
        ULONG UncompressedChunkSize,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat > 4u )
    return -1073741217;
  return ((__int64 (__fastcall *)(PUCHAR, _QWORD, PUCHAR, _QWORD, ULONG, ULONG, PULONG, PVOID))RtlDecompressFragmentProcs[(unsigned __int8)CompressionFormat])(
           UncompressedFragment,
           UncompressedFragmentSize,
           CompressedBuffer,
           CompressedBufferSize,
           FragmentOffset,
           UncompressedChunkSize,
           FinalUncompressedSize,
           WorkSpace);
}
