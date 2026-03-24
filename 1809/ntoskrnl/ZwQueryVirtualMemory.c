/*
 * XREFs of ZwQueryVirtualMemory @ 0x1401B85F0
 * Callers:
 *     KeVerifyContextXStateCetU @ 0x1400A1C10 (KeVerifyContextXStateCetU.c)
 *     RtlpHpFixedHeapCreate @ 0x14016B078 (RtlpHpFixedHeapCreate.c)
 *     SepGetStackTraceHash @ 0x1402FEAFC (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140302B88 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030324C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140582AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     LdrpResGetMappingSize @ 0x14068B06C (LdrpResGetMappingSize.c)
 *     WbVerifyVirtualAddressSignature @ 0x140690984 (WbVerifyVirtualAddressSignature.c)
 *     RtlCreateHeap @ 0x14070AF20 (RtlCreateHeap.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14088B5C0 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwpTiQueryVad @ 0x1408BD530 (EtwpTiQueryVad.c)
 * Callees:
 *     <none>
 */

// local variable allocation has failed, the output may be wrong!
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
  return KiServiceInternal(ProcessHandle, BaseAddress, *(_QWORD *)&MemoryInformationClass);
}
