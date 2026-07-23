/*
 * XREFs of VmFreePreallocationForRangeCreate @ 0x1408B15B0
 * Callers:
 *     <none>
 * Callees:
 *     VmpDecodePreallocationRangeHandle @ 0x1408B1928 (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x1408B197C (VmpFreeMemoryRanges.c)
 */

__int64 VmFreePreallocationForRangeCreate()
{
  unsigned __int64 v0; // rcx
  void *v1; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[15];
  if ( !v0 )
    NT_ASSERT("0");
  v1 = (void *)VmpDecodePreallocationRangeHandle(v0);
  return VmpFreeMemoryRanges(v1);
}
