/*
 * XREFs of PsEnumProcesses @ 0x140638AD8
 * Callers:
 *     EtwpDisableTraceProviders @ 0x14069301C (EtwpDisableTraceProviders.c)
 *     PopEtEnergyTrackerQuery @ 0x1406BF04C (PopEtEnergyTrackerQuery.c)
 *     EtwpProcessThreadImageRundown @ 0x140709534 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x140777198 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x14077B7C8 (PfTStart.c)
 *     PopEtEnergyTrackerSnapshotProcesses @ 0x1408B4624 (PopEtEnergyTrackerSnapshotProcesses.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1408FBFB8 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x140905978 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14003F860 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1401CD170 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x140639220 (PsGetNextProcess.c)
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
