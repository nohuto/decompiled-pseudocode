/*
 * XREFs of ZwQueryVirtualMemory @ 0x1800A0760
 * Callers:
 *     RtlpWalkFrameChain @ 0x1800038B0 (RtlpWalkFrameChain.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x180009B38 (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     LdrpGetImageSize @ 0x18000A2D4 (LdrpGetImageSize.c)
 *     RtlpGetTargetRvaFlag @ 0x18002B0A4 (RtlpGetTargetRvaFlag.c)
 *     LdrResSearchResource @ 0x180037450 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x180039780 (LdrpResGetMappingSize.c)
 *     RtlCreateHeap @ 0x18005F7E0 (RtlCreateHeap.c)
 *     RtlpProtectHeap @ 0x180060780 (RtlpProtectHeap.c)
 *     RtlpHpHeapValidateProtection @ 0x180060C34 (RtlpHpHeapValidateProtection.c)
 *     LdrpCheckPagesForTampering @ 0x180078DC8 (LdrpCheckPagesForTampering.c)
 *     LdrpTouchThreadStack @ 0x180085B48 (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x1800865B0 (RtlLockCurrentThread.c)
 *     LdrpProtectAndRelocateImage @ 0x1800873B4 (LdrpProtectAndRelocateImage.c)
 *     RtlUnlockCurrentThread @ 0x18008A0B0 (RtlUnlockCurrentThread.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x18008F564 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrIsEnclaveAddress @ 0x1800CEE1C (LdrIsEnclaveAddress.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D7094 (LdrpCaptureCriticalThunks.c)
 *     RtlResetStackOverflow @ 0x1800DFABC (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800F2A30 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F6D90 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F77FC (RtlpScanProcessVirtualMemory.c)
 *     RtlGetNonVolatileToken @ 0x1800F8440 (RtlGetNonVolatileToken.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F9934 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlDebugCreateHeap @ 0x1801076BC (RtlDebugCreateHeap.c)
 *     RtlpHpHeapProtect @ 0x18010C7A4 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010D2DC (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010DEA4 (RtlpHpSegProtect.c)
 *     PsspCaptureAuxiliaryPages @ 0x18011274C (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x180112ADC (PsspCaptureVaSpaceInformation.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
