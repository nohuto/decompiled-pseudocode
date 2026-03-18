/*
 * XREFs of PspGetNextSilo @ 0x140613848
 * Callers:
 *     EtwpAdjustTraceBuffers @ 0x14012F760 (EtwpAdjustTraceBuffers.c)
 *     EtwpUpdateGlobalGroupMasks @ 0x1406E7148 (EtwpUpdateGlobalGroupMasks.c)
 *     PsStartSiloMonitor @ 0x14077B960 (PsStartSiloMonitor.c)
 *     PsFreeSiloContextSlot @ 0x1408C4A10 (PsFreeSiloContextSlot.c)
 *     PsRootSiloInformation @ 0x1408C4D20 (PsRootSiloInformation.c)
 *     PsShutdownSystem @ 0x1408C9464 (PsShutdownSystem.c)
 *     PsUnregisterSiloMonitor @ 0x1408C9F50 (PsUnregisterSiloMonitor.c)
 * Callees:
 *     PsIsServerSilo @ 0x1400E5F70 (PsIsServerSilo.c)
 *     PspGetNextJob @ 0x140613880 (PspGetNextJob.c)
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
