/*
 * XREFs of ZwQueryVirtualMemory @ 0x18009D2F0
 * Callers:
 *     LdrpGetImageSize @ 0x18001A870 (LdrpGetImageSize.c)
 *     RtlpGetImageBaseViaQueryVirtualMemory @ 0x18001E9BC (RtlpGetImageBaseViaQueryVirtualMemory.c)
 *     RtlpWalkFrameChain @ 0x18001F4F0 (RtlpWalkFrameChain.c)
 *     RtlpHpHeapValidateProtection @ 0x180047CBC (RtlpHpHeapValidateProtection.c)
 *     RtlpProtectHeap @ 0x180048320 (RtlpProtectHeap.c)
 *     RtlCreateHeap @ 0x1800491A0 (RtlCreateHeap.c)
 *     RtlpGetTargetRvaFlag @ 0x1800553F8 (RtlpGetTargetRvaFlag.c)
 *     LdrResSearchResource @ 0x180056800 (LdrResSearchResource.c)
 *     LdrpResGetMappingSize @ 0x1800587E0 (LdrpResGetMappingSize.c)
 *     LdrpCheckPagesForTampering @ 0x180072A00 (LdrpCheckPagesForTampering.c)
 *     LdrpTouchThreadStack @ 0x1800818E0 (LdrpTouchThreadStack.c)
 *     RtlLockCurrentThread @ 0x180082180 (RtlLockCurrentThread.c)
 *     LdrpProtectAndRelocateImage @ 0x180082830 (LdrpProtectAndRelocateImage.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x180083470 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     RtlUnlockCurrentThread @ 0x1800864E0 (RtlUnlockCurrentThread.c)
 *     LdrIsEnclaveAddress @ 0x1800CD6C0 (LdrIsEnclaveAddress.c)
 *     LdrpCaptureCriticalThunks @ 0x1800D4F24 (LdrpCaptureCriticalThunks.c)
 *     RtlResetStackOverflow @ 0x1800DD728 (RtlResetStackOverflow.c)
 *     RtlUnlockHeapManagerForCloning @ 0x1800EF9D8 (RtlUnlockHeapManagerForCloning.c)
 *     RtlFlushSecureMemoryCache @ 0x1800F4190 (RtlFlushSecureMemoryCache.c)
 *     RtlpScanProcessVirtualMemory @ 0x1800F4BFC (RtlpScanProcessVirtualMemory.c)
 *     RtlGetNonVolatileToken @ 0x1800F60A0 (RtlGetNonVolatileToken.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x1800F7624 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlDebugCreateHeap @ 0x180104BF8 (RtlDebugCreateHeap.c)
 *     RtlpHpHeapProtect @ 0x18010A8E4 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010ADE4 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010BA68 (RtlpHpSegProtect.c)
 *     PsspCaptureAuxiliaryPages @ 0x180111660 (PsspCaptureAuxiliaryPages.c)
 *     PsspCaptureVaSpaceInformation @ 0x1801119F0 (PsspCaptureVaSpaceInformation.c)
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
