/*
 * XREFs of ZwFlushInstructionCache @ 0x1401B9F30
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405855DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_140691390 @ 0x140691390 (sub_140691390.c)
 *     DbgkpSendApiMessage @ 0x140811DB4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140811EAC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140811FCC (DbgkpSendErrorMessage.c)
 *     sub_1408E6958 @ 0x1408E6958 (sub_1408E6958.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushInstructionCache(HANDLE ProcessHandle, PVOID BaseAddress, ULONG NumberOfBytesToFlush)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
