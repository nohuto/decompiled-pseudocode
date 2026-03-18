/*
 * XREFs of NVMeSyncHostTime @ 0x1C0017ACC
 * Callers:
 *     NVMeControllerInitPart3 @ 0x1C0006510 (NVMeControllerInitPart3.c)
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

__int64 __fastcall NVMeSyncHostTime(__int64 a1)
{
  __int64 v3; // [rsp+68h] [rbp+38h] BYREF

  StorPortQuerySystemTime(&v3);
  NVMeAllocateDmaBuffer(a1, 8u);
  return 3238002691LL;
}
