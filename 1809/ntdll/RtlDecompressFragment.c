/*
 * XREFs of RtlDecompressFragment @ 0x1800F4D20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800A3D00 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __cdecl RtlDecompressFragment(
        USHORT CompressionFormat,
        PUCHAR UncompressedFragment,
        ULONG UncompressedFragmentSize,
        PUCHAR CompressedBuffer,
        ULONG CompressedBufferSize,
        ULONG FragmentOffset,
        PULONG FinalUncompressedSize,
        PVOID WorkSpace)
{
  if ( (unsigned __int8)CompressionFormat < 2u )
    return -1073741811;
  if ( (unsigned __int8)CompressionFormat <= 4u )
    return RtlDecompressFragmentProcs[(unsigned __int8)CompressionFormat](
             UncompressedFragment,
             UncompressedFragmentSize,
             CompressedBuffer,
             CompressedBufferSize,
             FragmentOffset,
             0,
             FinalUncompressedSize,
             WorkSpace);
  return -1073741217;
}
