/*
 * XREFs of MmMapViewInSystemSpace @ 0x1405A23A0
 * Callers:
 *     LdrpMapResourceFile @ 0x140176BFC (LdrpMapResourceFile.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     NtGetNlsSectionPtr @ 0x1406C4DE0 (NtGetNlsSectionPtr.c)
 *     NtMapCMFModule @ 0x1407067A0 (NtMapCMFModule.c)
 *     ExInitializeLeapSecondData @ 0x140733FC0 (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x14075B044 (EtwpCoverageEnsureContext.c)
 *     PspApiSetCopyToSystemSpace @ 0x140886A98 (PspApiSetCopyToSystemSpace.c)
 *     PspSiloInitializeUserSharedData @ 0x140887B38 (PspSiloInitializeUserSharedData.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1408C89B0 (EtwpCoverageSamplerSetBloomFilter.c)
 *     Phase1InitializationDiscard @ 0x1409B3E10 (Phase1InitializationDiscard.c)
 *     MiInitializeApiSets @ 0x1409BCEBC (MiInitializeApiSets.c)
 * Callees:
 *     MiMapViewInSystemSpace @ 0x1405DF3F4 (MiMapViewInSystemSpace.c)
 */

NTSTATUS __stdcall MmMapViewInSystemSpace(PVOID Section, PVOID *MappedBase, PSIZE_T ViewSize)
{
  __int64 v4; // [rsp+68h] [rbp+20h] BYREF

  v4 = 0LL;
  return MiMapViewInSystemSpace(
           (_DWORD)Section,
           (unsigned int)&unk_140438F40,
           (_DWORD)MappedBase,
           (_DWORD)ViewSize,
           (__int64)&v4,
           0LL,
           0LL);
}
