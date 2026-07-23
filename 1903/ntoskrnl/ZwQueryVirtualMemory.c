/*
 * XREFs of ZwQueryVirtualMemory @ 0x1401C0530
 * Callers:
 *     KeVerifyContextXStateCetU @ 0x14001B750 (KeVerifyContextXStateCetU.c)
 *     RtlpHpFixedHeapCreate @ 0x140136DF0 (RtlpHpFixedHeapCreate.c)
 *     SepGetStackTraceHash @ 0x14031CD0C (SepGetStackTraceHash.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX@@@Z @ 0x14032053C (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PRIORITIZE_REGIONS_CTX.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140320CD8 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     LdrpResGetMappingSize @ 0x14067B430 (LdrpResGetMappingSize.c)
 *     WbVerifyVirtualAddressSignature @ 0x1406AE564 (WbVerifyVirtualAddressSignature.c)
 *     RtlCreateHeap @ 0x1406E6750 (RtlCreateHeap.c)
 *     PspFreeUserFiberShadowStack @ 0x1408C8D64 (PspFreeUserFiberShadowStack.c)
 *     PspFreeCurrentThreadUserShadowStack @ 0x1408C9A98 (PspFreeCurrentThreadUserShadowStack.c)
 *     EtwpTiQueryVad @ 0x1408FA100 (EtwpTiQueryVad.c)
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
