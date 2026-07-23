/*
 * XREFs of PsEnumProcesses @ 0x1405B2AFC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1405C3530 (EtwpDisableTraceProviders.c)
 *     PopEtEnergyTrackerQuery @ 0x14069D39C (PopEtEnergyTrackerQuery.c)
 *     EtwpProcessThreadImageRundown @ 0x140727650 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x140750624 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x140753C6C (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x14075D570 (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1408C0AC0 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1408C9E10 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C6030 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1405B31E0 (PsGetNextProcess.c)
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
