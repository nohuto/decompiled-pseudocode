/*
 * XREFs of ZwFlushInstructionCache @ 0x1401B9DB0
 * Callers:
 *     WbDecryptWarbirdEncryptionSegmentBlockV0 @ 0x1405845DC (WbDecryptWarbirdEncryptionSegmentBlockV0.c)
 *     sub_1406901F0 @ 0x1406901F0 (sub_1406901F0.c)
 *     DbgkpSendApiMessage @ 0x140810BD4 (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x140810CCC (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x140810DEC (DbgkpSendErrorMessage.c)
 *     sub_1408E56B8 @ 0x1408E56B8 (sub_1408E56B8.c)
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
