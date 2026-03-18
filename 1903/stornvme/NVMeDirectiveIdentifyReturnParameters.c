/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C0014718
 * Callers:
 *     NVMeInitStreams @ 0x1C000BDF0 (NVMeInitStreams.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0001DDC (SetPrpFromBuffer.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C000386C (SrbAssignQueueId.c)
 *     NVMeFreeDmaBuffer @ 0x1C00039DC (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003A14 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005400 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00190A8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1)
{
  NVMeAllocateDmaBuffer(a1, 0x40u);
  return 3238002691LL;
}
