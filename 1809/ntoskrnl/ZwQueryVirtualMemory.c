/*
 * XREFs of ZwQueryVirtualMemory @ 0x1401B85D0
 * Callers:
 *     KeVerifyContextXStateCetU @ 0x1400A1C10 (KeVerifyContextXStateCetU.c)
 *     RtlpHpFixedHeapCreate @ 0x14016B058 (RtlpHpFixedHeapCreate.c)
 *     SepGetStackTraceHash @ 0x1402FE9FC (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140302A88 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030314C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140582AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     LdrpResGetMappingSize @ 0x14068B08C (LdrpResGetMappingSize.c)
 *     WbVerifyVirtualAddressSignature @ 0x1406909A4 (WbVerifyVirtualAddressSignature.c)
 *     RtlCreateHeap @ 0x14070AF40 (RtlCreateHeap.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14088B5E0 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwpTiQueryVad @ 0x1408BD550 (EtwpTiQueryVad.c)
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
