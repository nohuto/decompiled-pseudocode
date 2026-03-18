/*
 * XREFs of PsGetServerSiloState @ 0x14012CEA0
 * Callers:
 *     SepQueueWorkItem @ 0x14012CD34 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1408C5088 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C50E0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x1408C571C (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x1408C9944 (PspCatchCriticalBreak.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PsGetServerSiloState(__int64 a1)
{
  if ( a1 )
    return *(unsigned int *)(*(_QWORD *)(a1 + 1256) + 1088LL);
  else
    return 1LL;
}
