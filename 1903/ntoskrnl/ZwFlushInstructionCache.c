/*
 * XREFs of ZwFlushInstructionCache @ 0x1401C1D30
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405B3DE4 (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     WbCreateHeapExecutedBlock @ 0x1406ADFB0 (WbCreateHeapExecutedBlock.c)
 *     sub_140921658 @ 0x140921658 (sub_140921658.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, ULONG NumberOfBytesToFlush)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle, BaseAddress, *(_QWORD *)&NumberOfBytesToFlush);
}
