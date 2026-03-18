/*
 * XREFs of PfLogEvent @ 0x1400956A8
 * Callers:
 *     PfFileInfoNotify @ 0x140093D90 (PfFileInfoNotify.c)
 *     PfLogForegroundProcess @ 0x14009619C (PfLogForegroundProcess.c)
 *     PfpLogApplicationEvent @ 0x140096F98 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1400972F8 (PfpRpLogDeprioEvent.c)
 *     PfHardFaultLog @ 0x140126D4C (PfHardFaultLog.c)
 *     PfLogFileDataAccess @ 0x1402ED818 (PfLogFileDataAccess.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140596614 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PfpLogEventRequest @ 0x14072913C (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x140744618 (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x140095794 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x14009586C (PfFbLogEntryComplete.c)
 *     memmove @ 0x1401D6880 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140467760);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140467910 + 1, 1u);
  }
  else
  {
    MEMORY[0] = MEMORY[0] & 0xFFFFFFFFFFFFF003uLL | ((v8 & 0x3FF0 | 0x8000CuLL) >> 2);
    MEMORY[8] = a2;
    MEMORY[0] ^= (MEMORY[0] ^ (a1 << 12)) & 0x1F000;
    memmove((void *)0x10, a3, a4);
    PfFbLogEntryComplete(0LL);
    return 0;
  }
  return (unsigned int)v9;
}
