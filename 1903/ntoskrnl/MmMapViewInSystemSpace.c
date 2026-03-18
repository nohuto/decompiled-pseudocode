/*
 * XREFs of MmMapViewInSystemSpace @ 0x1406AD0D0
 * Callers:
 *     LdrpMapResourceFile @ 0x14017F83C (LdrpMapResourceFile.c)
 *     NtGetNlsSectionPtr @ 0x14061E910 (NtGetNlsSectionPtr.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x140708904 (KsepShimDbMapToMemory.c)
 *     EtwpCoverageEnsureContext @ 0x140782228 (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x1408C4E58 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x1408C5F14 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140905E78 (EtwpCoverageSamplerSetBloomFilter.c)
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 *     MiInitializeApiSets @ 0x1409F1658 (MiInitializeApiSets.c)
 *     Phase1InitializationDiscard @ 0x140A07008 (Phase1InitializationDiscard.c)
 *     ExInitializeLeapSecondData @ 0x140A0E650 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x14066E434 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace((__int64)Section, (__int64)qword_140464960, MappedBase, ViewSize, &v4, 0LL, 0LL);
}
