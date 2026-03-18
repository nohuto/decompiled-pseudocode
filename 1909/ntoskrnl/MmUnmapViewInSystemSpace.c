/*
 * XREFs of MmUnmapViewInSystemSpace @ 0x140648600
 * Callers:
 *     LdrLoadAlternateResourceModuleEx @ 0x1400DFAA0 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14017E2F4 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrpMapResourceFile @ 0x14017FF2C (LdrpMapResourceFile.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140180940 (LdrUnloadAlternateResourceModuleEx.c)
 *     MiUpdateCfgSystemWideBitmapWorker @ 0x1406482E0 (MiUpdateCfgSystemWideBitmapWorker.c)
 *     AlpcViewDestroyProcedure @ 0x14065FFA0 (AlpcViewDestroyProcedure.c)
 *     ExUpdateLicenseDataInternal @ 0x1406A2590 (ExUpdateLicenseDataInternal.c)
 *     MmUnmapViewInSessionSpace @ 0x1406ED5F0 (MmUnmapViewInSessionSpace.c)
 *     KsepShimDbMapToMemory @ 0x14070A6E4 (KsepShimDbMapToMemory.c)
 *     KsepShimDbUnmapFromMemory @ 0x14070A884 (KsepShimDbUnmapFromMemory.c)
 *     EtwpCoverageEnsureContext @ 0x1407844F8 (EtwpCoverageEnsureContext.c)
 *     PspDeleteServerSiloGlobals @ 0x1408C4DFC (PspDeleteServerSiloGlobals.c)
 *     EtwpCoverageSamplerCleanup @ 0x1409049BC (EtwpCoverageSamplerCleanup.c)
 *     EtwpCoverageSamplerSetBloomFilter @ 0x1409057D8 (EtwpCoverageSamplerSetBloomFilter.c)
 *     NtMapCMFModule @ 0x140916960 (NtMapCMFModule.c)
 *     ExInitializeLeapSecondData @ 0x140A0EDE8 (ExInitializeLeapSecondData.c)
 * Callees:
 *     MiGetSystemRegionType @ 0x14003EA70 (MiGetSystemRegionType.c)
 *     MiRemoveFromSystemSpace @ 0x140097494 (MiRemoveFromSystemSpace.c)
 */

NTSTATUS __stdcall MmUnmapViewInSystemSpace(PVOID MappedBase)
{
  ULONG_PTR v1; // rdx
  _QWORD *v2; // rcx
  _KPROCESS *Process; // rcx

  if ( (unsigned int)MiGetSystemRegionType((unsigned __int64)MappedBase) != 1 )
  {
    v2 = qword_140464660;
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
