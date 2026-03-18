/*
 * XREFs of PsGetServerSiloState @ 0x14012A1DC
 * Callers:
 *     SepQueueWorkItem @ 0x14012A07C (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140886CD8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140886D30 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x1408873BC (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14088B490 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1256) + 1104LL);
  else
    return 1LL;
}
