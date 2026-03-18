/*
 * XREFs of PpmPerfQueueAction @ 0x1401768EC
 * Callers:
 *     PpmParkReportParkedCores @ 0x14011EAE0 (PpmParkReportParkedCores.c)
 *     PpmParkUnblockIdle @ 0x140120E80 (PpmParkUnblockIdle.c)
 *     PpmParkReportUnparkedCores @ 0x140120ED0 (PpmParkReportUnparkedCores.c)
 *     PpmPerfApplyProcessorStates @ 0x1401760B0 (PpmPerfApplyProcessorStates.c)
 * Callees:
 *     KiInsertQueueDpc @ 0x14009C970 (KiInsertQueueDpc.c)
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
