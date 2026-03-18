/*
 * XREFs of UserProcessInputIsolationPolicy @ 0x1C0132670
 * Callers:
 *     NtMITBindInputTypeToMonitors @ 0x1C00B38F0 (NtMITBindInputTypeToMonitors.c)
 * Callees:
 *     GetMonitorRect @ 0x1C0057744 (GetMonitorRect.c)
 *     HMValidateSharedHandleNoRip @ 0x1C005C4B4 (HMValidateSharedHandleNoRip.c)
 *     _guard_dispatch_icall_nop @ 0x1C0079B40 (_guard_dispatch_icall_nop.c)
 *     ?UpdateMonitorsExclusionState@@YAXIPEAPEAUHMONITOR__@@@Z @ 0x1C013261C (-UpdateMonitorsExclusionState@@YAXIPEAPEAUHMONITOR__@@@Z.c)
 *     ?UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ @ 0x1C0132894 (-UnbindMonitorsFromInput@CBaseProcessor@@QEAAXXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

void __fastcall UserProcessInputIsolationPolicy(char a1, unsigned int a2, HMONITOR *a3)
{
  CBaseProcessor *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  CBaseProcessor *v8; // rbx
  __int64 v9; // rax
  __int64 i; // rcx
  __int128 v11; // [rsp+20h] [rbp-18h] BYREF

  if ( (a1 & 9) == 9 )
  {
    v5 = (CBaseProcessor *)(*(__int64 (__fastcall **)(CMouseSensor *))(*(_QWORD *)qword_1C019A5A8 + 8LL))(qword_1C019A5A8);
    v8 = v5;
    if ( a2 )
    {
      if ( !a3 )
        MicrosoftTelemetryAssertTriggeredNoArgsKM(v7, v6);
      if ( *((_QWORD *)v8 + 3) )
        CBaseProcessor::UnbindMonitorsFromInput(v8);
      *((_QWORD *)v8 + 3) = a3;
      *((_DWORD *)v8 + 8) = a2;
    }
    else
    {
      CBaseProcessor::UnbindMonitorsFromInput(v5);
    }
  }
  if ( a2 )
  {
    v9 = HMValidateSharedHandleNoRip((int)*a3);
    if ( v9 )
      gptCursorAsync = *(struct tagPOINT *)GetMonitorRect(&v11, v9);
    UpdateMonitorsExclusionState(a2, a3);
  }
  else
  {
    for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
      *(_DWORD *)(i + 600) = 0;
  }
}
