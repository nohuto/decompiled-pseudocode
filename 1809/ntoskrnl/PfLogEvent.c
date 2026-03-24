/*
 * XREFs of PfLogEvent @ 0x1400D53F8
 * Callers:
 *     PfHardFaultLog @ 0x140019F24 (PfHardFaultLog.c)
 *     PfFileInfoNotify @ 0x1400D3DE0 (PfFileInfoNotify.c)
 *     PfLogForegroundProcess @ 0x1400D73F0 (PfLogForegroundProcess.c)
 *     PfpLogApplicationEvent @ 0x1400D8498 (PfpLogApplicationEvent.c)
 *     PfpRpLogDeprioEvent @ 0x1400E2114 (PfpRpLogDeprioEvent.c)
 *     PfLogFileDataAccess @ 0x1402D3178 (PfLogFileDataAccess.c)
 *     PfpPowerActionStartScenarioTracing @ 0x140566844 (PfpPowerActionStartScenarioTracing.c)
 *     PfPowerActionNotify @ 0x140567F10 (PfPowerActionNotify.c)
 *     PfpLogEventRequest @ 0x1406E1A94 (PfpLogEventRequest.c)
 *     PfpLogScenarioEvent @ 0x14071BCB4 (PfpLogScenarioEvent.c)
 * Callees:
 *     PfFbLogEntryComplete @ 0x1400D53A0 (PfFbLogEntryComplete.c)
 *     PfFbLogEntryReserve @ 0x1400D54E4 (PfFbLogEntryReserve.c)
 *     memmove @ 0x1401D1540 (memmove.c)
 */

__int64 __fastcall PfLogEvent(int a1, int a2, const void *a3, unsigned int a4)
{
  unsigned int v8; // ebx
  int v9; // edi
  __int64 v10; // rdx

  v8 = (a4 + 31) & 0xFFFFFFF0;
  v9 = PfFbLogEntryReserve(&stru_14043BCA0);
  if ( v9 < 0 )
  {
    _InterlockedExchangeAdd((_DWORD *)&xmmword_14043BE50 + 1, 1u);
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
