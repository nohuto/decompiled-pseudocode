/*
 * XREFs of PfLogEvent @ 0x1400D5478
 * Callers:
 *     PfHardFaultLog @ 0x140019F24 (PfHardFaultLog.c)
 *     PfFileInfoNotify @ 0x1400D3E60 (PfFileInfoNotify.c)
 *     PfLogForegroundProcess @ 0x1400D7470 (PfLogForegroundProcess.c)
 *     PfpLogApplicationEvent @ 0x1400D8518 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1400E2194 (PfpRpLogDeprioEvent.c)
 *     PfLogFileDataAccess @ 0x1402D3368 (PfLogFileDataAccess.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140567844 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140568F10 (PfPowerActionNotify.c)
 *     PfpLogEventRequest @ 0x1406E2D34 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x14071CF54 (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryComplete @ 0x1400D5420 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x1400D5564 (PfFbLogEntryReserve.c)
 *     memmove @ 0x1401D1640 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // edi
  __int64 v10; // rdx

  v8 = (a4 + 31) & 0xFFFFFFF0;
  v9 = PfFbLogEntryReserve(&stru_14043CD60);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_14043CF10 + 1, 1u);
  }
  else
  {
    MEMORY[0] = MEMORY[0] & 0xFFFFFFFFFFFFF003uLL | ((v8 & 0x3FF0 | 0x8000CuLL) >> 2);
    MEMORY[8] = a2;
    MEMORY[0] ^= (MEMORY[0] ^ (a1 << 12)) & 0x1F000;
    memmove((void *)0x10, a3, a4);
    PfFbLogEntryComplete(0LL, v10, v8);
    return 0;
  }
  return (unsigned int)v9;
}
