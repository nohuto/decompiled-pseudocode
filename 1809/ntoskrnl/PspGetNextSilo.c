/*
 * XREFs of PspGetNextSilo @ 0x140600968
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14008F670 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406C55B8 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x140755710 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x140886670 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x140886980 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x14088AFC4 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x14088BAA0 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x14008FD60 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x1406009A0 (PspGetNextJob.c)
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
