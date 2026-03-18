/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C0014E38
 * Callers:
 *     NVMeInitStreams @ 0x1C000E75C (NVMeInitStreams.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0002AF4 (SetPrpFromBuffer.c)
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0004E50 (SrbAssignQueueId.c)
 *     NVMeZeroMemory @ 0x1C00051D0 (NVMeZeroMemory.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1)
{
  NVMeAllocateDmaBuffer(a1, 0x40u);
  return 3238002691LL;
}
