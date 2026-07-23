/*
 * XREFs of ZwUnlockVirtualMemory @ 0x1401BBB70
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14014B8A4 (SmKmStoreHelperCommandProcess.c)
 *     CmSiUnlockViewOfSection @ 0x14016AD30 (CmSiUnlockViewOfSection.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030343C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     VmColdPagesHint @ 0x14030B960 (VmColdPagesHint.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwUnlockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToUnlock,
        ULONG MapType)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
