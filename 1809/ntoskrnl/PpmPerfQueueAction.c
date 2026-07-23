/*
 * XREFs of PpmPerfQueueAction @ 0x1401759D8
 * Callers:
 *     PpmParkUnblockIdle @ 0x1401223D0 (PpmParkUnblockIdle.c)
 *     PpmParkReportParkedCores @ 0x140122420 (PpmParkReportParkedCores.c)
 *     PpmParkReportUnparkedCores @ 0x140122470 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x140175290 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x1400621B0 (KiInsertQueueDpc.c)
 */

__int64 __fastcall PpmPerfQueueAction(__int64 a1, char a2)
{
  __int64 result; // rax

  _m_prefetchw((const void *)(a1 + 24144));
  result = (unsigned int)_InterlockedOr((volatile signed __int32 *)(a1 + 24144), 1 << a2);
  if ( !(_DWORD)result )
    return KiInsertQueueDpc(a1 + 24080, 0LL, 0LL, 0LL, 0);
  return result;
}
