/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x14066EBA0
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x14011D79C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017DC04 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x14017F83C (LdrpMapResourceFile.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140180250 (LdrUnloadAlternateResourceModuleEx.c)
 *     AlpcViewDestroyProcedure @ 0x14064C310 (AlpcViewDestroyProcedure.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x14066E880 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     ExUpdateLicenseDataInternal @ 0x1406ABBE0 (ExUpdateLicenseDataInternal.c)
 *     MmUnmapViewInSessionSpace @ 0x1406EC330 (MmUnmapViewInSessionSpace.c)
 *     KsepShimDbMapToMemory @ 0x140708904 (KsepShimDbMapToMemory.c)
 *     KsepShimDbUnmapFromMemory @ 0x140708AA4 (KsepShimDbUnmapFromMemory.c)
 *     EtwpCoverageEnsureContext @ 0x140782228 (EtwpCoverageEnsureContext.c)
 *     PspDeleteServerSiloGlobals @ 0x1408C551C (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x14090505C (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x140905E78 (EtwpCoverageSamplerSetBloomFilter.c)
 *     NtMapCMFModule @ 0x140916F00 (NtMapCMFModule.c)
 *     ExInitializeLeapSecondData @ 0x140A0E650 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003ED30 (MiGetSystemRegionType.c)
 *     MiRemoveFromSystemSpace @ 0x1400A8C3C (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  ULONG_PTR v1; // rdx
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_140464960;
LABEL_3:
    MiRemoveFromSystemSpace(v2, v1, 1);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v2 = (_QWORD *)(Process[1].ActiveProcessors.Bitmap[1] + 192);
    goto LABEL_3;
  }
  return -1073741799;
}
