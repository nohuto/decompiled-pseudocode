/*
 * XREFs of NVMeSyncHostTime @ 0x1C0018AA8
 * Callers:
 *     NVMeControllerInitPart2 @ 0x1C000B228 (NVMeControllerInitPart2.c)
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

__int64 __fastcall NVMeSyncHostTime(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+38h] BYREF

  v3 = 0LL;
  StorPortQuerySystemTime(&v3);
  NVMeAllocateDmaBuffer(a1, 8u);
  return 3238002691LL;
}
