/*
 * XREFs of RIMHandleAnySignalledReadsOnDestroyed @ 0x1C00FAF84
 * Callers:
 *     RIMUpdateSecondaryRim @ 0x1C00FB5A4 (RIMUpdateSecondaryRim.c)
 *     ?RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z @ 0x1C0123CA0 (-RIMCallBack@CBaseInput@@AEAAXPEAURIMDevChangeStruct@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003A778 (WPP_RECORDER_SF_.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0168190 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMHandleAnySignalledReadsOnDestroyed(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  _QWORD *v8; // rax
  _QWORD *v9; // rdx
  _QWORD *v10; // rdx

  WPP_RECORDER_SF_(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    0x14u,
    0x41u,
    (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
  v5 = *(_QWORD *)(a1 + 24);
  if ( *(_DWORD *)a1 == 4 )
  {
    v6 = *(unsigned int *)(v5 + 264);
    if ( (v6 & 0x40000000) != 0 )
    {
      if ( !a2 )
        a2 = *(_QWORD *)(v5 + 416);
      if ( (v6 & 0x1000) != 0 )
      {
        v7 = *(_QWORD *)(v5 + 104);
      }
      else
      {
        v7 = *(_QWORD *)(v5 + 424);
        if ( !v7 )
          v7 = *(_QWORD *)(v5 + 96);
      }
      if ( *(_DWORD *)(a2 + 640) )
      {
        v9 = *(_QWORD **)(a2 + 656);
        if ( (unsigned __int64)v9 >= MmUserProbeAddress )
          v9 = (_QWORD *)MmUserProbeAddress;
        if ( *v9 != v7 )
          MicrosoftTelemetryAssertTriggeredNoArgsKM(MmUserProbeAddress, v9);
        v10 = *(_QWORD **)(a2 + 656);
        if ( (unsigned __int64)v10 >= MmUserProbeAddress )
          v10 = (_QWORD *)MmUserProbeAddress;
        *v10 = -1LL;
      }
      else
      {
        v8 = *(_QWORD **)(a2 + 656);
        if ( *v8 != v7 )
        {
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v4);
          v8 = *(_QWORD **)(a2 + 656);
        }
        *v8 = -1LL;
      }
    }
  }
  return WPP_RECORDER_SF_(
           (__int64)WPP_GLOBAL_Control->DeviceExtension,
           3u,
           0x14u,
           0x43u,
           (__int64)&WPP_d80feb762ea23db244f84e50bb903cde_Traceguids);
}
