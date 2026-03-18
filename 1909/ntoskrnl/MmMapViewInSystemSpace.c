/*
 * XREFs of MmMapViewInSystemSpace @ 0x1406A3A80
 * Callers:
 *     LdrpMapResourceFile @ 0x14017FF2C (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x140620430 (NtGetNlsSectionPtr.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x14070A6E4 (KsepShimDbMapToMemory.c)
 *     EtwpCoverageEnsureContext @ 0x1407844F8 (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x1408C4728 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C57F4 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409057D8 (EtwpCoverageSamplerSetBloomFilter.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 *     MiInitializeApiSets @ 0x1409F1568 (MiInitializeApiSets.c)
 *     Phase1InitializationDiscard @ 0x140A07524 (Phase1InitializationDiscard.c)
 *     ExInitializeLeapSecondData @ 0x140A0EDE8 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x140647E94 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, (__int64)qword_140464660, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
