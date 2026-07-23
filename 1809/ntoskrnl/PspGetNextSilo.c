/*
 * XREFs of PspGetNextSilo @ 0x140601968
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14008F590 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C6838 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x1407568E0 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x1408878B0 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x140887BC0 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x14088C204 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x14088CCE0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FCA0 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1406019A0 (PspGetNextJob.c)
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
