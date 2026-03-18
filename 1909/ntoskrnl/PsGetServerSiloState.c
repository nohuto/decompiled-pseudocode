/*
 * XREFs of PsGetServerSiloState @ 0x14012D970
 * Callers:
 *     SepQueueWorkItem @ 0x14012D804 (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x1408C4958 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x1408C49B0 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x1408C4FFC (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x1408C9224 (PspCatchCriticalBreak.c)
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
