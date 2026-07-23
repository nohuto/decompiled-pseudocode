/*
 * XREFs of ZwProtectVirtualMemory @ 0x18009D890
 * Callers:
 *     RtlpAllocateUserBlockFromHeap @ 0x1800184BC (RtlpAllocateUserBlockFromHeap.c)
 *     LdrInitSecurityCookie @ 0x180020514 (LdrInitSecurityCookie.c)
 *     LdrpCfgProcessLoadConfig @ 0x18002088C (LdrpCfgProcessLoadConfig.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180020F00 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrpChangeMrdataProtection @ 0x180032A38 (LdrpChangeMrdataProtection.c)
 *     RtlpFreeHeapInternal @ 0x180040B50 (RtlpFreeHeapInternal.c)
 *     RtlpProtectHeap @ 0x180048320 (RtlpProtectHeap.c)
 *     RtlpFreeUserBlockToHeap @ 0x18004AEDC (RtlpFreeUserBlockToHeap.c)
 *     RtlpLowFragHeapFlushCaches @ 0x18004D0C4 (RtlpLowFragHeapFlushCaches.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x18005551C (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpDoPostSnapWork @ 0x1800558D0 (LdrpDoPostSnapWork.c)
 *     LdrpSetProtection @ 0x18008290C (LdrpSetProtection.c)
 *     LdrpCorFixupImage @ 0x1800CEEB8 (LdrpCorFixupImage.c)
 *     AVrfpSnapDllImports @ 0x1800DA6F4 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x1800DA9B4 (AvrfMiniLoadDll.c)
 *     RtlResetStackOverflow @ 0x1800DD728 (RtlResetStackOverflow.c)
 *     RtlpSubSegmentDebugInitialize @ 0x1801079A0 (RtlpSubSegmentDebugInitialize.c)
 *     RtlpHpHeapProtect @ 0x18010A8E4 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x18010ADE4 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x18010BA68 (RtlpHpSegProtect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
