/*
 * XREFs of ZwQueryVirtualMemory @ 0x1401B8750
 * Callers:
 *     KeVerifyContextXStateCetU @ 0x1400A1B50 (KeVerifyContextXStateCetU.c)
 *     RtlpHpFixedHeapCreate @ 0x14016B178 (RtlpHpFixedHeapCreate.c)
 *     SepGetStackTraceHash @ 0x1402FECEC (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x140302D78 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14030343C (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x140583AF0 (EtwTimLogRedirectionTrustPolicy.c)
 *     LdrpResGetMappingSize @ 0x14068C22C (LdrpResGetMappingSize.c)
 *     WbVerifyVirtualAddressSignature @ 0x140691B44 (WbVerifyVirtualAddressSignature.c)
 *     RtlCreateHeap @ 0x14070C1C0 (RtlCreateHeap.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x14088C820 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwpTiQueryVad @ 0x1408BE7F0 (EtwpTiQueryVad.c)
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
