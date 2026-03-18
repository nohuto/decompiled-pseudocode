/*
 * XREFs of NVMeReenumerateNameSpaceIdentifyWorkItem @ 0x1C0006BD0
 * Callers:
 *     <none>
 * Callees:
 *     ProcessCommand @ 0x1C0002B4C (ProcessCommand.c)
 *     NVMeFreeDmaBuffer @ 0x1C0005234 (NVMeFreeDmaBuffer.c)
 *     NVMeAllocateDmaBuffer @ 0x1C00053AC (NVMeAllocateDmaBuffer.c)
 *     NVMeFreeNamespaceEnumerationContext @ 0x1C00068EC (NVMeFreeNamespaceEnumerationContext.c)
 *     NVMeReenumerateNameSpaceCancelMerge @ 0x1C0006A38 (NVMeReenumerateNameSpaceCancelMerge.c)
 *     NVMeReenumerateNameSpaceCompare @ 0x1C0006A8C (NVMeReenumerateNameSpaceCompare.c)
 *     NVMeReenumerateNameSpaceMerge @ 0x1C00070CC (NVMeReenumerateNameSpaceMerge.c)
 *     NVMeReenumerateNameSpaceRescan @ 0x1C0007308 (NVMeReenumerateNameSpaceRescan.c)
 *     NVMeReenumerateNameSpaceWaitForAllIOComplete @ 0x1C00075B0 (NVMeReenumerateNameSpaceWaitForAllIOComplete.c)
 *     NVMeReenumerateReissueGetLogNamespaceChangeList @ 0x1C0007714 (NVMeReenumerateReissueGetLogNamespaceChangeList.c)
 *     memset @ 0x1C0007F80 (memset.c)
 *     NVMeVersionCheck @ 0x1C0017C84 (NVMeVersionCheck.c)
 *     WaitForCommandCompleteWithCustomTimeout @ 0x1C00180C4 (WaitForCommandCompleteWithCustomTimeout.c)
 */

__int64 __fastcall NVMeReenumerateNameSpaceIdentifyWorkItem(__int64 a1, __int64 a2)
{
  __int64 v4; // r9

  NVMeAllocateDmaBuffer(a1, 0x1000u);
  NVMeFreeNamespaceEnumerationContext(a1, a2, 1, v4);
  _interlockedbittestandreset((volatile signed __int32 *)(a1 + 3724), 1u);
  ++*(_DWORD *)(a1 + 3792);
  return StorPortExtendedFunction(85LL, a1, 0LL, 1LL);
}
