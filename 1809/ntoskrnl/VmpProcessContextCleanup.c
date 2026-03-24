/*
 * XREFs of VmpProcessContextCleanup @ 0x1408B0B28
 * Callers:
 *     PspProcessDelete @ 0x140607590 (PspProcessDelete.c)
 *     VmCreateMemoryRange @ 0x1408B0120 (VmCreateMemoryRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VmpProcessContextCleanup(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 80);
  if ( result )
    NT_ASSERT("ReadNoFence64(&ProcessContext->PreallocateForRangeCreateCount) == 0");
  return result;
}
