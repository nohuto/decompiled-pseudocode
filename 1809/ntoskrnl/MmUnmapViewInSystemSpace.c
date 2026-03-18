/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x1405DF390
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400F404C (LdrLoadAlternateResourceModuleEx.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x14016C8E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x140174B20 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x140176BDC (LdrpMapResourceFile.c)
 *     ExUpdateLicenseDataInternal @ 0x1405A0AD0 (ExUpdateLicenseDataInternal.c)
 *     KsepShimDbMapToMemory @ 0x1405A2050 (KsepShimDbMapToMemory.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1405F3130 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     AlpcViewDestroyProcedure @ 0x140616E90 (AlpcViewDestroyProcedure.c)
 *     KsepShimDbUnmapFromMemory @ 0x1406835F0 (KsepShimDbUnmapFromMemory.c)
 *     MmUnmapViewInSessionSpace @ 0x1406CB4A0 (MmUnmapViewInSessionSpace.c)
 *     NtMapCMFModule @ 0x1407067C0 (NtMapCMFModule.c)
 *     ExInitializeLeapSecondData @ 0x140733FE0 (ExInitializeLeapSecondData.c)
 *     EtwpCoverageEnsureContext @ 0x14075B064 (EtwpCoverageEnsureContext.c)
 *     PspDeleteServerSiloGlobals @ 0x140887198 (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x1408C7BC8 (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1408C89D0 (EtwpCoverageSamplerSetBloomFilter.c)
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
    v2 = &unk_140438F40;
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
