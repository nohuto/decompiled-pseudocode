/*
 * XREFs of ZwQueryVirtualMemory @ 0x1401C10B0
 * Callers:
 *     KeVerifyContextXStateCetU @ 0x14001BB40 (KeVerifyContextXStateCetU.c)
 *     RtlpHpFixedHeapCreate @ 0x140137770 (RtlpHpFixedHeapCreate.c)
 *     SepGetStackTraceHash @ 0x14031C75C (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14031FF8C (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140320728 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x140676720 (LdrpResGetMappingSize.c)
 *     WbVerifyVirtualAddressSignature @ 0x1406B0494 (WbVerifyVirtualAddressSignature.c)
 *     RtlCreateHeap @ 0x1406E7930 (RtlCreateHeap.c)
 *     PspFreeUserFiberShadowStack @ 0x1408C8644 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408C9378 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwpTiQueryVad @ 0x1408F9AE0 (EtwpTiQueryVad.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  _disable();
  __readeflags();
  return KiServiceInternal(ProcessHandle);
}
