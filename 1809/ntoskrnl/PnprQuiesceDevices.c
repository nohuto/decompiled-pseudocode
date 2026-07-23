/*
 * XREFs of PnprQuiesceDevices @ 0x14057B1E0
 * Callers:
 *     PnprQuiesceWorker @ 0x14057BBC0 (PnprQuiesceWorker.c)
 *     PnpReplacePartitionUnit @ 0x1408349E0 (PnpReplacePartitionUnit.c)
 * Callees:
 *     memset @ 0x1401D1980 (memset.c)
 *     PoBroadcastSystemState @ 0x1405691E0 (PoBroadcastSystemState.c)
 *     PnprGetMillisecondCounter @ 0x14057A7BC (PnprGetMillisecondCounter.c)
 *     PoStartPowerStateTasks @ 0x1406DEE70 (PoStartPowerStateTasks.c)
 *     PoBlockConsoleSwitch @ 0x1406DEEB0 (PoBlockConsoleSwitch.c)
 *     PoInitializeBroadcast @ 0x1406E1D44 (PoInitializeBroadcast.c)
 *     PoStartPartitionReplace @ 0x14086D214 (PoStartPartitionReplace.c)
 */

__int64 __fastcall PnprQuiesceDevices(char *a1)
{
  int started; // edi
  __int64 v3; // rdx
  int v4; // ecx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  int v14; // eax
  int v15; // eax

  *(_DWORD *)(PnprContext + 21024) = PnprGetMillisecondCounter(0);
  memset(a1, 0, 0x3CuLL);
  *((_DWORD *)a1 + 10) = 2;
  *(_DWORD *)a1 = -2013265920;
  *((_DWORD *)a1 + 12) = -2013265920;
  *((_DWORD *)a1 + 11) = 5;
  *((_DWORD *)a1 + 8) = PoBlockConsoleSwitch(a1 + 36);
  started = PoStartPowerStateTasks(a1 + 36);
  if ( started >= 0 )
  {
    PoStartPartitionReplace(a1 + 36, *((unsigned int *)a1 + 8));
    *((_DWORD *)a1 + 2) = 5;
    *((_DWORD *)a1 + 4) = 1;
    *((_DWORD *)a1 + 1) = 1;
    *((_DWORD *)a1 + 6) = *(_DWORD *)a1;
    *((_DWORD *)a1 + 3) = 5;
    *((_DWORD *)a1 + 5) = 2;
    started = PoInitializeBroadcast(0LL);
    if ( started >= 0 )
    {
      a1[30] = 3;
      PoBroadcastSystemState((__int64)(a1 + 4), v6, v7, v8);
      a1[30] = 2;
      started = PoBroadcastSystemState((__int64)(a1 + 4), v10, v11, v12);
      if ( started >= 0 )
        goto LABEL_16;
      v9 = 2016;
    }
    else
    {
      v9 = 1998;
    }
    v13 = PnprContext;
    v14 = *(_DWORD *)(PnprContext + 20984);
    if ( !v14 )
      v14 = v9;
    *(_DWORD *)(PnprContext + 20984) = v14;
    v15 = *(_DWORD *)(v13 + 20988);
    if ( !v15 )
      v15 = 7;
    *(_DWORD *)(v13 + 20988) = v15;
  }
  else
  {
    v3 = PnprContext;
    v4 = *(_DWORD *)(PnprContext + 20984);
    if ( !v4 )
      v4 = 1975;
    v5 = *(_DWORD *)(PnprContext + 20988);
    *(_DWORD *)(PnprContext + 20984) = v4;
    if ( !v5 )
      v5 = 7;
    *(_DWORD *)(v3 + 20988) = v5;
  }
LABEL_16:
  *(_DWORD *)(PnprContext + 21028) = PnprGetMillisecondCounter(0);
  return (unsigned int)started;
}
