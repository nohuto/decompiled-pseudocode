/*
 * XREFs of PspGetNextSilo @ 0x140615358
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x1401301E0 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E8248 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x14077E230 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x1408C42E0 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1408C45F0 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x1408C8D44 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9830 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400EAF10 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x140615390 (PspGetNextJob.c)
 */

void *__fastcall PspGetNextSilo(void *a1, char a2)
{
  __int64 NextJob; // rax
  void *v4; // r8

  while ( 1 )
  {
    NextJob = PspGetNextJob(a1);
    v4 = (void *)NextJob;
    if ( !NextJob )
      return 0LL;
    if ( (*(_DWORD *)(NextJob + 1304) & 0x40000000) != 0 && (!a2 || PsIsServerSilo(NextJob)) )
      break;
    a1 = v4;
  }
  return v4;
}
