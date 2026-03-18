/*
 * XREFs of VmpProcessContextCleanup @ 0x1408ED8D8
 * Callers:
 *     PspProcessDelete @ 0x140651970 (PspProcessDelete.c)
 *     VmCreateMemoryRange @ 0x1408ECBF0 (VmCreateMemoryRange.c)
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
