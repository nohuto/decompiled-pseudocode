/*
 * XREFs of SharedAlloc @ 0x1C0090720
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall SharedAlloc(SIZE_T Size)
{
  return RtlAllocateHeap(gpvSharedAlloc, 0, (unsigned int)Size);
}
