/*
 * XREFs of PsEnumProcesses @ 0x140635888
 * Callers:
 *     EtwpDisableTraceProviders @ 0x140665C08 (EtwpDisableTraceProviders.c)
 *     PopEtEnergyTrackerQuery @ 0x1406C01EC (PopEtEnergyTrackerQuery.c)
 *     EtwpProcessThreadImageRundown @ 0x140707754 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x140773BB8 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x1407781E8 (PfTStart.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408B4D54 (PopEtEnergyTrackerSnapshotProcesses.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1408FC5D8 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x140906018 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003FB20 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CC5F0 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x140635FC0 (PsGetNextProcess.c)
 */

__int64 __fastcall PsEnumProcesses(__int64 (__fastcall *a1)(__int64, __int64), __int64 a2)
{
  void *v4; // rcx
  __int64 NextProcess; // rax
  void *v6; // rbx
  int v7; // edi

  v4 = 0LL;
  while ( 1 )
  {
    NextProcess = PsGetNextProcess(v4);
    v6 = (void *)NextProcess;
    if ( !NextProcess )
      break;
    v7 = a1(NextProcess, a2);
    v4 = v6;
    if ( v7 < 0 )
    {
      ObfDereferenceObjectWithTag(v6, 0x6E457350u);
      return (unsigned int)v7;
    }
  }
  return 0LL;
}
