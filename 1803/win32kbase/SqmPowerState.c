/*
 * XREFs of SqmPowerState @ 0x1C00A5330
 * Callers:
 *     UserPowerInfoCallout @ 0x1C005A654 (UserPowerInfoCallout.c)
 *     SetProtocolType @ 0x1C00A1650 (SetProtocolType.c)
 *     ?PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A28F8 (-PowerOffSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWERON_LOC@@@Z @ 0x1C00A29A8 (-PowerOnSession@@YAXW4POWER_MONITOR_REQUEST_REASON@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@W4_POWER.c)
 *     PowerDimMonitor @ 0x1C00A466C (PowerDimMonitor.c)
 *     PowerOffMonitor @ 0x1C00A48E0 (PowerOffMonitor.c)
 *     PowerOnMonitor @ 0x1C00A4C90 (PowerOnMonitor.c)
 *     PowerUnDimMonitor @ 0x1C00A5200 (PowerUnDimMonitor.c)
 * Callees:
 *     ?_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z @ 0x1C0068884 (-_WinSqmDWORDEvent@@YAXPEBU_EVENT_DESCRIPTOR@@PEAU_GUID@@KK@Z.c)
 */

__int64 SqmPowerState()
{
  int v0; // ebx
  int v1; // r8d
  int v2; // edi
  unsigned int v3; // esi
  __int64 result; // rax

  v0 = 0;
  if ( dword_1C01A3088 )
  {
    v1 = 4014;
    if ( gPowerTransitionsState )
    {
      v2 = 4011;
      if ( dword_1C01A0350 == 2 )
        v0 = 4119;
    }
    else
    {
      v2 = 4009;
    }
  }
  else
  {
    v1 = 4015;
    if ( gPowerTransitionsState )
    {
      v2 = 4012;
      if ( dword_1C01A0350 == 2 )
        v0 = 4120;
    }
    else
    {
      v2 = 4010;
    }
  }
  v3 = ((unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
      - dword_1C01A309C)
     / 0x3E8;
  _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, v1, v3);
  _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, v2, v3);
  if ( (unsigned int)(v0 - 4119) <= 1 )
    _WinSqmDWORDEvent(&SQM_INCREMENT_DWORD, 0LL, v0, v3);
  result = MEMORY[0xFFFFF78000000320];
  dword_1C01A309C = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
  return result;
}
