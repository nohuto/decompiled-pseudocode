/*
 * XREFs of NVMeDirectiveIdentifyReturnParameters @ 0x1C0014668
 * Callers:
 *     NVMeInitStreams @ 0x1C000BD00 (NVMeInitStreams.c)
 * Callees:
 *     SetPrpFromBuffer @ 0x1C0001DDC (SetPrpFromBuffer.c)
 *     NVMeZeroMemory @ 0x1C0001FDC (NVMeZeroMemory.c)
 *     ProcessCommand @ 0x1C0002018 (ProcessCommand.c)
 *     SrbAssignQueueId @ 0x1C0003DCC (SrbAssignQueueId.c)
 *     NVMeFreeDmaBuffer @ 0x1C0003F3C (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C0003F74 (NVMeAllocateDmaBuffer.c)
 *     memset @ 0x1C0005980 (memset.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C0018FF8 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeDirectiveIdentifyReturnParameters(__int64 a1)
{
  NVMeAllocateDmaBuffer(a1, 0x40u);
  return 3238002691LL;
}
