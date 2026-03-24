/*
 * XREFs of PsEnumProcesses @ 0x1405B1AFC
 * Callers:
 *     EtwpDisableTraceProviders @ 0x1405C2530 (EtwpDisableTraceProviders.c)
 *     PopEtEnergyTrackerQuery @ 0x14069C1DC (PopEtEnergyTrackerQuery.c)
 *     EtwpProcessThreadImageRundown @ 0x1407263B0 (EtwpProcessThreadImageRundown.c)
 *     PopInitializeHeteroProcessors @ 0x14074F434 (PopInitializeHeteroProcessors.c)
 *     PfTStart @ 0x140752A7C (PfTStart.c)
 *     PopEtEnergyTrackerCreate @ 0x14075C380 (PopEtEnergyTrackerCreate.c)
 *     PsShutdownSystem @ 0x14088AFA4 (PsShutdownSystem.c)
 *     EtwpPsProvCaptureState @ 0x1408BF800 (EtwpPsProvCaptureState.c)
 *     EtwpCoverageSamplerStart @ 0x1408C8B50 (EtwpCoverageSamplerStart.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140051510 (ObfDereferenceObjectWithTag.c)
 *     _guard_dispatch_icall @ 0x1401C5ED0 (_guard_dispatch_icall.c)
 *     PsGetNextProcess @ 0x1405B21E0 (PsGetNextProcess.c)
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
