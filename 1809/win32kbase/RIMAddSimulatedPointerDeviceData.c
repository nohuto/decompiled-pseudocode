/*
 * XREFs of RIMAddSimulatedPointerDeviceData @ 0x1C0114C5C
 * Callers:
 *     RIMInsertSimulatedContactEndStateInFrame @ 0x1C0128108 (RIMInsertSimulatedContactEndStateInFrame.c)
 *     rimInsertSimulatedContactKeepAliveStateInFrame @ 0x1C012AF44 (rimInsertSimulatedContactKeepAliveStateInFrame.c)
 * Callees:
 *     Win32AllocPoolZInit @ 0x1C002EB70 (Win32AllocPoolZInit.c)
 *     WPP_RECORDER_SF_d @ 0x1C0032A20 (WPP_RECORDER_SF_d.c)
 *     RIMSetContactBoundary @ 0x1C0113168 (RIMSetContactBoundary.c)
 *     rimHidP_SetUsageValue @ 0x1C011C9DC (rimHidP_SetUsageValue.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C0186088 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMAddSimulatedPointerDeviceData(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
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
  int v16; // eax
  unsigned __int16 v17; // r9
  __int64 v19; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)(a2 + 16);
  if ( !v6 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  if ( a2 != *(_QWORD *)(v6 + 480) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1, a2, a3);
  v10 = *(_QWORD *)(v6 + 464);
  v11 = *(_QWORD *)(v10 + 16);
  v12 = *(unsigned __int16 *)(v10 + 44);
  if ( (unsigned int)(*(_DWORD *)(a2 + 24) - 1) > 3
    || (v13 = RIMSetContactBoundary(a2, (_DWORD *)(a4 + 128), *(_QWORD *)(a3 + 2572), 0, 0), v13 >= 0) )
  {
    v14 = Win32AllocPoolZInit(*(unsigned __int16 *)(*(_QWORD *)(v6 + 464) + 44LL), 0x63707352u);
    v15 = (__int64)v14;
    if ( !v14 )
      return (unsigned int)-1073741801;
    v16 = rimHidP_SetUsageValue(0, 1, 0, 48, *(_DWORD *)(a3 + 2572), v11, (__int64)v14, v12);
    v13 = v16;
    if ( v16 < 0 )
    {
      v17 = 43;
    }
    else
    {
      v16 = rimHidP_SetUsageValue(0, 1, 0, 49, *(_DWORD *)(a3 + 2576), v11, v15, v12);
      v13 = v16;
      if ( v16 >= 0 )
      {
        *a5 = v15;
        *a6 = v12;
        return (unsigned int)v13;
      }
      v17 = 42;
    }
    LODWORD(v19) = v16;
    WPP_RECORDER_SF_d(gRimLog, 3u, 0x14u, v17, (__int64)&WPP_8c8630714ce6380095b900d04faa9778_Traceguids, v19);
  }
  return (unsigned int)v13;
}
