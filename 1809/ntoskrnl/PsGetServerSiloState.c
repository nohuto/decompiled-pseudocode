/*
 * XREFs of PsGetServerSiloState @ 0x14012A2CC
 * Callers:
 *     SepQueueWorkItem @ 0x14012A16C (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140887F18 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140887F70 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x1408885FC (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14088C6D0 (PspCatchCriticalBreak.c)
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
