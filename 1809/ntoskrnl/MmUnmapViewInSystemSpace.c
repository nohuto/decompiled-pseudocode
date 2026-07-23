/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1405E0390
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F40EC (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016CA00 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174C40 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x140176CFC (LdrpMapResourceFile.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A1AD0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1405A3050 (KsepShimDbMapToMemory.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F4130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     AlpcViewDestroyProcedure @ 0x140617E90 (AlpcViewDestroyProcedure.c)
 *     KsepShimDbUnmapFromMemory @ 0x140684790 (KsepShimDbUnmapFromMemory.c)
 *     MmUnmapViewInSessionSpace @ 0x1406CC720 (MmUnmapViewInSessionSpace.c)
 *     NtMapCMFModule @ 0x140707A40 (NtMapCMFModule.c)
 *     ExInitializeLeapSecondData @ 0x1407351B0 (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x14075C234 (EtwpCoverageEnsureContext.c)
 *     PspDeleteServerSiloGlobals @ 0x1408883D8 (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x1408C8E68 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1408C9C70 (EtwpCoverageSamplerSetBloomFilter.c)
 * Callees:
 *     MiRemoveFromSystemSpace @ 0x140026F90 (MiRemoveFromSystemSpace.c)
 *     MiGetSystemRegionType @ 0x14004EC30 (MiGetSystemRegionType.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  ULONG_PTR v1; // rdx
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = &unk_14043A000;
LABEL_3:
    MiRemoveFromSystemSpace(v2, v1, 1);
    return 0;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( (Process[1].DirectoryTableBase & 0x1000000000000LL) != 0 )
  {
    v2 = (_QWORD *)(Process[1].ActiveProcessors.Bitmap[2] + 2944);
    goto LABEL_3;
  }
  return -1073741799;
}
