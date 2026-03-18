/*
 * XREFs of PfLogEvent @ 0x1400D29C8
 * Callers:
 *     PfFileInfoNotify @ 0x1400D10B0 (PfFileInfoNotify.c)
 *     PfLogForegroundProcess @ 0x1400D34BC (PfLogForegroundProcess.c)
 *     PfpLogApplicationEvent @ 0x1400D42B8 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1400D4618 (PfpRpLogDeprioEvent.c)
 *     PfHardFaultLog @ 0x14012784C (PfHardFaultLog.c)
 *     PfLogFileDataAccess @ 0x1402ED578 (PfLogFileDataAccess.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140596560 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140596AF4 (PfPowerActionNotify.c)
 *     PfpLogEventRequest @ 0x14072A4AC (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x140746518 (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryReserve @ 0x1400D2AB4 (PfFbLogEntryReserve.c)
 *     PfFbLogEntryComplete @ 0x1400D2B8C (PfFbLogEntryComplete.c)
 *     memmove @ 0x1401D7480 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  __int16 v8; // bx
  int v9; // edi

  v8 = (a4 + 31) & 0xFFF0;
  v9 = PfFbLogEntryReserve(&stru_140467460);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_140467610 + 1, 1u);
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
