/*
 * XREFs of PsGetServerSiloState @ 0x14012A1FC
 * Callers:
 *     SepQueueWorkItem @ 0x14012A09C (SepQueueWorkItem.c)
 *     PspCompleteServerSiloShutdown @ 0x140886CB8 (PspCompleteServerSiloShutdown.c)
 *     PspCompleteServerSiloShutdownDeferred @ 0x140886D10 (PspCompleteServerSiloShutdownDeferred.c)
 *     PspDeleteSilo @ 0x14088739C (PspDeleteSilo.c)
 *     PspCatchCriticalBreak @ 0x14088B470 (PspCatchCriticalBreak.c)
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
