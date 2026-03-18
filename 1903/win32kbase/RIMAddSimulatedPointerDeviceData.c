/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1C013D3E0
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0154CEC (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C0157D10 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C0014870 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_D @ 0x1C00380CC (WPP_RECORDER_SF_D.c)
 *     rimHidP_SetUsageValue @ 0x1C01454B4 (rimHidP_SetUsageValue.c)
 *     RIMSetContactBoundary @ 0x1C0146630 (RIMSetContactBoundary.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01CAB94 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        __int64 *a5,
        _DWORD *a6)
{
  __int64 v6; // rdi
  __int64 v10; // rax
  __int64 v11; // r14
  int v12; // esi
  int v13; // ebx
  void *v14; // rax
  __int64 v15; // rdi
  int v16; // edx
  int v17; // r9d

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( a2 != *(_QWORD *)(v6 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = *(_QWORD *)(v6 + 464);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
    || (v13 = RIMSetContactBoundary(a2, a4 + 128, *(_QWORD *)(a3 + 2596), 0, 0), v13 >= 0) )
  {
    v14 = Win32AllocPoolZInit(*(unsigned __int16 *)(*(_QWORD *)(v6 + 464) + 44LL), 1668313938LL);
    v15 = (__int64)v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    v13 = rimHidP_SetUsageValue(0, 1, 0, 48, *(_DWORD *)(a3 + 2596), v11, (__int64)v14, v12);
    if ( v13 < 0 )
    {
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v13;
      v17 = 42;
    }
    else
    {
      v13 = rimHidP_SetUsageValue(0, 1, 0, 49, *(_DWORD *)(a3 + 2600), v11, v15, v12);
      if ( v13 >= 0 )
      {
        *a5 = v15;
        *a6 = v12;
        return (unsigned int)v13;
      }
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        return (unsigned int)v13;
      v17 = 41;
    }
    LOBYTE(v16) = 3;
    WPP_RECORDER_SF_D((_DWORD)gRimLog, v16, 1, v17, (__int64)&WPP_af44ccec84063b6d6115201cb64a79ca_Traceguids, v13);
  }
  return (unsigned int)v13;
}
