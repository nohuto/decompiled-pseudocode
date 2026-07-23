/*
 * XREFs of MmMapViewInSystemSpace @ 0x1405A33A0
 * Callers:
 *     LdrpMapResourceFile @ 0x140176CFC (LdrpMapResourceFile.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1405A3050 (KsepShimDbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x1406C6080 (NtGetNlsSectionPtr.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     ExInitializeLeapSecondData @ 0x1407351B0 (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x140887CF8 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140888D98 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1408C9C70 (EtwpCoverageSamplerSetBloomFilter.c)
 *     Phase1InitializationDiscard @ 0x1409B4E10 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x1409BDEBC (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1405E03F4 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_14043A000,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL,
           0LL);
}
