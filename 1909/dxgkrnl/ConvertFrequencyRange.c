/*
 * XREFs of ConvertFrequencyRange @ 0x1C01753F8
 * Callers:
 *     ?_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ @ 0x1C0175E70 (-_ParseEDIDBaseBlock@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     memset @ 0x1C0025440 (memset.c)
 *     ?IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z @ 0x1C01754C8 (-IsValidFrequencyRange@@YAJAEBU_D3DKMDT_MONITOR_FREQUENCY_RANGE@@@Z.c)
 *     ?ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C0176254 (-ConvertMonitorCapablitiesOrigin@@YAJW4__WMI_MONITOR_CAPABILITY_ORIGIN_TYPE@@PEAW4_D3DKMDT_MONIT.c)
 */

__int64 __fastcall ConvertFrequencyRange(_DWORD *a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rsi
  int v7; // eax
  __int64 result; // rax
  int v9; // ecx
  int v10; // ecx
  __int64 v11; // rax

  if ( !a1 || !a2 )
    return 3221225485LL;
  memset((void *)a2, 0, 0x30uLL);
  v6 = (int)a1[9];
  if ( a1[9] == 1 )
  {
    v7 = 1;
  }
  else
  {
    if ( a1[9] != 2 )
    {
      v11 = WdLogNewEntry5_WdError((unsigned int)(a1[9] - 1), v4, v5);
      *(_QWORD *)(v11 + 24) = v6;
      WdLogEvent5_WdError(v11);
      *(_DWORD *)(a2 + 36) = 0;
      return 3223192408LL;
    }
    v7 = 2;
  }
  *(_DWORD *)(a2 + 36) = v7;
  result = ConvertMonitorCapablitiesOrigin(*(unsigned __int8 *)a1, a2);
  if ( (int)result < 0 )
    return result;
  v9 = *(_DWORD *)(a2 + 36);
  *(_DWORD *)(a2 + 4) = a1[1];
  *(_DWORD *)(a2 + 8) = a1[2];
  *(_DWORD *)(a2 + 12) = a1[3];
  *(_DWORD *)(a2 + 16) = a1[4];
  *(_DWORD *)(a2 + 20) = a1[5];
  *(_DWORD *)(a2 + 24) = a1[6];
  *(_DWORD *)(a2 + 28) = a1[7];
  *(_DWORD *)(a2 + 32) = a1[8];
  v10 = v9 - 1;
  if ( !v10 )
  {
    *(_DWORD *)(a2 + 40) = a1[10];
    *(_DWORD *)(a2 + 44) = a1[11];
    return IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)a2);
  }
  if ( v10 != 1 )
    return 3223192408LL;
  *(_QWORD *)(a2 + 40) = (unsigned int)a1[12];
  return IsValidFrequencyRange((const struct _D3DKMDT_MONITOR_FREQUENCY_RANGE *)a2);
}
