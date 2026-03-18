/*
 * XREFs of VmFreePreallocationForRangeCreate @ 0x1408ED500
 * Callers:
 *     <none>
 * Callees:
 *     VmpDecodePreallocationRangeHandle @ 0x1408EDB80 (VmpDecodePreallocationRangeHandle.c)
 *     VmpFreeMemoryRanges @ 0x1408EDBD4 (VmpFreeMemoryRanges.c)
 */

__int64 VmFreePreallocationForRangeCreate()
{
  unsigned __int64 v0; // rcx
  void *v1; // rax

  v0 = KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[19];
  if ( !v0 )
    NT_ASSERT("0");
  v1 = (void *)VmpDecodePreallocationRangeHandle(v0);
  return VmpFreeMemoryRanges(v1);
}
